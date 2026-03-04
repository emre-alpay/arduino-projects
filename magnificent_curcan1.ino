int a=1;
void setup()
{
 
 Serial.begin(9600);
  
}

void loop()
{
  while(a < 10 ){
    Serial.print(a);
    Serial.println(".BOOOOMM");
    a++;
    
  }
}