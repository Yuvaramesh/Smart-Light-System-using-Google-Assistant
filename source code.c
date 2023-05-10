#define BLYNK_PRINT Serial

/* Fill-in your Template ID (only if using Blynk.Cloud) */
//#define BLYNK_TEMPLATE_ID   "YourTemplateID"
#define BLYNK_TEMPLATE_ID "TMPL37hxv8S8k"
#define BLYNK_TEMPLATE_NAME "Control Led Using Google Assistant V2"
#define BLYNK_AUTH_TOKEN "XvxmkrnKvTWLEkKRlOG6Wm1Gl2w8cJa6"

#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

// You should get Auth Token in the Blynk App.
// Go to the Project Settings (nut icon).
char auth[] = BLYNK_AUTH_TOKEN;

// Your WiFi credentials.
// Set password to "" for open networks.
char ssid[] = "Yuva Sri";
char pass[] = "******";

void setup()
{
  // Debug console
  Serial.begin(9600);

  Blynk.begin(auth, ssid, pass);
  // You can also specify server:
  //Blynk.begin(auth, ssid, pass, "blynk-cloud.com", 80);
  //Blynk.begin(auth, ssid, pass, IPAddress(192,168,163,120), 8080);
}

void loop()
{
  Blynk.run();
}
