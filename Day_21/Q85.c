#include<stdio.h>
#include<string.h>
int main ()
{  
    char str[100] ;
    int i,palindrome=0;
    puts("Enter a string:") ;
    fgets(str ,sizeof(str),stdin);
    int length=strlen(str);
    if(str[length-1]=='\n')
        length--;
    for(i=0;i<length/2;i++)
    {
        if(str[i]!=str[length-i-1])
            palindrome=1;
    }
    if(palindrome==0)
        printf("%sis a palindrome string",str);
    else
        printf("%s is not a palindrome string",str);
    return 0;
}