#include <LCD-I2C.h>

// Define patterns for plastic and tin
String plasticPatterns[] = {
  "qwsyj",
  "bcjmr",
  "ordku",
  "fqeqp",
  "tgpnl"
};

String tinPatterns[] = {
  "asdnc",
  "zjgcd",
  "vlcch",
  "amfsv",
  "iolii"
};
unsigned int p_count=0, t_count=0;
LCD_I2C lcd(0x27, 16, 2); // Default address of most PCF8574 modules, change according

void setup() {
    // If you are using more I2C devices using the Wire library use lcd.begin(false)
    // this stop the library(LCD-I2C) from calling Wire.begin()
    Serial.begin(115200);
    lcd.begin();
    lcd.display();
    lcd.backlight();
    // lcd.backlightOff();
}

void loop() {
    // lcd.setCursor(0, 0); // Or setting the cursor in the desired position.
    // lcd.print("Hello"); // You can make spaces using well... spaces
    // lcd.print("World!");
    lcd.setCursor(0, 0);
    lcd.print("Enter the Code:");
    lcd.setCursor(1, 1);
    if (plastic==1) {
      lcd.print("Plastic = "+plasticPatterns[p_count]);
      if(p_count<4) {
        p_count++;
      }
      else {
        p_count=0;
      }
    }
    delay(2000);
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print("Enter the Code:");
    lcd.setCursor(1, 1);
    else if (tin==1) {
      lcd.print("Tin = "+tinPatterns[p_count]);
      if(t_count<4) {
        t_count++;
      }
      else {
        t_count=0;
      }
    }
    delay(2000);
    lcd.clear();
}
