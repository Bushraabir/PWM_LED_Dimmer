# ESP32 PWM 5-LED Fading Demo

Control 5 LEDs on ESP32 using PWM with adjustable frequency and resolution for smooth brightness fading.

## 📹 Demo Video

[🎬 Watch on YouTube](https://youtu.be/PRRSQ8gPyeo)

---

## 🔌 GPIO Pin Mapping

| LED Number | GPIO Pin | Resistor | Notes                  |
|------------|----------|----------|------------------------|
| LED 1      | GPIO 18  | 220Ω     | PWM channel 0          |
| LED 2      | GPIO 19  | 220Ω     | PWM channel 1          |
| LED 3      | GPIO 21  | 220Ω     | PWM channel 2          |
| LED 4      | GPIO 22  | 220Ω     | PWM channel 3          |
| LED 5      | GPIO 23  | 220Ω     | PWM channel 4          |

---

## 🛠️ Setup Instructions

1. Insert 5 LEDs into the breadboard.  
2. Connect a **220Ω resistor** from each ESP32 GPIO pin to the **anode (+)** leg of the LED.  
3. Connect all LED **cathodes (–)** together to the **GND rail** on the breadboard.  
4. Connect the breadboard **GND rail** to an ESP32 **GND pin**.  
5. Open the `PWM_5LEDs.ino` sketch in Arduino IDE.  
6. Select your ESP32 board and COM port.  
7. Upload the sketch.  
8. Watch the LEDs fade smoothly with PWM control.

---

## 📁 Files Included

- `PWM_5LEDs.ino`  
- `.gitignore`  
- `README.md`

---

## 📃 License

MIT License — free to use, modify, and share.
