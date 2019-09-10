#include<SoftwareSerial.h>

int sensor = A0; // select the input pin for the LDR

int sensorValue = 0; // variable to store the value coming from the sensor


void setup() {

pinMode(sensor, INPUT);
Serial.begin(9600);

}

void loop()

{


sensorValue = analogRead(sensor);

Serial.print(1024-sensorValue);
Serial.print(";");
delay(500);
}
