# 🔦 IR Sensor Object Detection with Arduino

This project uses **two IR sensors and an LED** with Arduino to detect objects.
When both sensors detect an object, the LED turns ON; otherwise, it stays OFF.

This is a simple beginner project useful for:

* Obstacle detection systems
* Automation projects
* Smart security prototypes
* Arduino learning practice

---

## 🎥 Working Video

👉 **Watch project demo here:**
https://github.com/Ayancoder1/IR-Sensor-Object-Detection-with-Arduino/blob/main/Two%20IR%20Sensor%20Project%20Working%20Video.mp4

---

## ✨ Features

✔ Dual IR sensor object detection
✔ LED indication when object detected
✔ Serial Monitor debugging output
✔ Beginner-friendly Arduino code

---

## 🧰 Components Required

* Arduino Uno / Nano / Mega
* 2 × IR Sensors
* 1 × LED
* 220Ω resistor (recommended for LED)
* Jumper wires
* Breadboard

---

## 🔌 Pin Configuration

| Component   | Arduino Pin |
| ----------- | ----------- |
| LED         | D3          |
| IR Sensor 1 | D8          |
| IR Sensor 2 | D2          |

---

## ⚙️ How It Works

### 1️⃣ Sensor Reading

Arduino reads digital values from both IR sensors:

* `1` → No object detected
* `0` → Object detected

### 2️⃣ Logic Applied

* If **both sensors = 1 → LED OFF**
* If **both sensors = 0 → LED ON**

### 3️⃣ Serial Monitoring

Sensor values are printed to the Serial Monitor for debugging.

---

## ▶️ How to Run

### Step 1 — Upload Code

* Open Arduino IDE
* Paste the code into a new sketch
* Select board & COM port
* Upload the code

### Step 2 — Connect Circuit

Wire components according to the pin table above.

### Step 3 — Monitor Output

Open **Serial Monitor (9600 baud)** to see sensor readings.

---

## 💻 Code Overview

Main operations:

* Initialize pins in `setup()`
* Read sensors using `digitalRead()`
* Apply detection logic
* Control LED output

---

## 🚀 Possible Improvements

You can extend this project by:

* Adding buzzer alerts
* Counting objects passing sensors
* IoT notification system
* Motor control automation
* LCD/OLED display integration

---

## 👨‍💻 Author

**Ayan Kar**
Arduino • Embedded Systems • AI Projects

If you found this helpful:

⭐ Star the repo
🍴 Fork it
🤝 Contribute
