# Arduino I2C LCD Display Example

This project demonstrates how to use an I²C interface to control a 16x2 LCD with an Arduino.  
Using the I²C backpack reduces the required pin count from 6+ to just 2 (SDA & SCL), making it easier to connect multiple devices.

---

## Features
- Displays custom text on a 16x2 LCD.
- Uses the **LiquidCrystal_I2C** library.
- Reduces wiring complexity with I²C protocol.

---

## Requirements

### Hardware
- Arduino Uno (or compatible board)
- 16x2 LCD with I²C backpack
- Jumper wires

### Software
- Arduino IDE
- **LiquidCrystal_I2C** library  
  Install via Arduino IDE → *Sketch → Include Library → Manage Libraries…* → search for `LiquidCrystal_I2C`.

---

## Wiring
| LCD Pin | Arduino Pin |
|---------|-------------|
| VCC     | 5V          |
| GND     | GND         |
| SDA     | A4 (Uno/Nano) |
| SCL     | A5 (Uno/Nano) |

---

## Usage
1. Connect the LCD to your Arduino using the wiring above.  
2. Open `I2C_LCD.ino` in Arduino IDE.  
3. Select your board and COM port.  
4. Upload the sketch.  
5. The LCD should display your custom message.

---

## Example Output
Hello, Arduino!
I2C LCD Working
