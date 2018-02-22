#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    char input[100] = {0,};
    printf("\nGive me a password : ");
    scanf("%s", &input);

    if(strcmp(input, "passwordispassword")==0) {
        puts("Success!!");
    } else {
        puts("Fail..");
    }

    printf("\nThankyou.\n");
    return 0;
}