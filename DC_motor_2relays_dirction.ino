//define the output pins
const int r1=3;
const int r2=5;

void setup()
{
  //state the pins mod
  pinMode(r1, OUTPUT);
  pinMode(r2, OUTPUT);

}

void loop()
{
  //state the motor direction 
  digitalWrite(r1, HIGH);
  delay(5000); 
  //the motor stops
  digitalWrite(r1, LOW);
  delay(1000);
  //the motor rotate in the other direction
  
  digitalWrite(r2, HIGH);
  delay(5000); 
   //the motor stops
  digitalWrite(r2, LOW);
  delay(1000);
  //SEREEN__BAHDAD
}
