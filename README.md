# Motion-Activated Light Bulb using Arduino Uno and PIR Motion Sensor

This project implements a motion-activated light bulb using an Arduino Uno, PIR motion sensor, and a light bulb. The sensor detects motion in the environment and turns on the light bulb. The light bulb remains on for a set period of time and then turns off automatically.

# Components 

- Arduino Uno
- PIR Motion Sensor
- Breadboard
- Light Bulb
- 2N3904 NPN Transistor
- 1k Ohm Resistor
- Jumper Wires

# Scheme & Showcase

![image](https://user-images.githubusercontent.com/90192366/225877307-3808591e-ad5e-401a-9e4f-c3f45bd7f44e.png)
![image](https://user-images.githubusercontent.com/90192366/225877377-bb5842f9-4a1a-4b00-b736-813b230f71f7.png)

## Type One

https://user-images.githubusercontent.com/90192366/225878021-03695531-c6b5-4d8d-8ada-dcc92f8491ee.mp4

## Type Two

https://user-images.githubusercontent.com/90192366/225877710-4617925e-486d-4c3e-be37-b589b6c603d0.mp4

# Instructions

## Hardware Setup

Connect breadboard with 5V and GND pins from Arduino Uno board. You can place sensor anywhere you want and light bulb too. Sensor has to be connected with power and ground also has to have signal pin connected to any digital pin but in this project we are using ping 2 for it. Light bulb is connected to ground and digital pin 3.

## Software Setup

1. Install the Arduino IDE on your computer if you haven't already done so.
2. Open the Arduino IDE and create a new project.
3. Copy and paste the code from the firstType.cpp or secondType.cpp file in this repository into the project.
4. Upload the project to the Arduino Uno board.

## Usage

1. Power on the Arduino Uno board.
2. The light bulb will remain off until motion is detected by the PIR motion sensor.
3. When motion is detected, the light bulb will turn on and remain on for a set period of time (20 seconds by default).
4. After the set period of time has elapsed, the light bulb will turn off automatically.

## Troubleshooting

- If the light bulb does not turn on when motion is detected, check your wiring connections and make sure the PIR motion sensor is properly positioned.
- If the light bulb remains on indefinitely, check the delay time in the code and make sure it is set to the desired value.

# Credits

This project was inspired by the PIR Motion Sensor example project in the Arduino IDE and modified to include a light bulb and transistor for controlling the light. The code was written by charon.
