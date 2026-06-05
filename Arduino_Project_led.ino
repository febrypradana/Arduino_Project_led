int led_merah = 5;



void setup() {
  pinMode(led_merah, OUTPUT);


 Serial.begin(19200);
}

void loop() {
  ig (Serial.available() > 0) {
    char perintah = Serial.read();

    Serial.print("Menerima: ");
    Serial.println(perintah);

    //ketik 1 menyalakan lampu merah
    if (perintah == '1'){
      digitalWrite(led_merah, HIGH);
    }

    //ketik 2 menyalakan lampu kuning
  }
  

}
