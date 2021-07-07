void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
}

void loop() {
 if (Serial.available()>0)
  {
int a=Serial.read();
delay(2000);
int b=Serial.read();

Serial.print("Value a: ");
 Serial.println(a);
 Serial.print("Value b: ");
 Serial.println(b);
delay(2000);
if (a==48)
  if (b==49)
  Serial.println("a=0;b=1");
  else
Serial.println("b is not = 1");
else
Serial.println("a is not = 0");

}}
