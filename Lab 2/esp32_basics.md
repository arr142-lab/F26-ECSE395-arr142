# ESP32 Basics

This was my first assignment working with the ESP32. The goal is to make the LED blink and send a message

I uploaded the code to the ESP32 using Visual Studio Code with the PlatformIO IDE extension. I used the Arduino framework through PlatformIO. 

## Steps I Took

1. Installed Visual Studio Code.
2. Installed the PlatformIO IDE extension.
3. Connected the Adafruit Feather ESP32 V2 to my laptop using a USB-C data cable.
4. Created a new PlatformIO project called Blink Test.
5. Selected the Adafruit Feather ESP32 V2 as the board.
6. Selected Arduino as the framework.
7. Opened the main.cpp file inside the src folder.
8. Added code to control the onboard LED.
9. Set the serial connection to 115200 baud.
10. Changed the Serial Monitor message to "arr142's ESP32 is alive!!!"
11. Programmed the LED to stay on for 500 milliseconds and off for 1000 milliseconds.
12. Built the program using PlatformIO.
13. Uploaded the program to the ESP32.
14. Opened the Serial Monitor and confirmed that my custom message was printing.
15. Verified that the onboard LED was blinking with the timing I programmed.

## Time Reporting and Reflection

### 1. How long did it take you to complete this assignment?

It took me approximately 50 minutes to complete the assignment.

### 2. What level of difficulty would you associate with this assignment?

Medium.

### 3. If you associated medium/high difficulty with this assignment, what aspect did you find the most difficult?

The most difficult part was getting familiar with PlatformIO and figuring out the upload and Serial Monitor process. I also had to troubleshoot the ESP32 when it entered download mode and was waiting for a new upload. Once I understood how the build, upload, reset, and Serial Monitor functions worked, the rest of the assignment was much easier. I have used the Eligo Arduino before but this is new.

### 4. How comfortable do you currently feel with the course content?

I feel fairly comfortable with the course content so far. Before this lab I had not worked with the ESP32, so there was a learning curve with PlatformIO and the board setup. After completing the lab, I feel more comfortable creating a PlatformIO project, modifying code, uploading it to a microcontroller, and checking the output through the Serial Monitor.

### 5. Do you have any additional information or feedback you would like to share with the instructors?

The lab was helpful for getting introduced to the ESP32 and PlatformIO. More detailed instructions for organizing and uploading the PlatformIO project files to GitHub would be helpful because that part was less straightforward than programming and running the ESP32.