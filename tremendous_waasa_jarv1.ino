int a = 34;
int e = 21;
int sonuc = 0;
int sonuc2 = 0;
void setup(){
  
  Serial.begin(9600);
  
  sonuc = hesapla(a,e);
 Serial.print("sonuc = "); ekranayaz(sonuc);
  sifirla();
 Serial.print("a = "); Serial.println(a);
  Serial.print("e = ");  Serial.println(e);
   Serial.print("sonuc = "); Serial.println(sonuc);
  sonuc2 = hepsinitopla();
  Serial.print("sonuc2 = "); Serial.println(sonuc2);
}

void loop()
{

}

int hesapla(int x , int y){
  return (x + y)/(2 + 3);
}
void ekranayaz(int k){
  Serial.println(k);
}
void sifirla(){
  a = 0;
  e = 0;
  sonuc = 0;
}
int hepsinitopla(){
  return a + e; 
}