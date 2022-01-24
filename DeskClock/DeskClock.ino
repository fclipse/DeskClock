#include <LiquidCrystal_I2C.h>
#include <Wire.h>

LiquidCrystal_I2C lcd(0x27, 16, 2);

void setup(){
    Serial.begin(9600);
    Serial.println("Hello World!");

    lcd.init();
    lcd.backlight();
}

void loop(){
    int value = random(0, 3);
    if(value == 0){
        lcd.setCursor(0, 0);
        lcd.print("Zero is here");
    }
    else if(value == 1){
        lcd.setCursor(0, 1);
        lcd.print("One is here");
    }
    else if(value == 2){
        lcd.setCursor(0, 0);
        lcd.print("Two is here");
        lcd.setCursor(0, 1);
        lcd.print("Hello World!");
    }
    delay(1000);
    lcd.clear();
}
