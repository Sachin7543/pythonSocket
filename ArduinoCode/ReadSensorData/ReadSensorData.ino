
// the setup routine runs once when you press reset:
void setup() {
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
  pinMode(A0, INPUT);
  pinMode(A1, INPUT);
  pinMode(A2, INPUT);
  pinMode(A3, INPUT);
}

// the loop routine runs over and over again forever:
void loop() {
  // read the input on analog pin 0:
  int Value = analogRead(A0);
  String stringOne = String(Value, HEX);
  int Value1 = analogRead(A1);
  String stringTwo = String(Value1, HEX);
  int Value2 = analogRead(A2);
  String stringThree = String(Value2, HEX);
  int Value3 = analogRead(A3);
  String stringFour = String(Value3, HEX);
  String byte_data  = String(sizeof(Value));
  // print out the value you read:
  String data = (stringOne + "," + stringTwo + "," + stringThree + "," + stringFour);
  String data1 = ("0xAA," + byte_data + "," + data + ",0xAB");;
  Serial.println(data1);
  delay(1);
}
