#include<stdio.h>
#include<string.h>
int main ()
{
    char str[100];
    puts("Enter a string:");
    fgets(str ,sizeof(str),stdin);
    int start=0;
    int end=strlen(str)-1;
    char temp;
    while(start<end)
    {
        temp=str[start];
        str[start]=str[end];
        str[end]=temp;
        start++;
        end--;
    }
    printf("Reverse of string is %s",str);
    return 0;
}