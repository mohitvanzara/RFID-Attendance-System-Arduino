# 📘 RFID Based Attendance System using Arduino
![RFID Attendance System Banner](https://img.shields.io/badge/Project-Arduino%20RFID-green?style=for-the-badge&logo=arduino)

## 📌 Project Overview

This is a simple and practical implementation of an RFID-based attendance system using Arduino. It uses the MFRC522 RFID module to detect and read RFID cards. When a valid card is tapped, the system marks the user as **"Present"** and displays a message on a **16x2 LCD**. Unauthorized cards trigger a red LED and buzzer alert.

---

## 🔧 Features

- Detects RFID cards using MFRC522 module
- Identifies users based on UID
- Displays user name and attendance status on LCD
- Green LED and buzzer for valid entries
- Red LED and buzzer for unauthorized access
- Simple, efficient, and low-cost solution

---

## 🧰 Components Used

| Component            | Quantity |
|----------------------|----------|
| Arduino UNO          | 1        |
| MFRC522 RFID Module  | 1        |
| RFID Tags/Cards      | 2+       |
| 16x2 LCD Display     | 1        |
| Green LED            | 1        |
| Red LED              | 1        |
| Buzzer               | 1        |
| Jumper Wires         | As needed |
| Breadboard           | 1        |
| Power Supply         | 1        |

---

## 🔌 Circuit Connections

### 📟 LCD (16x2) - Pin Connections

| LCD Pin | Arduino Pin |
|---------|-------------|
| RS      | A0          |
| EN      | A1          |
| D4      | A2          |
| D5      | A3          |
| D6      | A4          |
| D7      | A5          |

### 📡 MFRC522 RFID Module - Pin Connections

| RFID Pin | Arduino Pin |
|----------|-------------|
| SDA (SS) | D10         |
| SCK      | D13         |
| MOSI     | D11         |
| MISO     | D12         |
| RST      | D9          |
| VCC      | 3.3V        |
| GND      | GND         |

### 💡 Other Components - Pin Connections

| Component   | Arduino Pin |
|-------------|-------------|
| Green LED   | D5          |
| Red LED     | D4          |
| Buzzer      | D2          |

---

## 🆔 RFID UID Configuration

| Student Name | RFID UID        |
|--------------|-----------------|
| Student 01   | C4 C0 97 3F     |
| Student 02   | D3 E4 47 DA     |

---

## 🎯 How It Works

1. The LCD prompts: `SHOW YOUR ID CARD`.
2. When an RFID tag is brought near the reader:
   - ✅ If the **UID is valid**, it:
     - Displays the student name and `PRESENT` message on the LCD.
     - Activates the green LED and buzzer for feedback.
   - ❌ If the **UID is invalid**, it:
     - Displays `UNAUTHORIZE ACCESS` on the LCD.
     - Activates the red LED and buzzer alert for 2 seconds.
3. The system then resets the display for the next scan.

---

## 🚀 Future Enhancements

- 💾 Store attendance logs to an SD card.
- 🕒 Add Real-Time Clock (RTC) module for accurate timestamping.
- ☁️ Send attendance data to a server or cloud using Wi-Fi (ESP8266/ESP32).
- 🧑‍💼 Add admin panel for managing registered cards.
- 📱 Upgrade to OLED/Touchscreen UI for better interaction.
- 📊 Create a desktop or web dashboard to display reports.

---

## 🙋‍♂️ Author

**Mohit Vanzara**  
📌 [LinkedIn](https://www.linkedin.com/in/mohit-vanzara-a998042b9)  
📌 [GitHub](https://github.com/mohitvanzara)

---

## 📄 License

This project is licensed under the **MIT License**.  
Feel free to use, modify, and distribute it for educational and personal use.

> ⭐ If you found this project helpful, please consider giving it a star on GitHub!
