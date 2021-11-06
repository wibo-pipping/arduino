#include <Wire.h>
#include <Adafruit_Sensor.h>
#include <Adafruit_BME280.h>

#define SEALEVELPRESSURE_HPA (1023.00)

Adafruit_BME280 bme;

int sensorValue = 0;

void setup() {
  Serial.begin(115200);
  pinMode(LED_BUILTIN,OUTPUT);

  if (!bme.begin(0x76)) {
    Serial.println("Could not find a valid BME280 sensor, check wiring!");
    while (1);
  }
}

void loop() {
  Serial.print("Temperature = ");
  Serial.print(bme.readTemperature());
  Serial.println("*C");

  Serial.print("Pressure = ");
  Serial.print(bme.readPressure() / 100.0F);
  Serial.println("hPa");

  Serial.print("Approx. Altitude = ");
  Serial.print(bme.readAltitude(SEALEVELPRESSURE_HPA));
  Serial.println("m");

  Serial.print("Humidity = ");
  Serial.print(bme.readHumidity());
  Serial.println("%");

  digitalWrite(LED_BUILTIN, HIGH);
  delay(200);

  sensorValue = analogRead(0);
  Serial.print("UV index = ");
  int voltage = (sensorValue * (5.0 / 1023.0))*1000;
  Serial.println(voltage);
  Serial.println();
  
  digitalWrite(LED_BUILTIN, LOW);
  
  delay(800);
}
