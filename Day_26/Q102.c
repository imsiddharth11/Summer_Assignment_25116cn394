#include<stdio.h>
int main ()
{
    int age;
    printf("Enter Your Age:");
    scanf("%d",&age);

    if(age>=18)
        printf("You are eligible to Vote");
    else
        printf("You are not eligible to Vote");
    return 0;
}