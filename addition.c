//Jan 21 2014
// Cheong (z5512751@ad.unsw.edu.au)
#include<stdio.h>
int main (void)
{   
    int tutors;
    int students;
    printf("please enter the number of students and tutors:");
    scanf("%d %d", &students, &tutors);
    printf("%d + %d = %d\n", students, tutors, students + tutors);
    return 0;
}