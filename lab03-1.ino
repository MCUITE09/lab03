const byte LED = 13;
void setup() {
 pinMode(13,OUTPUT);
Serial.begin(9600);
   Serial.println("Hello World");
}
void loop() {
  int val;0
  
if(Serial.available()){
  val = Serial.read();
  switch(val){
  case '0':
  digitalWrite(LED,LOW);
  Serial.println("LED OFF");
  break;
  case'1':
  digitalWrite(LED,HIGH);  
   Serial.println("LED ON"); 
  break;
  }
}
}
