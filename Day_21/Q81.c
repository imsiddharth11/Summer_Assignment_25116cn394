#include<stdio.h>
#include<string.h>
int main ()
{
    char str[100];
    puts("Enter a string:");
    fgets(str ,sizeof(str),stdin);
    int length=0 , i=0 ;
    while (str[i]!='\0')
    {
        length++;
        i++;
    }
    if(length>0 && str[length-1]=='\n')
    {
        length--;
    }
    puts("Length of string is ");
    printf("%d",length);
    return 0;
}