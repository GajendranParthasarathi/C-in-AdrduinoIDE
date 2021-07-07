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
if (a<b)
Serial.println("a<b");
if (a>b)
Serial.println("a>b");
if (a==b)
Serial.println("a=b");
}}
