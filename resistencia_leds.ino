// C++ code
//
int i = 0;

void setup()
{
  for(int i = 2; i < 8; i++){
  	pinMode(i, OUTPUT);
  }
}

void loop()
{
  digitalWrite(i+2, HIGH);
  delay(1000);
  digitalWrite(i+2, LOW);
  i = (i + 1) % 6;
}