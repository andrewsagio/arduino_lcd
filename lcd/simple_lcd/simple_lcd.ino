
#include <LiquidCrystal_I2C.h>
#include <Wire.h>

// LCD to Arduino Connections:
// GND - GND
// VCC - 5V
// SDA - ANALOG Pin 4
// SCL - ANALOG pin 5

// set the LCD address to 0x27 for a 20 chars 4 line display
// Set the pins on the I2C chip used for LCD connections:
//                    addr, en,rw,rs,d4,d5,d6,d7,bl,blpol
LiquidCrystal_I2C lcd(0x27, 2, 1, 0, 4, 5, 6, 7, 3, POSITIVE);  // Set the LCD I2C address


void setup()   /*----( SETUP: RUNS ONCE )----*/
{
  lcd.begin(20,4);   // initialize the lcd for 16 chars 2 lines, turn on backlight
  lcd.backlight(); // finish with backlight on  
  //lcd.autoscroll();
  lcd.setCursor(0,0); //Start at character 4 on line 0
//  lcd.print("Have you picked a book yet? No");   // over flow from line 0 to 1.
}


char str1 []= "Yes I know";
void loop()
{
  lcd.setCursor(0,0);
  lcd.write(str1);
  delay(500);
      // scroll 16 positions (display length + string length) to the left
    // to move it back to center:
//  for (int positionCounter = 0; positionCounter < 20; positionCounter++) {
//    // scroll one position left:
//   // lcd.scrollDisplayLeft(); 
//    // wait a bit:
//    delay(150);
//  }
  //exit(0);
}



