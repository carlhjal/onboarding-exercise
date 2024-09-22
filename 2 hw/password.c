#include <stdio.h>
#include <string.h>

int main(void) {
    char password[] = "Bogdabots";
    char guess[40] = {0};
    
    while (1) {
        printf("Guess the password... (its case sensitive)...\n");
        scanf("%39s", guess);
        printf("Your guess: %s, is...\n", guess);

        if (!strncmp(guess, password, sizeof(password))) {
            printf("Right! Good job boi");
            break;
        }

        printf("Wrong, try again\n");
    }

    return 0;
}