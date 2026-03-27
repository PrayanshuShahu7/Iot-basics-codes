#define my_led 7

void setup() {
  pinMode(my_led,OUTPUT);
  //Serial.begin(9600);
}

void loop() {
  //LED ON
   digitalWrite(my_led,HIGH);
  Serial.println("LED Turns ON");
  delay(1000);

  //LED OFF
  digitalWrite(my_led, LOW);
  Serial.println("LED turns OFF");
  delay(1000);
}
