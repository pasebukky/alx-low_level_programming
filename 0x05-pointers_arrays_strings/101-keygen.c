#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

#define LENGTH_OF_PASSWORD 15

int main(void) {
    int i;

    char password[LENGTH_OF_PASSWORD + 1];
    const char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";

    srand(time(0));

    for (i = 0; i < LENGTH_OF_PASSWORD; i++) {
        int random_index = rand() % (sizeof(charset) - 1);
        password[i] = charset[random_index];
    }

    password[LENGTH_OF_PASSWORD] = '\0';

    const char correct_password[] = "Tada! Congrats"; // Declare correct_password here
    if (strcmp(password, correct_password) == 0) {
        printf("Generated Password: %s\n", password);
        printf("Tada! Congrats\n");
    } else {
        printf("Generated Password: %s\n", password);
        printf("Wrong password\n");
    }

    return 0;
}
