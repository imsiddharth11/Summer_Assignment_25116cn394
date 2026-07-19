#include<stdio.h>
int main ()
{
    int n,i=5;
    printf("Guess a Number:");
    scanf("%d",&n);

    if(n==i)
        printf("You Guessed Right");
    else
        printf("You Guessed wrong");
    return 0;
}