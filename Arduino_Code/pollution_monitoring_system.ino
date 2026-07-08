#include <SoftwareSerial.h>
#include <DHT.h>
#include <LiquidCrystal.h>

#define DHTPIN A0
#define DHTTYPE DHT11

DHT dht(DHTPIN, DHTTYPE);

// ESP8266
SoftwareSerial esp(5, 6);

// LCD
LiquidCrystal lcd(12, 11, 7, 8, 9, 10);

// Sensors
int mq5, mq135, dust;
float temp, hum;

// API Key
String apiKey = "SFPULLIHJM7VIPCU";

void setup() {
  Serial.begin(9600);
  esp.begin(9600);
  dht.begin();

  lcd.begin(16, 2);
}

void loop() {

  hum = dht.readHumidity();
  temp = dht.readTemperature();

  mq5 = analogRead(A1);
  mq135 = analogRead(A3);
  dust = analogRead(A2);

  Serial.println("MQ5  MQ135  TEMP  HUM  DUST");

  Serial.print(mq5);
  Serial.print("    ");
  Serial.print(mq135);
  Serial.print("    ");
  Serial.print(temp);
  Serial.print("    ");
  Serial.print(hum);
  Serial.print("    ");
  Serial.println(dust);

  Serial.println("-----------------------------");

  // 🔹 FAST LCD UPDATE
  lcd.setCursor(0, 0);
  lcd.print("T:");
  lcd.print(temp);
  lcd.print(" H:");
  lcd.print(hum);
  lcd.print("   ");

  lcd.setCursor(0, 1);
  lcd.print("MQ5:");
  lcd.print(mq5);
  lcd.print("   ");

  delay(500);  // reduced from 2000 → 500 ms

  // 🔹 ESP (reduced delays safely)
  esp.println("AT+CIPSTART=\"TCP\",\"184.106.153.149\",80");
  delay(1500);

  String data = "GET /update?api_key=" + apiKey +
                "&field1=" + String(mq5) +
                "&field2=" + String(temp) +
                "&field3=" + String(hum) +
                "&field4=" + String(mq135) +
                "&field5=" + String(dust) + "\r\n\r\n";

  esp.print("AT+CIPSEND=");
  esp.println(data.length());
  delay(1000);

  esp.print(data);
  delay(1500);

  esp.println("AT+CIPCLOSE");

  delay(8000);  // reduced from 16000 → 8000
}
