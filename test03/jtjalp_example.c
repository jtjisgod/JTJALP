#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    char input[100] = {0,};
    printf("\nGive me a password : ");
    scanf("%s", input);

    for(int i=0;i<strlen(input);i++) {
        input[i] ^= i;
    }

    if(strcmp(input, "m0l2r6rw<<?|<\x7fj")==0) {
        puts("\nSuccess!!");
    } else {
        puts("\nFail..");
    }

    printf("\nThankyou.\n");
    return 0;
}