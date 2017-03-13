double Analogin=0;
int i;
double Vin;
void setup() {
 Serial.begin(9600);
 pinMode(A0,INPUT);
}

void loop() {
 for (i=0;i<=5;i++){
Analogin = 0.7* Analogin + 0.3* analogRead(A0);
Vin = Analogin * 5 / 1024;
Serial.println(Vin);
delay(500);
 }
}
