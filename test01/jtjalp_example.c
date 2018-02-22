#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    int input = 0;
    printf("\nGive me a password : ");
    scanf("%d", &input);
    if(input == 980414) {
        printf("Correct! Taejin's Birthday is 980414");
    } else {
        printf("Incorrect! How about reversing or using angr to explore?");
    }
    printf("\nThankyou.\n");
    return 0;
}