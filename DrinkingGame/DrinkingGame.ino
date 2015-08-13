  /*
  DigitalReadSerial
 Reads a digital input on pin 2, prints the result to the serial monitor

 This example code is in the public domain.
 */
int led = 13;

// digital pin 2 has a pushbutton attached to it. Give it a name:
int pushButton = 3;

// the setup routine runs once when you press reset:
void setup() {
  // initialize serial communication at 9600 bits per second:
  Serial.begin(115200);
  
  pinMode(led, OUTPUT);
  
  // make the pushbutton's pin an input:
  pinMode(pushButton, INPUT);
  
  pinMode(A0, OUTPUT);
  pinMode(A1, OUTPUT);
  
  digitalWrite(A0, LOW);
  digitalWrite(A1, LOW);
}

// the loop routine runs over and over again forever:
void loop() {
  // read the input pin:
  int buttonState = digitalRead(pushButton);
  // print out the state of the button:
  Serial.println(buttonState);
  
  if(buttonState == HIGH) {
    digitalWrite(led, HIGH);
    digitalWrite(A0, HIGH);
    
    delay(5000);
    
    digitalWrite(led, LOW);
    digitalWrite(A0, LOW);
  } 
  delay(1);        // delay in between reads for stability
}



