#include<stdio.h>
#include<string.h>
int main ()
{  
    char str[100] ;
    int i=0,words=1;
    puts("Enter the sentence:") ;
    fgets(str ,sizeof(str),stdin);
    while(str[i]!='\0')
    {
        if (str[i] == ' ' && str[i + 1] != ' ' && str[i + 1] != '\0' && str[i + 1] != '\n')
            words++;
        i++;
    }
    printf("The number of words is %d",words);
    return 0;
}