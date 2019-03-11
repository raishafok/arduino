void setup()
{
  Serial.begin(9600);
  char uart_data;//SERIAL COMMUNICATION
  pinMode(12,OUTPUT);
  

}

void loop()
{
  int a=analogRead(A0);
  
  if(a<200)
  {
     Serial.print(" TRASH FILLED!!!!!!!.....");
     
     Serial.print(" PLEASE COLLECT IT!!!!!");
     digitalWrite(12,HIGH);
     delay(400);
     
  }
     else
     {
      digitalWrite(12,LOW);
     }
  }

