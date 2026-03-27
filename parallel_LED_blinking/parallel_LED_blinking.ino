#define my_led1 2
#define my_led2 3
#define my_led3 4

void setup() {
  pinMode(my_led1,OUTPUT);
  pinMode(my_led2,OUTPUT);
  pinMode(my_led3,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  //LED ON
   digitalWrite(my_led1,HIGH);
   digitalWrite(my_led2,HIGH);
   digitalWrite(my_led3,HIGH);
  Serial.println("LED Turns ON");
  delay(1000);

  //LED OFF
  digitalWrite(my_led1, LOW);
  digitalWrite(my_led2, LOW);
  digitalWrite(my_led3, LOW);
  Serial.println("LED turns OFF");
  delay(1000);
}
