#include <LiquidCrystal_I2C.h>
#include <Wire.h>
LiquidCrystal_I2C lcd(0x27, 16, 2);
 
  int b1_led = 11;
  int r1_led = 3;
  int r2_led = 5;
  int b1_button = A1;
  int r1_button = A3;
  int r2_button = A2;
  
void setup() {
  randomSeed(analogRead(0));
  lcd.init();
  lcd.backlight();
  
  pinMode(b1_led, OUTPUT);
  pinMode(r1_led, OUTPUT);
  pinMode(r2_led, OUTPUT);
  pinMode(b1_button, INPUT);
  pinMode(r1_button, INPUT);
  pinMode(r2_button, INPUT);
  
  
}


int r1() {
  while(1) {
    digitalWrite(r1_led, HIGH);
    delay(150);
    digitalWrite(r1_led, LOW);
    delay(150);
    if(digitalRead(r1_button) == 1) {
      return 1;
    }
  }
}

int b1() {
  while(1) {
      digitalWrite(b1_led, HIGH);
      delay(150);
      digitalWrite(b1_led, LOW);
      delay(150); 
      if(digitalRead(b1_button) == 1) {
        return 1;
      }
    }
}

int r2()
{
  while(1) {
      digitalWrite(r2_led, HIGH);
      delay(150);
      digitalWrite(r2_led, LOW);
      delay(150); 
      if(digitalRead(r2_button) == 1) {
        return 1;
      }
    }
}

void loop() {
  static int count = 0;
  lcd.setCursor(0,0);
  lcd.print("Count = "); 
  lcd.setCursor(0,1);
  lcd.print(count);
  int num = random(1, 4);
  delay(500);
  
  if(num== 1) {
    b1();
  }
  
  if(num== 2) {
    r1();
  }
  
  if(num== 3) {
    r2();
  }
  delay(100);
  count++;
  delay(2000);
}
    
