//Develop a C program that reads a sentence from the user. Create a function to count the occurrences of each consonant in the sentence and display the counts.//
#include <stdio.h>
#include <ctype.h>  

int main() {
    char text[100], letter;
    int freq[26] = {0};  // to count occurrences of each consonant
    int j;

    // Take sentence input from user
    printf("Enter a sentence: ");
    fgets(text, sizeof(text), stdin);

    // Scan every character in the sentence
    for (j = 0; text[j] != '\0'; j++) {
        char c = tolower(text[j]);  // convert to lowercase for uniform comparison
        
        // Check and count only consonants
        if (c >= 'a' && c <= 'z' && !(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')) {
            freq[c - 'a']++;
        }
    }

    // Print the frequency of each consonant
    printf("\nFrequency of consonants:\n");
    for (letter = 'a'; letter <= 'z'; letter++) {
        if (!(letter == 'a' || letter == 'e' || letter == 'i' || letter == 'o' || letter == 'u') && freq[letter - 'a'] > 0) {
            printf("%c : %d\n", letter, freq[letter - 'a']);
        }
    }

    return 0;
}
