// void setup() {
//   DDRB = 32; // 00100000 (sets PB5 as Output)
// }

// void loop() {

//     volatile byte* addr = 0x25; // Address of PORTB register

//     *addr = 32; // 00100000

//     for (int i = 0; i < 1000000; i++) { *addr = 32; }   // delay(1000);


//     *addr = 0; // 00000000


//     for (int i = 0; i < 1000000; i++) { *addr = 0; }   // delay(1000);


// }

// ------------------------------------------------------------------

// void setup() {
//   DDRB = 32; // 00100000 (sets PB5 as Output)
// }

// void loop() {

//     *((volatile byte*) 0x25) = 32; // 00100000

//     for (int i = 0; i < 1000000; i++) { *((volatile byte*) 0x25) = 32; }   // delay(1000);


//     *((volatile byte*) 0x25) = 0; // 00000000


//     for (int i = 0; i < 1000000; i++) { *((volatile byte*) 0x25) = 0; }   // delay(1000);


// }

// // ------------------------------------------------------------------



#define ADDRESS *((volatile byte*) 0x25)
#define ADDR_DDRB *((volatile byte*) 0x24)

void setup() {
  ADDR_DDRB = 32; // 00100000 (sets PB5 as Output)
}

void loop() {


  ADDRESS = 32; // 00100000

    for (int i = 0; i < 1000000; i++) { ADDRESS }   // delay(1000);


    ADDRESS = 0; // 00000000


    for (int i = 0; i < 1000000; i++) { ADDRESS = 0; }   // delay(1000);


}

// ------------------------------------------------------------------

