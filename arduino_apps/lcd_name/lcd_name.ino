#include <LiquidCrystal.h>
LiquidCrystal lcd(12,11,5,4,3,2);
char data;
void setup(){
  Serial.begin(9600);
  lcd.begin(16,2);
  Serial.print("Bir isim giriniz:");

}
void loop(){
while(Serial.available()>0){
  data=Serial.read();
  lcd.write(data);
  Serial.print(data);
  }
}