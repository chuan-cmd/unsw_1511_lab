//Jan 21 2014
// Cheong (z5512751@ad.unsw.edu.au)
#include<stdio.h>
int main(void)
{   
    char choice1;
    int choice2;
    printf("Uppercase: ");
    scanf("%c", &choice1);
    if (choice1 == 'y')
    {  
        printf("Index: ");
        scanf("%d", &choice2);
        printf("The letter is ");
        putchar(choice2 + 64);
    }
    else if (choice1 == 'n')
    {
        printf("Index: ");
        scanf("%d", &choice2);
        printf("The letter is ");
        putchar(choice2 + 96);
    }
    printf("\n");
    return 0;
}