int a = 100;

void setup(){
  
  Serial.begin(9600);
  
  while(a > 0){
    a--;
    
    if(a % 5==0){
      continue;
    }
    else if(a == 11){
      break;
    }
    
    Serial.println(a);
    delay(100);
  }

                
}

void loop()
{

}