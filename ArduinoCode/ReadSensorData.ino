
// the setup routine runs once when you press reset:
void setup() {
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
  pinMode(A0,INPUT);
}

// the loop routine runs over and over again forever:
void loop() {
  // read the input on analog pin 0:
  double Value = analogRead(A0);
  // print out the value you read:
  String data=(String)Value+","+(String)Value+","+(String)Value+","+(String)Value;
  Serial.println(data);
//  Serial.write(Value);
  delay(1);     
}
