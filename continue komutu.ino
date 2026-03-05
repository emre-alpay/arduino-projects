int a = 0;

void setup(){
  Serial.begin(9600);
  
  while(a < 15){
    a++;
    Serial.print(a); Serial.println(".Emre alpay");
    delay(1000);
    if(a == 8){
      continue; 
    }
    Serial.println("tamam");
    Serial.println("tamam");
    Serial.println("tamam");
 }
      
    
                
}

void loop()
{

}