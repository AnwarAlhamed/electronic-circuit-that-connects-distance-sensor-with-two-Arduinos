

int echo = 3; int trigger = 4;
int distance; long duration;


void setup()
{
  Serial.begin(9600);
  pinMode(echo, INPUT);
  pinMode(trigger, OUTPUT);
  
}
int gettingDistance(){
  
  digitalWrite(trigger,LOW);
  delayMicroseconds(2);
  
  
  digitalWrite(trigger,HIGH);
  delayMicroseconds(10);
  
  digitalWrite(trigger,LOW);
  
  duration = pulseIn(echo, HIGH);
  
  distance = (duration/2)* 0.0343;
  
  return distance ;

  
}

  void loop()
{
  
    while (gettingDistance()> 45){  }
    
    int FirstTime = millis();
    
    
    while(gettingDistance()< 45)
    {
      int SecondTime = millis();
      
      if ( SecondTime - FirstTime > 3000){ 
    Serial.write("1");
    Serial.write("open the screen");            
    Serial.println('\n');
    break;                       
  }
    }
  
   while (gettingDistance()< 45){  }
}
  
    
    
    
    
    