#include <Wire.h> 
#include <Esp32_LiquidCrystalTr_I2C.h>

// Set the LCD address to 0x27 for a 16 chars and 2 line display
LiquidCrystal_I2C lcd(0x3f, 20, 4);

void setup()
{
  
}

void loop()
{
  lcd.begin();

  // Turn on the blacklight and print a message.
  lcd.backlight();
  lcd.print("BÜYÜK: İÜĞİŞÇÖ");
  lcd.setCursor(0,1);
  lcd.print("küçük: ıüğişçö");
  lcd.setCursor(2,2);
  lcd.print(("Flash Makrosuyla"));
  lcd.setCursor(5,3);
  lcd.print(("ıİöÖüÜğĞşŞ"));
  delay(1000);
  // Do nothing here...
}
