void setup() {
  // initialize serial communication:
  Serial.begin(9600);
  
}

void loop() {
  // read the value:
  if (Serial.available() > 0) {
    int inByte = Serial.read();
    // do something different depending on the character received.
    // The switch statement expects single number values for each case; in this
    // example, though, you're using single quotes to tell the controller to get
    // the ASCII value for the character. For example 'a' = 97, 'b' = 98,
    // and so forth:

    switch (inByte) {
      case '1':
        Serial.println('a');
        break;
      case 'b':
        Serial.println('b');
        break;
      case 'c':
       Serial.println('c');
        break;
      case 'd':
        Serial.println('d');
        break;
      case 'e':
        Serial.println('e');
        break;
      default:
        Serial.println('f');
        }
    }
  }
