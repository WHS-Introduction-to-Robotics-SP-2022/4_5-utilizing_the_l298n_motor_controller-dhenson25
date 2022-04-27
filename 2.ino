/*

*/

int Input1 = 9;
int Input2 = 10;
int Speed = 8;
int y;

void setup() {
  Serial.begin(9600);

   pinMode(Input1, OUTPUT);
   pinMode(Input2, OUTPUT);
   pinMode(Speed, OUTPUT);
  
   digitalWrite(Input1, HIGH);
   digitalWrite(Input2, LOW);
   for(y=0; y<250; y=y+1){
   analogWrite(Speed, y);
   delay(20);
   Serial.println(y);
   }
   for(y=250; y>0; y=y-1){
   analogWrite(Speed, y);
   delay(20);
   Serial.println(y);
   }
  
}

void loop() {
    
}
