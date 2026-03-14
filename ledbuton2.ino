// Pin tanımlamaları
int acmaButonu = 6;
int kapamaButonu = 7;
int led1 = 2;
int led2 = 3;

void setup() {
  // LED pinlerini çıkış olarak ayarla
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  
  // Buton pinlerini giriş olarak ayarla
  pinMode(acmaButonu, INPUT);
  pinMode(kapamaButonu, INPUT);
}

void loop() {
  // Açma butonuna basıldı mı kontrol et
  if (digitalRead(acmaButonu) == 1) {
    digitalWrite(led1, HIGH); // LED 1'i yak
    digitalWrite(led2, HIGH); // LED 2'yi yak
  }

  // Kapama butonuna basıldı mı kontrol et
  if (digitalRead(kapamaButonu) == 1) {
    digitalWrite(led1, LOW);  // LED 1'i söndür
    digitalWrite(led2, LOW);  // LED 2'yi söndür
  }
}