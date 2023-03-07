#include  <LiquidCrystal_I2C.h> //https://github.com/fdebrabander/Arduino-LiquidCrystal-I2C-library
LiquidCrystal_I2C lcd(0x3f, 16, 2);

//LCD display is powered by 5v. 
//pin6 (GP4) SDA
//pin7 (GP5) SCL

void setup() {
  lcd.begin();
  lcd.backlight();
  lcd.setCursor(0, 0);
  lcd.print("RPI Pico");
  delay(1000);
  lcd.clear();
}

void loop() {
  lcd.setCursor(2, 0);
  lcd.print("Hello world !");
}
