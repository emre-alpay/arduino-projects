void setup(){
  Serial.begin(9600);
  
  for(int a = 1;a < 12;a++){
    Serial.print(a);
    Serial.println(".hello bro what are you doing ?");
   
  }
}

void loop()
{

}