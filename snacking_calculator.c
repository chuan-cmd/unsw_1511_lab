// A simple program that figures out how many slices of
// bread I can snack on while making sandwiches for my party!

// Written by cheong (z5512751)on 21/1/24
// Tested by [student]


#include <stdio.h>

int main(void) {

    printf("How many slices of bread do you have? ");
    int slices;
    scanf("%d", &slices);
    int snack = 0;
    // if I have an odd number of slices, I can snack
    // on 1 slice.
    if (slices % 2 == 1) {
        snack = 1;
        slices--;
    }
    // if I have an even number of slices, I can snack
    // on 2 slices!
    else if (slices % 2 == 0) {
        snack = 2;
        slices = slices - 2;
    }
    int sandwiches = slices / 2;
    printf("You can snack on %d slices of bread and make %d sandwiches!\n",
            snack, sandwiches);
    return 0;
}
