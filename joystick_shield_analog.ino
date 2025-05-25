void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  int X = analogRead(A0);
  int Y = analogRead(A1);
  //Serial.println("X value");
  //Serial.println(X);
  //Serial.println("Y value");
  //Serial.println(Y);
  if(X<100)
    Serial.println("left");

  if(X>500)
    Serial.println("right");

  if(Y<100)
    Serial.println("back");

  if(Y>500)
    Serial.println("forward");

  delay(500);

}

