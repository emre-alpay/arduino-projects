int mavi = 4;
int sari = 2;
int state;
int buton = 6;
void setup() {
  pinMode(6,INPUT);
  pinMode(sari, OUTPUT);
  pinMode(mavi,OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  state = digitalRead(buton);
  if(state == 1){
    digitalWrite(sari,HIGH);
    digitalWrite(mavi,HIGH);
    }
    else{
    digitalWrite(sari,LOW);
    digitalWrite(mavi,LOW);
    }
 
}



