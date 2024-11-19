const int red = 4;
const int yellow = 3;
const int green = 2;

void setup() {
  Serial.begin(9600); 
  pinMode(red,OUTPUT);
  pinMode(yellow,OUTPUT);
  pinMode(green,OUTPUT);
}
void loop() {
  digitalWrite(red, HIGH);
  Serial.println("Red is blink");
  delay(1000);
  digitalWrite(red, LOW);
  
  digitalWrite(yellow, HIGH);
  Serial.println("Yellow is blink");
  delay(1000);
  digitalWrite(yellow, LOW);

  digitalWrite(green, HIGH);
  Serial.println("Green is blink");
  delay(1000);
  digitalWrite(green, LOW);

  Serial.println("Loop completed.................");
  delay(2000);
}
