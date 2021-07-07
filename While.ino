void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
}

void loop() {
 if (Serial.available()>0)
  {
int a=Serial.read();
delay(2000);
Serial.print("Value a: ");
 Serial.println(a);
 delay(2000);
while(a==48)
{
Serial.println("a=0");
break;}
while(a==49)
{
Serial.println("a=1");
break;}
}}
