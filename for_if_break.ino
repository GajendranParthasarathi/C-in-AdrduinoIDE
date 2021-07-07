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
for(int i=(a-48);i<10;++i)
{
Serial.print("Iteration:");
Serial.println(i);
if (b==49)
break;
Serial.println("b!=1");}
}}

/*if a=1, b=1
Value a: 49
Value b: 49
Iteration:1


if a=0, b=1
Value a: 48
Value b: 49
Iteration:0


if a=1, b=0
Value a: 49
Value b: 48
Iteration:1
b!=1
Iteration:2
b!=1
Iteration:3
b!=1
Iteration:4
b!=1
Iteration:5
b!=1
Iteration:6
b!=1
Iteration:7
b!=1
Iteration:8
b!=1
Iteration:9
b!=1


if a=0, b=0
Value a: 48
Value b: 48
Iteration:0
b!=1
Iteration:1
b!=1
Iteration:2
b!=1
Iteration:3
b!=1
Iteration:4
b!=1
Iteration:5
b!=1
Iteration:6
b!=1
Iteration:7
b!=1
Iteration:8
b!=1
Iteration:9
b!=1


*/
