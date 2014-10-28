//
//  AppDelegate.m
//  stopwatch
//
//  Created by 李 智 on 9/15/14.
//  Copyright (c) 2014 Li. All rights reserved.
//

#import "AppDelegate.h"
int milsec = 0;
int second = 0;
int minute = 0;
int hour   = 0;
double factor = 0.000212; //15min iphone clock vs. 14min41s
BOOL started = TRUE;


@implementation AppDelegate


- (void)applicationDidFinishLaunching:(NSNotification *)aNotification
{
    // Insert code here to initialize your application
}

- (IBAction)push_start:(id)sender {
    if (started)
    {
        //[_reset setTitle:@"Stop"];
        started  = false;
        [self tick:nil];
    }else{
       // started = true;``
        //[_reset setTitle:@"Start"];
        
    }
}

- (IBAction)push_reset:(id)sender {
    

    if (started){
       [_TextTimer setStringValue:@"00 : 00 : 00 . 00"];
        milsec = 0;
        second = 0;
        minute = 0;
        hour = 0;
    }
    
}

- (IBAction)push_stop:(id)sender {
    if(!started)
    {
        started = true;
    }
    
}

-(void)tick:(id)sender{
    if (!started)
    {
        NSDate *start = [NSDate date];
        NSString *msec = [NSString stringWithFormat:@"%i", milsec];
        if (milsec < 10)
        {
            msec = [NSString stringWithFormat:@"0%i",milsec];
        }

        NSString *sec = [NSString stringWithFormat:@"%i", second];
            if (second < 10)
            {
                sec = [NSString stringWithFormat:@"0%i",second];
            }
        NSString *min = [NSString stringWithFormat:@"%i", minute];
        if (minute < 10)
        {
            min = [NSString stringWithFormat:@"0%i",minute];
        }
        
        NSString *hr = [NSString stringWithFormat:@"%i", hour];
        if (hour < 10)
        {
            hr = [NSString stringWithFormat:@"0%i",hour];
        }

        NSString *time = [NSString stringWithFormat:@"%@ : %@ : %@ . %@",hr,min,sec,msec];
       
        [_TextTimer setStringValue: time];
        
        
        [self performSelector:@selector(tick:)withObject:nil afterDelay: 0.0];
        
        
        NSTimeInterval timeInterval = 0.0;
        while (timeInterval<0.01)
        {
             sleep(0.001);
            timeInterval = fabs([start timeIntervalSinceNow]) + factor;
          
        }
        milsec +=1;
        if (milsec > 99){
            milsec = 0;
            second += 1;
        }
        if (second > 59){
            second = 0;
            minute+=1;
        }
        if( minute > 59){
            minute = 0;
            hour +=1;
        }
        
    }

}

@end
