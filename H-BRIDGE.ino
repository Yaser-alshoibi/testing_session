//difine the pin numbers
int enable1 = 2;
int enable2 = 4;
int input1 = 6;
int input2 = 9;
int input3 = 10;
int input4 = 11;

void setup()
{
  // define the pin modes
  
  pinMode(input1, OUTPUT);
  pinMode(input2, OUTPUT);
  pinMode(input3, OUTPUT);
  pinMode(input4, OUTPUT);
  pinMode(enable1, OUTPUT);
    pinMode(enable2, OUTPUT);

  
}

void loop()
{

  //codition to move forward
  
    digitalWrite(enable1, HIGH); 
    digitalWrite(enable2, HIGH);// enable the two input of the driver
    digitalWrite(input1, LOW);         // Put this terminal to ground
    analogWrite(input2, HIGH);   // use pmw to move the motor with spicific speed
    digitalWrite(input3, LOW);         // Put this terminal to ground
    analogWrite(input4, HIGH);   // use pmw to move the motor with spicific speed
  delay(2000);
  
  // condition to move backward
  
   digitalWrite(enable2, HIGH);
   digitalWrite(enable1, HIGH);// enable the two input of the driver
   analogWrite(input1 ,HIGH); // use pmw to move the motor with spicific speed
   digitalWrite(input2, LOW);       // set the other terminal to LOW (Ground)
   analogWrite(input3, HIGH); // use pmw to move the motor with spicific speed
   digitalWrite(input4, LOW); 
   delay(2000);
     
    // condition to move Right
 
   digitalWrite(enable1, HIGH);
   digitalWrite(enable2, HIGH);// enable the two input of the driver
   digitalWrite(input1 ,LOW);        
   analogWrite(input2, HIGH);
   analogWrite(input3, HIGH);
   digitalWrite(input4, LOW); 
   delay(2000);
  
    // condition to move Left
  
   digitalWrite(enable2, HIGH);  
    digitalWrite(enable1, HIGH);// enable the two input of the driver
   analogWrite(input1 ,HIGH); 
   digitalWrite(input2, LOW);      
   digitalWrite(input3, LOW);
   analogWrite(input4, HIGH);
      delay(2000);

}
