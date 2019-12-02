const int sensorPin= 0; //sensor pin connected to analog pin A0
int liquid_level;
void setup() {
Serial.begin(9600); //sets the baud rate for data transfer in bits/second
pinMode(sensorPin, INPUT);

}
void loop() {
liquid_level= analogRead(sensorPin); //arduino reads the value from the
Serial.println(liquid_level);//prints out liquid level sensor reading
delay(1000);
}
