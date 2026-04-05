# Arduino Ultrasonic Radar System

This project simulates a radar system using an ultrasonic sensor and a servo motor. It detects objects and visualizes them on a radar screen using Processing.

# Components Used
- Arduino Uno
- HC-SR04 Ultrasonic Sensor
- Servo Motor (SG90)
- Breadboard
- Jumper wires

# Working Principle
The ultrasonic sensor sends sound waves and measures the time taken for the echo to return. The servo motor rotates the sensor from 0° to 180°, scanning the surroundings.

The Arduino sends angle and distance data to the computer, and Processing displays it as a radar visualization.

# Circuit Connections
- Servo Signal → Pin 9
- TRIG → Pin 10
- ECHO → Pin 11
- VCC → 5V
- GND → GND

# How to Run
1. Upload Arduino code
2. Close Serial Monitor
3. Run Processing code
4. Adjust COM port in Processing

# Output
- Green radar sweep
- Red detection area when object is detected

## Author
Your Name
