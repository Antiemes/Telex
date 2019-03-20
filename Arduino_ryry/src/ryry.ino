#define OUT_PIN LED_BUILTIN
#define SYMBOL_TIME 20

void setup()
{
  pinMode(OUT_PIN, OUTPUT);
}

void mark()
{
  digitalWrite(OUT_PIN, HIGH);
  digitalWrite(LED_BUILTIN, LOW);
  delay(20);
}

void space()
{
  digitalWrite(OUT_PIN, LOW);
  digitalWrite(LED_BUILTIN, HIGH);
  delay(20);
}

void sendChar(char ch)
{
  switch(ch)
  {
    case 'r':
    mark(); mark(); space(); mark(); space(); mark(); space();
    break;

    case 'y':
    mark(); space(); mark(); space(); mark(); space(); space();
    break;
  }
}

void loop()
{
  sendChar('r');
  delay(500);
  sendChar('y');
  delay(500);
}
