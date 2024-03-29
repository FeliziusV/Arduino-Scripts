#include "DHT.h"
#define DHTPIN 2     // Digital pin connected to the DHT sensor
#define DHTTYPE DHT11   // DHT 11

DHT dht(DHTPIN, DHTTYPE);

const int sensorPin= 0; //sensor pin connected to analog pin A0
int liquid_level;
void setup() {
Serial.begin(9600); //sets the baud rate for data transfer in bits/second
pinMode(sensorPin, INPUT);
dht.begin();

}
void loop() {
delay(2000);

liquid_level= analogRead(sensorPin); //arduino reads the value from the
Serial.println(liquid_level);//prints out liquid level sensor reading

float h = dht.readHumidity();
// Read temperature as Celsius (the default)
float t = dht.readTemperature();
Serial.println(h);
Serial.println(t);
  
}
