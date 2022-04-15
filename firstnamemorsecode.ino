// This #include statement was automatically added by the Particle IDE.
#include "CONV_BLINK.h"

// This #include statement was automatically added by the Particle IDE.
#include "CONV_MORSE.h"

// variables

//LED pins
int led1 = D0;
int led2 = D7;
// name in morse code
String firstName = "josh";



void setup() {
// initialise pins
pinMode(led1, OUTPUT);
pinMode(led2, OUTPUT);
}

void loop() {
    String newString;
    newString = ConvertToMorse(firstName);
    for (int i = 0; i < firstName.length(); i++){
        ConvertToBlink(newString[i], 250, led1, led2);
    }
    // start name over again
    delay(500);
}