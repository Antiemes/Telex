#define OUT_PIN 10
#define SYMBOL_TIME 20

void setup()
{
  pinMode(OUT_PIN, OUTPUT);
  pinMode(LED_BUILTIN, OUTPUT);
  delay(5000);
}

void mark()
{
  digitalWrite(OUT_PIN, LOW);
  digitalWrite(LED_BUILTIN, HIGH);
  delay(20);
}

void space()
{
  digitalWrite(OUT_PIN, HIGH);
  digitalWrite(LED_BUILTIN, LOW);
  delay(20);
}

void sendChar(char ch)
{
  switch(ch)
  { // White: mark, Dot: space.
    case 'a':
    mark(); space(); space();  mark();  mark();  mark(); space();
    break;

    case 'b':
    mark(); space();  mark();  mark(); space(); space(); space(); 
    break;

    case 'c':
    mark();  mark(); space(); space(); space();  mark(); space(); 
    break;

    case 'd':
    mark(); space();  mark();  mark(); space();  mark(); space(); 
    break;

    case 'e':
    mark(); space();  mark();  mark();  mark();  mark(); space(); 
    break;

    case 'f':
    mark(); space();  mark(); space(); space();  mark(); space(); 
    break;

    case 'g':
    mark();  mark(); space();  mark(); space(); space(); space(); 
    break;

    case 'h':
    mark();  mark();  mark(); space();  mark(); space(); space(); 
    break;

    case 'i':
    mark();  mark(); space(); space();  mark();  mark(); space(); 
    break;

    case 'j':
    mark(); space(); space();  mark(); space();  mark(); space(); 
    break;

    case 'k':
    mark(); space(); space(); space(); space();  mark(); space(); 
    break;

    case 'l':
    mark();  mark(); space();  mark();  mark(); space(); space(); 
    break;

    case 'm':
    mark();  mark();  mark(); space(); space(); space(); space(); 
    break;

    case 'n':
    mark();  mark();  mark(); space(); space();  mark(); space(); 
    break;

    case 'o':
    mark();  mark();  mark();  mark(); space(); space(); space(); 
    break;

    case 'p':
    mark();  mark(); space(); space();  mark(); space(); space(); 
    break;

    case 'q':
    mark();  space(); space(); space();  mark(); space(); space(); 
    break;

    case 'r':
    mark();  mark(); space();  mark(); space();  mark(); space();
    break;

    case 's':
    mark(); space();  mark(); space();  mark();  mark(); space();
    break;

    case 't':
    mark();  mark();  mark();  mark();  mark(); space(); space();
    break;

    case 'u':
    mark(); space(); space(); space();  mark();  mark(); space();
    break;

    case 'v':
    mark();  mark(); space(); space(); space(); space(); space();
    break;

    case 'w':
    mark(); space(); space();  mark();  mark(); space(); space();
    break;

    case 'x':
    mark(); space();  mark(); space(); space(); space(); space();
    break;

    case 'y':
    mark(); space();  mark(); space();  mark(); space(); space();
    break;

    case 'z':
    mark(); space();  mark();  mark();  mark(); space(); space();
    break;

    case '_': // change to letters
    mark(); space(); space(); space(); space(); space(); space();
    break;

    case '\n': // CR + LF
    mark(); mark();  mark();  mark(); space();  mark();   space();
    mark(); mark(); space();  mark();  mark();  mark();   space();
    break;

    case ' ':
    mark(); mark();  mark(); space();  mark();  mark();  space();
    break;

    case '|': // change to figures
    mark(); space(); space();  mark(); space(); space(); space();
    break;
  }
}

void loop()
{
  char text[]="_abcdefghijklmnopqrstuvwxyz\n|abc efghi klmnopqrstuvwxyz\njd";
  uint8_t i=0;
  while (text[i])
  {
    sendChar(text[i]);
    i++;
    delay(200);
  }
  while(1);
}
