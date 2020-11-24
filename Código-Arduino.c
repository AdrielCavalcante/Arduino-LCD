#include <LiquidCrystal.h>

LiquidCrystal lcd(2,4,10,11,12,13);

void setup()
{
  
  pinMode(5,OUTPUT);
  lcd.begin(16,2);
  
  lcd.write("Dev - Adriel;");
}

void loop()
{   
  lcd.scrollDisplayRight();
  delay(500);
}
