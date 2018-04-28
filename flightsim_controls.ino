int inputPin = 2;

void setup() {
  // put your setup code here, to run once:
  pinMode(inputPin, INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:

  int val = digitalRead(inputPin);

  Serial.print(val);
  delay(500);
}
