void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
}

void loop() {
 if (Serial.available()>0)
  {
int a=Serial.read();
delay(1000);
int b=Serial.read();
int i,j;
for (i=(a-48),j=(b-48); i<10 and j<10;i++,j++)
{
 
  {
  Serial.print("Iteration:");
  Serial.println(i);
  }}}



}
/*18:18:34.500 -> Iteration:8
18:18:34.500 -> Iteration:9
18:18:34.500 -> Iteration...:8
18:18:34.534 -> Iteration...:9
18:18:34.534 -> Ite:8
18:18:34.568 -> Ite:9
18:18:34.568 -> ITERATION:8
18:18:34.568 -> ITERATION:9
18:18:34.603 -> ITE:9
18:18:34.603 -> ITE:10
18:18:34.603 -> Iteration:8
18:18:34.603 -> Iteration:9
18:18:34.637 -> Iteration:10
18:18:34.637 -> Ite:8
18:18:34.672 -> Ite:9
18:18:34.672 -> Ite:10
18:18:34.672 -> ITERATION:8
18:18:34.672 -> ITERATION:9
18:18:34.706 -> ITERATION:10
18:18:34.706 -> ITE:9
18:18:34.706 -> ITE:10
18:18:34.740 -> ITE:11

*/
