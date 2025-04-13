# RFID Based Attendance System using Arduino

## Project Overview
This project is a simple and practical implementation of an RFID-based attendance system using Arduino. It utilizes the MFRC522 RFID module to detect and read RFID cards. When a valid card is tapped, the system marks the user as "Present" and displays a message on a 16x2 LCD display. Unauthorized cards trigger a red LED and buzzer alert.

---

## Features
- Detect RFID cards using MFRC522 module
- Identify users based on UID
- Display user name and status on LCD
- Green LED and buzzer for valid entry
- Red LED and buzzer for unauthorized access
- Simple, efficient and low-cost setup

---

## Components Used
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

## Circuit Connections
### LCD 16x2 (via LiquidCrystal)
```
LCD RS  → A0
LCD EN  → A1
LCD D4  → A2
LCD D5  → A3
LCD D6  → A4
LCD D7  → A5
```
### MFRC522 RFID Module
```
SDA (SS) → D10
SCK      → D13
MOSI     → D11
MISO     → D12
RST      → D9
VCC      → 3.3V
GND      → GND
```
### Others
```
Green LED → D5
Red LED   → D4
Buzzer    → D2
```

---

## Code Explanation (Overview)
- Initializes SPI, LCD, and RFID reader
- Checks for presence of new RFID card
- Reads UID of the card
- Compares with predefined UIDs
- Displays appropriate message and turns on LEDs/buzzer accordingly

> For full line-by-line code explanation, refer to the [Project Wiki](#) or comments inside the `.ino` file.

---

## RFID UIDs Used
| Student Name | UID             |
|--------------|------------------|
| Student 01   | C4 C0 97 3F      |
| Student 02   | D3 E4 47 DA      |

---

## Future Enhancements
- Store attendance data to SD card
- Add RTC module for timestamp
- Send data to server or cloud
- Add user interface for admin

---

## Author
Created by: [Mohit Vanzara]  
LinkedIn: [www.linkedin.com/in/mohit-vanzara-a998042b9]  
GitHub: [https://github.com/mohitvanzara]

---

## License
This project is open-source and available under the MIT License. Feel free to use and modify.

---

Thank you for checking out the project. If you found it helpful, consider starring the repo and sharing with friends!
