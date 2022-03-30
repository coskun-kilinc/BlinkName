// variables

//LED pins
int led1 = D0;
int led2 = D7;
// name in morse code
String firstName = ".--- --- ... ....";

void ConvertToBlink(char c, int unit){
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


void setup() {
// initialise pins
pinMode(led1, OUTPUT);
pinMode(led2, OUTPUT);
}

void loop() {
    // iterate through firstName string
    for (int i = 0; i < firstName.length(); i++){
        ConvertToBlink(firstName[i], 500);
    }
    // start name over again
}