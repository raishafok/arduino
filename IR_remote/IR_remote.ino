#include <IRremote.h>

int RECV_PIN = 11;


IRrecv irrecv(RECV_PIN);

decode_results results;

void setup()
{
  Serial.begin(9600);
  pinMode(6,OUTPUT);
 
  
  irrecv.enableIRIn(); // Start the receiver
}

void loop()
{
  if (irrecv.decode(&results)){
    Serial.println(results.value, HEX);
  
    irrecv.resume();
  
    if(results.value==0xFF6897)
    {
    digitalWrite(6,HIGH);
    }
    else
    {
       digitalWrite(6,LOW);
  }
}
  delay(100);
}   

