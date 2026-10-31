
# Week 10 Project Log

## ECSE 395 Semester Project

Student: Aedan Reagans  
Case ID: `arr142`  
Team members: Lucas Benson and Zachary Blue

## October 30, 2026

### ESP32 Software Development

This week, I continued working on the ESP32 code for our prototype. I made changes to the detection logic to better control how the sensors interact and when the system activates an alert.

One of the main focuses was making sure the ultrasonic sensor could prevent the PIR sensor from triggering a motion alert when someone is detected within the set distance. I also worked on the vibration sensor logic so that contact with the gate could trigger a separate alert.

The code is making progress, but we still need to test the system further to make sure it responds correctly in different situations.

### Sensor Testing and Debugging

I spent time testing the ESP32 with the connected sensors and reviewing the serial monitor output. Earlier testing showed issues with the ultrasonic sensor not returning distances and the buzzer not working correctly.

After making changes, I was able to get distance readings from the ultrasonic sensor and observe the system changing between different alert states. I also reviewed when the PIR sensor triggered a motion alert and how long the alert remained active.

The vibration sensor was also able to trigger contact alerts during testing. We still need to make sure the sensors work consistently together and that the alerts respond as intended.

### Presentation Preparation

I also worked on preparing for our project presentation. My focus was on the evaluation plan and specifications, including how we plan to test the prototype and use the results to improve the design.

We discussed how we would evaluate the sensor detection, alert response, and overall system operation. We also considered how testing could help us determine what adjustments need to be made before the next prototype.

### Prototype Development

The enclosure from the previous week gave us a better idea of the changes needed for the next version. We still need to make those adjustments and work toward fitting the electronics into the enclosure.

Our electrical prototype is also still being tested separately. Getting the sensors and alert system working consistently is an important step before putting everything together.

### Individual Contributions

- I continued developing and modifying the ESP32 code.
- I worked on the ultrasonic sensor logic to prevent unwanted PIR alerts.
- I tested the sensors and reviewed the serial monitor output.
- I investigated problems with the ultrasonic sensor and buzzer.
- I checked how the PIR and vibration sensors affected the alert states.
- I worked on the evaluation plan and specifications for our presentation.
- I documented my progress and remaining tasks in my Week 10 project log.

### Group Contributions

This week, our team continued making progress on the electrical prototype and preparing for our presentation. The sensor testing helped us better understand how the system responds and what still needs to be fixed.

We also reviewed our prototype development and the remaining work needed before integration. Although the full system is not assembled yet, we have made progress toward getting the electrical components working together.

### Next Steps

- Continue testing and debugging the ESP32 code.
- Make sure the ultrasonic sensor consistently blocks unwanted motion alerts.
- Check the buzzer operation and alert timing.
- Test the vibration sensor and PIR sensor under different conditions.
- Make the needed changes to the 3D-printed enclosure.
- Work toward assembling the electronics inside the enclosure.
- Continue evaluating the prototype and making changes based on testing.
