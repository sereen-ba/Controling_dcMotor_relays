//define the output pins
const int r1=3;
const int r2=5;
int switchPinFwd = 2; 
int potentiometerIn;

void setup()
{
  //state the pins mod
  pinMode(switchPinFwd, INPUT_PULLUP);
  pinMode(r1, OUTPUT);
  pinMode(r2, OUTPUT);

}

void loop()
{  
  potentiometerIn = analogRead(A0);
  int output = potentiometerIn / 4; 
  if(digitalRead(switchPinFwd) == HIGH) 
  {
    delay(500); 
    digitalWrite(r1, output);
    digitalWrite(r2, LOW);
  }
  else
  {
     digitalWrite(r1, LOW);
    delay(500); 
    digitalWrite(r2, output);
  }
 
  
  delay(500); 
  
}
//sereen bahdad
