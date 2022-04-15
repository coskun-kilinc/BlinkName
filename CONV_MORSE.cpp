#ifndef CONV_MORSE
#define CONV_MORSE
#include <Particle.h>

// the maps for letters to morse code
const char letters[37] = { ' ', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', '1', '2', '3', '4', '5', '6', '7', '8', '9', '0' };
const String morseLetters[37] = { " ", ".-", "-...", "-.-.", "-..", ".", "..-.", "--.", "....", "..", ".---", "-.-", ".-..",  "--", "-.", "---", ".--.", "--.-", ".-.", "...", "_", "..-", "...-", ".--", "-..-", "-.--", "--..", ".----", "..---", "...--", "....-", ".....", "-....", "--...", "---..", "----.", "-----"};

String ConvertToMorse(String textToChange){
    // new blank string
    String newText = "";
    
    //iterates through each character of the string and then compares that character with the list of letters. 
    // When it finds the matching letter, it adds it's corresponging morse code representation to the new string. 
    for (int i = 0; i < textToChange.length(); i++) {
        for (int j = 0; j < 37; j++) {
            if (textToChange[i] == letters[j]) {
                newText += morseLetters[j];
                newText += " ";
                break;
            }
        }     
      
    }
    return newText;
}
    
#endif