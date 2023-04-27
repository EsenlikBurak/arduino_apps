int a=2;
int b=3;
int c=4;
int d=5;
int e=6;
int f=7;
int g=8;
const int displayPins[7]={a,b,c,d,e,f,g};
int numbers09[10][7]={
  {1,1,1,1,1,1,0}, //0
  {0,1,1,0,0,0,0}, //1
  {1,1,0,1,1,0,1}, //2
  {1,1,1,1,0,0,1}, //3
  {0,1,1,0,0,1,1}, //4
  {1,0,1,1,0,1,1}, //5
  {1,0,1,1,1,1,1}, //6
  {1,1,1,0,0,0,0}, //7
  {1,1,1,1,1,1,1}, //8
  {1,1,1,1,0,1,1} //9
};
void setup() {
for(int i=0; i<8;i++){
  pinMode(displayPins[i],OUTPUT);
}

}

void loop() {
for (int j=0; j<10; j++){
  for(int k=0; k<8; k++){
    digitalWrite(displayPins[k],numbers09[j][k]);
  }
  delay(1000);
}
}

