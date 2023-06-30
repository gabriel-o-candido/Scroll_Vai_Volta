#include <LiquidCrystal.h>
LiquidCrystal lcd (7,6,5,4,3,2);

void setup() {
  lcd.begin (16,2);
  lcd.setCursor (5,0);
  lcd.print ("SENAI");
  lcd.setCursor (6,1);
  lcd.print ("CIC");
  delay(3000);
  lcd.clear();
}

void loop() {


 for (int x=0;x<=8;x++)
  {
    lcd.setCursor (5,0);
    lcd.print ("SENAI");
    lcd.setCursor (6,1);
    lcd.print ("CIC");
    delay(500);
    lcd.clear();
    delay(500);
  }
 lcd.setCursor (5,0);
 lcd.print ("SENAI");
 lcd.setCursor (6,1);
 lcd.print ("CIC");
  for (int x=0;x<4;x++)
   {
    lcd.scrollDisplayLeft ();
    delay (200);
   }
 for (int x=0;x<8;x++)
  {
    lcd.scrollDisplayRight ();
    delay (200);
  }
 for (int x=0;x<4;x++)
  {
    lcd.scrollDisplayLeft ();
    delay (200);
  }
lcd.setCursor (5,0);
lcd.print ("SENAI");
lcd.setCursor (6,1);
lcd.print ("CIC");
delay(1000);





}
