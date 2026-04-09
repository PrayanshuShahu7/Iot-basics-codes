//global declaration
int led1 = 2;
int led2 = 3;
int led3 = 4;
int led4 = 5;

int leftButton = 8;
int rightButton = 9;

void setup()
{
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);

  pinMode(leftButton, INPUT);
  pinMode(rightButton, INPUT);
}

void loop()
{
  if (digitalRead(leftButton) == HIGH)
  {
    // Left to Right
    digitalWrite(led1, HIGH);
    delay(200);
    digitalWrite(led1, LOW);

    digitalWrite(led2, HIGH);
    delay(200);
    digitalWrite(led2, LOW);

    digitalWrite(led3, HIGH);
    delay(200);
    digitalWrite(led3, LOW);

    digitalWrite(led4, HIGH);
    delay(200);
    digitalWrite(led4, LOW);
  }

  if (digitalRead(rightButton) == HIGH)
  {
    // Right to Left
    digitalWrite(led4, HIGH);
    delay(200);
    digitalWrite(led4, LOW);

    digitalWrite(led3, HIGH);
    delay(200);
    digitalWrite(led3, LOW);

    digitalWrite(led2, HIGH);
    delay(200);
    digitalWrite(led2, LOW);

    digitalWrite(led1, HIGH);
    delay(200);
    digitalWrite(led1, LOW);
  }
}