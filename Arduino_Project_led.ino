int led_merah = 5;
int led_kuning = 4;
int led_hijau = 3;

void setup() {
  pinMode(led_merah, OUTPUT);
  pinMode(led_kuning, OUTPUT);
  pinMode(led_hijau, OUTPUT);
  
//ubtuk monitoring 
 Serial.begin(19200);
}

void loop() {
  ig (Serial.available() > 0) {
    char perintah = Serial.read();

    Serial.print("Menerima: ");
    Serial.println(perintah);

    //ketik 1 menyalakan lampu merah
    if (perintah == '1') {
      digitalWrite(led_merah, HIGH);
    }

    //ketik 2 menyalakan lampu kuning
    else if (perintah == '2') {
      digitalWrite(led_kuning,HIGH);
    }
  
   //ketik 3 menyalakan lampu hijau
   else if (perintah  == '3') {
    digitalWrite(led_hijau,HIGH);
    
    }
    else if (perintah == '4') {
     digitalWrite(led_merah, LOW);
     digitalWrite(led_kuning, LOW);


    }

    else if (perintah == '5') {
      digitalWrite(led_merah, HIGH);
      digitalWrite(led_kuning, HIGH);


    }
    
  } 
}
