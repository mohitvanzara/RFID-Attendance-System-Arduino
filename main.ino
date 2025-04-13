#include <SPI.h>  
#include <MFRC522.h>  
#include "LiquidCrystal.h"  

LiquidCrystal lcd(A0, A1, A2, A3, A4, A5);  

#define SS_PIN 10  
#define RST_PIN 9  
#define LED_G 5      // green LED pin  
#define LED_R 4      // red LED pin  
#define BUZZER 2     // buzzer pin  

MFRC522 mfrc522(SS_PIN, RST_PIN);  // Create MFRC522 instance  

void setup() {  
  Serial.begin(9600);  
  SPI.begin();  
  mfrc522.PCD_Init();  
  lcd.begin(16, 2);  
  pinMode(LED_G, OUTPUT);  
  pinMode(LED_R, OUTPUT);  
  pinMode(BUZZER, OUTPUT);  
  noTone(BUZZER);  
}  

void loop() {
  lcd.setCursor(3, 0);
  lcd.print("SHOW YOUR");
  lcd.setCursor(4, 1);
  lcd.print("ID CARD");

  if (!mfrc522.PICC_IsNewCardPresent()) {
    delay(500);
    return;
  }

  if (!mfrc522.PICC_ReadCardSerial()) {
    delay(500);
    return;
  }

  lcd.clear();

  Serial.print("UID tag :");
  String content = "";
  for (byte i = 0; i < mfrc522.uid.size; i++) {
    Serial.print(mfrc522.uid.uidByte[i] < 0x10 ? " 0" : " ");
    Serial.print(mfrc522.uid.uidByte[i], HEX);
    content.concat(String(mfrc522.uid.uidByte[i] < 0x10 ? " 0" : " "));
    content.concat(String(mfrc522.uid.uidByte[i], HEX));
  }
  Serial.println();
  content.toUpperCase();

  if (content.substring(1) == "C4 C0 97 3F") {
    lcd.print("STUDENT 01");
    lcd.setCursor(0, 1);
    lcd.print("PRESENT");
  }
  else if (content.substring(1) == "D3 E4 47 DA") {
    lcd.print("STUDENT 02");
    lcd.setCursor(0, 1);
    lcd.print("PRESENT");
  }
  else {
    lcd.print("UNAUTHORIZE");
    lcd.setCursor(0, 1);
    lcd.print("ACCESS");
    digitalWrite(LED_R, HIGH);
    tone(BUZZER, 300);
    delay(2000);
    digitalWrite(LED_R, LOW);
    noTone(BUZZER);
    lcd.clear();
    return;
  }

  digitalWrite(LED_G, HIGH);
  tone(BUZZER, 500);
  delay(300);
  noTone(BUZZER);
  delay(3000);
  digitalWrite(LED_G, LOW);
  lcd.clear();
}
