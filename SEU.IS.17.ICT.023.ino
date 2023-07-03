#include<LiquidCrystal.h>
int sensor=A0;
float temp;
float tempc;
int fan=7;

LiquidCrystal lcd(13,12,11,10,9,8);


void setup() {
 pinMode(sensor,INPUT);
 pinMode(fan,OUTPUT);
 lcd.begin(16,2); 

}

void loop() {
 temp=analogRead(sensor);
 tempc=(temp*4.88)/10;
 lcd.setCursor(0,0);
 lcd.print("Temp in C:");
 lcd.print(tempc);
 lcd.setCursor(0,1);

 if(tempc>=25){
  digitalWrite(fan,1);
 }
 if(tempc<25){
   digitalWrite(fan,0);
 }

 delay(1000);
}



 
