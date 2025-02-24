#include <Arduino.h>
int ledm = 17;
int ledk = 18;
int ledh = 19 ;



void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  pinMode(ledm, OUTPUT);
  pinMode(ledk, OUTPUT);
  pinMode(ledh, OUTPUT);


}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(ledm, HIGH);
digitalWrite(ledk, LOW);
digitalWrite(ledh, LOW); //merah yang nyala
delay(30000);
digitalWrite(ledm, LOW);
digitalWrite(ledk, HIGH);
digitalWrite(ledh, LOW); //kuning yang nyala
delay(5000);
digitalWrite(ledm, LOW);
digitalWrite(ledk, LOW);
digitalWrite(ledh, HIGH); //hijau yang nyala
delay(20000);

}
