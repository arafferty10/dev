void setup() {
  // put your setup code here, to run once:

  //declare pin modes
  pinMode(2, INPUT);  //button is input
  pinMode(3, OUTPUT); //LED1 as output
  pinMode(4, OUTPUT); //LED2 as other output

}

void loop() {
  // put your main code here, to run repeatedly:
  //HIGH and 1 can be used intercahangably, as can LOW and 0
  
  //if my button is pressed, light LED 1 (Port 3)
  if(digitalRead(2) == 1)
  {
    //light led1
    digitalWrite(3,HIGH);
    digitalWrite(4,LOW);
  }
  else
  {
    //means that the button is not pressed
    digitalWrite(4, HIGH);
    digitalWrite(3, LOW);
  }

  //if button is NOT pressed, light LED 2 (Port 4)
  

}
