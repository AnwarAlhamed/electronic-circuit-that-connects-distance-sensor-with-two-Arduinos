// C++ code
//
void setup()
{
  pinMode(13, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  if(Serial.available() > 0){
  if(Serial.read() == '1')
    digitalWrite(13, HIGH);
    delay(3000);
    digitalWrite(13, LOW);
  }
}