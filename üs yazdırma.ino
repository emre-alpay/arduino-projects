int a = 4;
int b = 3;
int sonuc = 0;
void setup(){
  
  Serial.begin(9600);
  sonuc = usyazdirma(a,b);
  
 
   Serial.print(sonuc);
  
}

void loop()
{

}
int usyazdirma(int x,int y){
  if(b == 0){
    sonuc = 1;
  }
  else{
    return round(pow(x,y));
                 } 
        }
