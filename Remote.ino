  // http://www.righto.com/2009/08/multi-protocol-infrared-remote-library.html
  
  #include <IRremote.h>
  IRsend irsend; 
  const byte Power = 5;
  const byte VolUp = 6;
  const byte VolDwn = 7;
  const byte ChUp = 8;

void setup() {
  pinMode (Power, INPUT);
  pinMode (VolUp, INPUT);
  pinMode (VolDwn, INPUT);
  pinMode (ChUp, INPUT);
}

void loop() {
  if (digitalRead(Power) == HIGH) { // button pressed
    irsend.sendNEC(0x20DF10EF, 32); // Vizio TV Power code
    delay(100);
  }
  if (digitalRead(VolUp) == HIGH) { // button pressed
    irsend.sendNEC(0x20DF40BF, 32); // Vizio TV Volume Up code
    delay(100);
  }
  if (digitalRead(VolDwn) == HIGH) { // button pressed
    irsend.sendNEC(0x20DFC03F, 32); // Vizio TV Volume Down code
    delay(100);
  }
  if (digitalRead(ChUp) == HIGH) { // button pressed
    irsend.sendNEC(0x20DF00FF, 32); // Vizio TV Channel Up code
    delay(100);
  }
}
