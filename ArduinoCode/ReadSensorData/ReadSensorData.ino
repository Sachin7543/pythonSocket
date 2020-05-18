
// the setup routine runs once when you press reset:
void setup() {
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
  pinMode(A0,INPUT);
  pinMode(A1,INPUT);
  pinMode(A2,INPUT);
  pinMode(A3,INPUT);
}

// the loop routine runs over and over again forever:
void loop() {
  // read the input on analog pin 0:
  double Value = analogRead(A0);
  double Value1 = analogRead(A1);
  double Value2 = analogRead(A2);
  double Value3 = analogRead(A3);
  // print out the value you read:
  String data=(String)Value+","+(String)Value1+","+(String)Value2+","+(String)Value3;
  Serial.println(data);
//  Serial.write(Value);
  delay(1);     
}
