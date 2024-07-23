#include <stdio.h>
#include <string.h>

void simpleSubstitutionDecrypt(char* text, char* key) {
    char alphabet[] = "abcdefghijklmnopqrstuvwxyz";
    char decrypt[26];
    for (int i = 0; i < 26; i++) {
        decrypt[key[i] - 'a'] = alphabet[i];
    }

    for (int i = 0; text[i] != '\0'; i++) {
        if (text[i] >= 'a' && text[i] <= 'z') {
            text[i] = decrypt[text[i] - 'a'];
        } else if (text[i] >= 'A' && text[i] <= 'Z') {
            text[i] = decrypt[text[i] - 'A'] - 32;
        }
    }
}

int main() {
    char text[100];
    char key[] = "qwertyuiopasdfghjklzxcvbnm"; // example key
    printf("Enter the ciphertext: ");
    gets(text);
    simpleSubstitutionDecrypt(text, key);
    printf("Decrypted text: %s\n", text);
    return 0;
}

