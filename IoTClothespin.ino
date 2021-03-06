#include <Ambient.h>
Ambient ambient;
WiFiClient client;

#define INTERVAL (30)
#define RAIN_PIN (33)

unsigned int channelId = <AmbientのチャネルID>;
const char* writeKey = <ライトキー>;
const char* ssid = <SSID>;
const char* password = <Password>;

void setup(){
  
  WiFi.begin(ssid, password);
  while (WiFi.status() != WL_CONNECTED) {
    delay(100);
  }
  
  int val = analogRead(RAIN_PIN);
  val = map(val, 0, 4095, 0, 100);
  
  ambient.begin(channelId, writeKey, &client);
  ambient.set(1, String(val).c_str());
  ambient.send();
  delay(1);
  
  WiFi.disconnect(true);
  esp_deep_sleep(1000000LL * INTERVAL);
}

void loop(){}

