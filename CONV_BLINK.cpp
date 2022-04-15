#ifndef CONV_BLINK
#define CONV_BLINK
#include <Particle.h>

// the character to blink, unit length (how long blinks will last as well as the gap between blinks) and the LEDs that will be controlled
void ConvertToBlink(char c, int unit, int led1, int led2){
    // if character is a dot, blink for 1 unit
    if ( c == '.' ){
            digitalWrite(led1, HIGH);
            digitalWrite(led2, HIGH);
            delay(unit);
        }
    //if character is a dash, blink for 3 units
    else if ( c == '-' ){
        digitalWrite(led1, HIGH);
        digitalWrite(led2, HIGH);
        delay(unit*3);
    }
    // turn LED off
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    // delay for 1 unit (space between blinks)
    delay(unit);
    }

#endif