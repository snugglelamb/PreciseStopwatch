PreciseStopwatch
================
**Brief intro**<br>
Stopwatch of precision at 10 ms. One developed using QT Creator, another developed using Cocoa<br><br>
**Qt app**<br>
Qt app is built on OSX and could be compiled on Linux machine. Since I used C++ on Qt 5.0 to write this project, you could simply sh install.sh to compile and build the app, which is under qt directory. Inside the sh file, the script first use qmake to create Qt makefile, then use make to compile the Qt makefile to executable program, and at last use ./ to execute the file.<br><br>
**Cocoa app**<br>
cocoa app is built under osx environment using object C, I don't think it will work on Linux machine since I couldn't compile it over eniac. It's just a backup for this assignment, and I built it in the first place before using Qt.<br><br>
**Verification and Validation**<br>
I've compared both programs with Iphone stopwatch for more than 15 minutes, they both are accurate(no difference is shown). Moreover, from an algorithm view, the Qt app is more accurate than the latter one. <br>
