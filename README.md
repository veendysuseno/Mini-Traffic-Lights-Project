# Mini Traffic Lights Project

This Arduino project simulates a traffic light system using LEDs to represent red, yellow, and green lights. The program controls the LEDs to mimic a traffic light sequence.

## Components

- **LEDs**: Red, Yellow, Green
- **Resistors**: Appropriate resistors for each LED
- **Arduino Board**: For controlling the LEDs

## Code Overview

1. **Setup**:

   - Initializes LED pins as outputs.

2. **Loop**:
   - Controls the traffic light sequence:
     - **Red Light**: On for `ledDelay` milliseconds.
     - **Yellow Light**: On for 2 seconds.
     - **Green Light**: On for `ledDelay` milliseconds.
     - **Yellow Light**: On for 2 seconds after green.

## Code

```cpp
// Proyek Mini Traffic Lights

int ledDelay = 10000; // delay pada setiap perubahan
int redPin = 10;
int yellowPin = 9;
int greenPin = 8;

void setup() {
    pinMode(redPin, OUTPUT);
    pinMode(yellowPin, OUTPUT);
    pinMode(greenPin, OUTPUT);
}

void loop() {
    digitalWrite(redPin, HIGH); // Nyalakan LED merah
    delay(ledDelay); // Tunda beberapa milisecond
    digitalWrite(yellowPin, HIGH); // Nyalakan LED kuning
    delay(2000); // Tunda 2 detik
    digitalWrite(greenPin, HIGH); // Nyalakan LED hijau
    digitalWrite(redPin, LOW); // OFF kan LED merah
    digitalWrite(yellowPin, LOW); // OFF kan LED kuning
    delay(ledDelay); // Tunda beberapa milisecond
    digitalWrite(yellowPin, HIGH); // Nyalakan LED kuning
    digitalWrite(greenPin, LOW); // OFF kan LED hijau
    delay(2000); // Tunda 2 detik
    digitalWrite(yellowPin, LOW); // OFF kan LED kuning
    // Loop akan terus berulang
}
```

## Usage

- Setup: Connect the LEDs to the specified pins on the Arduino.
- Run: Upload the code to the Arduino and observe the traffic light simulation.
