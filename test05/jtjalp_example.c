#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
Give me a password : youaremine

Give me a key : iamyours!!  
*/
int main(void) {
    char input[100] = {0,};
    char key[100] = {0,};

    printf("\nGive me a password : ");
    scanf("%s", input);

    printf("\nGive me a key : ");
    scanf("%s", key);

    printf("\n%d == %d = ? \n", strlen(input), strlen(key));

    if(strlen(input) != strlen(key)) {
        puts("Password length and Key length should be same!\n");
        return -1;
    }

    int len = strlen(input);

    for(int i=0;i<len;i++) {
        if('A' < input[i] && input[i] < 'z') {
            input[i] ^= key[i];
        } else {
            printf("Wrong..\n");
            return -1; 
        }
    }

    for(int i=0;i<len;i++) {
        printf("%.2x", input[i]);
    }

    if(strcmp(input, "\x10\x0e\x18\x18\x1d\x10\x1f\x1aOD")==0) {
        puts("");
        puts("\nSuccess!!");
    } else {
        puts("\nFail..");
    }

    printf("\nThankyou.\n");
    return 0;
}