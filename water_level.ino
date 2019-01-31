#define LED D0            // Led in NodeMCU at pin GPIO16 (D0).

const int analogInPin = A0; 
 int c=3;
int sensorValue = 0;
 
void setup() {
   pinMode(D0, OUTPUT);

 Serial.begin(9600); 
}
 
void loop() {
 sensorValue = analogRead(analogInPin); 
 
 Serial.print("Sensor = " ); 
 Serial.print(sensorValue);
// Serial.print(sensorValue*100/1024); 
// Serial.println("%");
 if((sensorValue > 20)) {
  digitalWrite(D0, LOW);
   }else
  {
   digitalWrite(D0, HIGH);
 Serial.print("hjb");
 delay(1000); 
  }}
