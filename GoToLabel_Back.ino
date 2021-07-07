void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
}

void loop() {
label2: if (Serial.available()>0)
  {
int a=Serial.read();
delay(2000);
int b=Serial.read();
Serial.print("Value a: ");
 Serial.println(a);
 Serial.print("Value b: ");
 Serial.println(b);


if (a<b)
   goto label1;
   
else
    {Serial.println("a is not < b");
    goto label2;
    }

    

label1:Serial.println("a<b");}


}
