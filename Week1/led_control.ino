// void setup() {
//   pinMode(LED_BUILTIN, OUTPUT);
// }

// void loop() {
//   // digitalWrite(LED_BUILTIN, HIGH);

//   PORTB = 32;
//   delay(250);


//   // digitalWrite(LED_BUILTIN, LOW);

//   PORTB = 0;
//   delay(250);
// }

// ------------------------------------------------------------------

void setup() {
  DDRB = 32; // 00100000 (sets PB5 as Output)
}

void loop() {
  // digitalWrite(LED_BUILTIN, HIGH);

  PORTB = 32;
  delay(1000);


  // digitalWrite(LED_BUILTIN, LOW);

  PORTB = 0;
  delay(1000);
}

// ------------------------------------------------------------------