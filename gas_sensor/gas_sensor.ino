int sensorValue;
int GasSensorPin = 0;   //Gas Sensor Connection
void setup()
{
 Serial.begin(9600);      // sets the serial port to 9600
 pinMode(12,OUTPUT);
}
void loop()
{
int a = analogRead(GasSensorPin);       // read analog input pin 0
 Serial.println(a, DEC);  // prints the value read
 delay(100);                        // wait 100ms for next reading
 if(a>20)
 {
  digitalWrite(12,HIGH);
 }
 else
 {
  digitalWrite(12,LOW);
 }
}

