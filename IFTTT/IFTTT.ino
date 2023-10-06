#define BLYNK_PRINT Serial

#define BLYNK_TEMPLATE_ID "TMPL689zsShhY"
#define BLYNK_TEMPLATE_NAME "IFTTT"
#define BLYNK_AUTH_TOKEN "uS7L7lXzDQxCrAZPliHXmdFLYEx2OKEV"

#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

#define ledPin D2

char ssid[] = "Cabang Puri";
char pass[] = "gakngerti";



void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(ledPin, OUTPUT);
Blynk.begin(BLYNK_AUTH_TOKEN, ssid, pass);
}

void loop() {
  // put your main code here, to run repeatedly:
Blynk.run();
}

BLYNK_WRITE(V0) {
  int value = param.asInt();
  value ? digitalWrite(ledPin, HIGH) : digitalWrite(ledPin, LOW);
}
