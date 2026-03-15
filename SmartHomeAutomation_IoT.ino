#define BLYNK_TEMPLATE_ID "TMPL3-jlimjZ6"
#define BLYNK_TEMPLATE_NAME "Smart Home Automation"
#define BLYNK_AUTH_TOKEN "8HlGgAduPphQoqZ3bRbT-ithqLkQThvt"

#define BLYNK_PRINT Serial

#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

char ssid[] = "Raj Smart Home";
char pass[] = "Raj1001001";

#define Relay1 D0
#define Relay2 D1
#define Relay3 D2
#define Relay4 D3

void setup()
{
  Serial.begin(115200);

  pinMode(Relay1, OUTPUT);
  pinMode(Relay2, OUTPUT);
  pinMode(Relay3, OUTPUT);
  pinMode(Relay4, OUTPUT);

  digitalWrite(Relay1, HIGH);
  digitalWrite(Relay2, HIGH);
  digitalWrite(Relay3, HIGH);
  digitalWrite(Relay4, HIGH);

  Blynk.begin(BLYNK_AUTH_TOKEN, ssid, pass);
}

void loop()
{
  Blynk.run();
}

BLYNK_WRITE(V0)
{
  digitalWrite(Relay1, param.asInt());
}

BLYNK_WRITE(V1)
{
  digitalWrite(Relay2, param.asInt());
}

BLYNK_WRITE(V2)
{
  digitalWrite(Relay3, param.asInt());
}

BLYNK_WRITE(V3)
{
  digitalWrite(Relay4, param.asInt());
}