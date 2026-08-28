#include <stdio.h>
#include <string.h>

void encrypt(char text[], int shift) {
    for (int i = 0; text[i] != '\0'; i++) {

        if (text[i] >= 'A' && text[i] <= 'Z') {
            text[i] = (text[i] - 'A' + shift) % 26 + 'A';
        }

        else if (text[i] >= 'a' && text[i] <= 'z') {
            text[i] = (text[i] - 'a' + shift) % 26 + 'a';
        }
    }
}

void decrypt(char text[], int shift) {
    for (int i = 0; text[i] != '\0'; i++) {

        if (text[i] >= 'A' && text[i] <= 'Z') {
            text[i] = (text[i] - 'A' - shift + 26) % 26 + 'A';
        }

        else if (text[i] >= 'a' && text[i] <= 'z') {
            text[i] = (text[i] - 'a' - shift + 26) % 26 + 'a';
        }
    }
}

int main() {

    char text[200];
    int choice, shift;

    printf("===== TEXT ENCRYPTION TOOL =====\n");

    printf("\nEnter your message: ");
    fgets(text, sizeof(text), stdin);

    printf("Enter shift value: ");
    scanf("%d", &shift);

    printf("\n1. Encrypt");
    printf("\n2. Decrypt");
    printf("\nEnter choice: ");
    scanf("%d", &choice);

    if (choice == 1) {
        encrypt(text, shift);
        printf("\nEncrypted message: %s", text);
    }
    else if (choice == 2) {
        decrypt(text, shift);
        printf("\nDecrypted message: %s", text);
    }
    else {
        printf("\nInvalid choice!");
    }

    return 0;
}
