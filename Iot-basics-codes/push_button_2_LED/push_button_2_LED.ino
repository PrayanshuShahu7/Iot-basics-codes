// global declaration
#define my_led 4
#define my_red 2
#define button 8

void setup() {
  Serial.begin(9600);
  pinMode(my_led, OUTPUT);
  pinMode(my_red, OUTPUT);
  pinMode(button, INPUT);
}

void loop() {
  bool x = digitalRead(button);

  Serial.print("button status = ");
  Serial.println(x);

  if (x == 1) {
    digitalWrite(my_led, HIGH);
    digitalWrite(my_red, HIGH);
    Serial.println("LED turns ON");
  } else {
    digitalWrite(my_led, LOW);
    digitalWrite(my_red, LOW);
    Serial.println("LED turns OFF");
  }
}