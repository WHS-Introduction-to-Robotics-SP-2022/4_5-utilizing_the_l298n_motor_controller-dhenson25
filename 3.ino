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
   analogWrite(Speed, 128);
   delay(3000);
   digitalWrite(Input1, LOW);
   digitalWrite(Input2, HIGH);
   analogWrite(Speed, 255);
   delay(2000);
   digitalWrite(Input1, LOW);
   digitalWrite(Input2, LOW);
  
  
}

void loop() {
    
}
