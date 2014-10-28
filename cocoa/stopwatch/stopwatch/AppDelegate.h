//
//  AppDelegate.h
//  stopwatch
//
//  Created by 李 智 on 9/15/14.
//  Copyright (c) 2014 Li. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@interface AppDelegate : NSObject <NSApplicationDelegate>

@property (assign) IBOutlet NSWindow *window;
@property (weak) IBOutlet NSTextField *TextTimer;
@property (weak) IBOutlet NSButton *reset;
- (IBAction)push_start:(id)sender;
- (IBAction)push_reset:(id)sender;
- (IBAction)push_stop:(id)sender;

-(void)tick:(id)sender;

@end
