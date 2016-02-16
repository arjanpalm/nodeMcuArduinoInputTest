

  int ledpin=5; // led on D5 will show blink on / off 
  int ledState = LOW;  
  
  int inPin=15;
  int inState = LOW;

void setup() {
  // initialize digital pin 13 as an output.
  pinMode(ledpin, OUTPUT);
  pinMode(inPin, INPUT);

//  Serial.begin(9600);  
//  Serial.println("--- Hoi ---");
}

// the loop function runs over and over again forever
void loop() {
    delay(1000);

    ledState = digitalRead(inPin);

    if (inState == LOW)
      inState = HIGH;
    else
      inState = LOW;


      
    // set the LED with the ledState of the variable:
    digitalWrite(ledpin, ledState);
//Serial.print(inState); 


//  
//  digitalWrite(13, HIGH);   // turn the LED on (HIGH is the voltage level)
//  delay(1000);              // wait for a second
//  digitalWrite(13, LOW);    // turn the LED off by making the voltage LOW
//  delay(1000);              // wait for a second
}
