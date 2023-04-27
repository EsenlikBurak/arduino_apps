
#include <LiquidCrystal.h>


const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

void setup() {
  lcd.begin(16, 2);
  lcd.print("IDU Engineering");
  delay(1000);
}

void loop() {
  // ekranın sol dışına taşıma işlemi yapmak için 15 birimin nedeni "ıdu engineering" stringinin boyutudur diğer kaydırmaları da buna göre ayarladım 
  for (int positionCounter = 0; positionCounter < 15; positionCounter++) {
    lcd.scrollDisplayLeft();
    delay(150);
  }

  // ekranın sağ dışına taşıma işkemi yapmak için
  for (int positionCounter = 0; positionCounter < 31; positionCounter++) {
    lcd.scrollDisplayRight();
    delay(150);
  }

  // ortaya geri dönmek için
  for (int positionCounter = 0; positionCounter < 16; positionCounter++) {
    lcd.scrollDisplayLeft();
    delay(150);
  }

  delay(1000);

}

