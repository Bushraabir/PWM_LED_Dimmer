# ESP32 PWM Resolution and Frequency Experiment with 5 LEDs

This project demonstrates how PWM (Pulse Width Modulation) works on the ESP32 by controlling 5 LEDs with adjustable frequency and resolution settings. It helps you understand how PWM duty cycle precision and frequency affect LED brightness, flickering, and dimming smoothness.

## 🔧 Features

- Control 5 LEDs with PWM on ESP32  
- Adjustable **PWM resolution** (e.g., 8–15 bits)  
- Adjustable **PWM frequency** (e.g., 500 Hz to 20 kHz+)  
- Smooth LED brightness fading using `ledcWrite()`  
- Great for learning PWM behavior and multi-channel control  

## 🛠️ Hardware Required

- ESP32 board (e.g., DevKit V1)  
- 5x LEDs connected to GPIO pins with 220Ω resistors  
- Breadboard and jumper wires (optional)  

### Pin Setup

| LED Number | GPIO Pin | Notes                      |
|------------|----------|----------------------------|
| LED 1      | 18       | PWM channel 0              |
| LED 2      | 19       | PWM channel 1              |
| LED 3      | 21       | PWM channel 2              |
| LED 4      | 22       | PWM channel 3              |
| LED 5      | 23       | PWM channel 4              |
| GND        | GND      | Connect all LED resistors to GND |

## 📦 File Included

- `PWM_5LEDs.ino` — Arduino sketch controlling 5 PWM channels fading LEDs

## 🧪 How It Works

The sketch uses ESP32’s `ledcSetup()` and `ledcWrite()` functions to create PWM signals on 5 channels (GPIOs 18, 19, 21, 22, 23). You can adjust frequency and resolution to see how PWM parameters affect LED brightness and fading smoothness on multiple outputs simultaneously.

## 🧭 Usage

1. Connect 5 LEDs each with a 220Ω resistor to GPIOs 18, 19, 21, 22, and 23, respectively.  
2. Connect the other ends of resistors to GND.  
3. Open the `PWM_5LEDs.ino` in Arduino IDE.  
4. Select your ESP32 board and COM port.  
5. Upload the sketch.  
6. Watch all LEDs fade smoothly with configurable PWM settings.

## ▶️ YouTube Video Tutorial

Watch the full tutorial here: [ESP32 PWM 5 LEDs Tutorial](https://youtu.be/PRRSQ8gPyeo)

## 📘 Example

```cpp
const int freq = 5000;            // PWM frequency
const int resolution = 8;         // PWM resolution (bits)
const int ledPins[5] = {18,19,21,22,23};  // GPIO pins for LEDs



## 📃 License

MIT License — free to use, modify, and share.

