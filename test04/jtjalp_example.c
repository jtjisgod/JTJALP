#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    char input[100] = {0,};
    char key[100] = {0,};

    printf("\nGive me a first password : ");
    scanf("%s", input);

    printf("\nGive me a second password : ");
    scanf("%s", key);

    if(strcmp(input, "password_first")!=0) {
        printf("\nFirst password is incorrected.\n");
        return -1;
    }

    if(strcmp(key, "password_second")!=0) {
        printf("\nSecond password is incorrected.\n");
        return -1;
    }

    printf("\nYour both password is correct!~!");

    printf("\nThankyou.\n");
    return 0;
}