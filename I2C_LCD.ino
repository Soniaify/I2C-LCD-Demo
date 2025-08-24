#include <Wire.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27,16,2);
void setup(){
  Serial.begin(9600);
  lcd.init();
  lcd.backlight();
  lcd.setCursor(3, 0);
  lcd.print("Calculator");
  lcd.setCursor(0, 1);
  lcd.print("loading.....");
  delay(3000);
}

void loop(){
  if(Serial.available()){
    int a = Serial.parseInt();

    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print(a);
    delay(2000);

    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print("Enter a Number:");
  }
}

// void setup() {
//   lcd.init();
//   lcd.backlight();
//   // lcd.setCursor(0,0);
//   // lcd.print("Hello Sonia");
//   // lcd.setCursor(0, 1);
//   // lcd.print("My lovely little baby girl");
//   
// }

// void loop() {
//   // for(int i=0; i<16; i++){
//   //   lcd.scrollDisplayLeft();
//   //   delay(300);
//   // }
//   // delay(1000);
//   // for(int i=16; i>0; i--){
//   //   lcd.scrollDisplayRight();
//   //   delay(300);
//   // }
//   // delay(1000);

//   // lcd.clear();
//   // lcd.print("Sonia bby");
//   // delay(1000);
// }
