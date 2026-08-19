/******** BLYNK CONFIG (Dummy values) ********/
#define BLYNK_TEMPLATE_ID "TEMP_ID"
#define BLYNK_TEMPLATE_NAME "TempHumidityProject"
#define BLYNK_AUTH_TOKEN "AUTH_TOKEN"

#define BLYNK_PRINT Serial

/******** LIBRARIES ********/
#include <WiFi.h>
#include <BlynkSimpleEsp32.h>
#include <DHT.h>

/******** WIFI (Dummy values) ********/
char ssid[] = "YOUR_WIFI";
char pass[] = "YOUR_PASSWORD";

/******** DHT SETUP ********/
#define DHTPIN 4
#define DHTTYPE DHT22

DHT dht(DHTPIN, DHTTYPE);
BlynkTimer timer;


/******** Function to read sensor ********/
void sendSensor()
{
  float humidity = dht.readHumidity();
  float temperature = dht.readTemperature();

  if (isnan(humidity) || isnan(temperature))
  {
    Serial.println("Sensor error");
    return;
  }

  // Send data to Blynk
  Blynk.virtualWrite(V0, temperature);
  Blynk.virtualWrite(V1, humidity);

  Serial.print("Temp: ");
  Serial.print(temperature);
  Serial.print("  Humidity: ");
  Serial.println(humidity);
}


/******** Setup ********/
void setup()
{
  Serial.begin(115200);

  Blynk.begin(BLYNK_AUTH_TOKEN, ssid, pass);

  dht.begin();

  timer.setInterval(2000L, sendSensor);
}


/******** Loop ********/
void loop()
{
  Blynk.run();
  timer.run();
}