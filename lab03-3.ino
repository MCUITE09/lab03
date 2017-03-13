double ResisterValue;
double sensorValue;
double sensorVoltage;
double R1;
int i;
void setup() {
 Serial.begin(9600);
 pinMode(A1,INPUT);
 ResisterValue = 1023;
}

void loop() {
 for (i=0;i<=5;i++)
sensorValue = 0.7* sensorValue + 0.3* analogRead(A1);
sensorVoltage = sensorValue * 5 / 1024;
//sensorVoltage= 5 * R1 /900000;
R1 = sensorVoltage * 1091000/ 5;
Serial.println(sensorValue);
Serial.println(sensorVoltage);
Serial.println(R1);
delay(1000);
 
}
