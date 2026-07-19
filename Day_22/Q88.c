#include<stdio.h>
#include<string.h>
int main ()
{  
    char str[100] ;
    int i=0,j=0;
    puts("Enter a string:") ;
    fgets(str ,sizeof(str),stdin);
    while (str[i] != '\0')
    {
        if (str[i]!=' ')
        {
            str[j] = str[i];
            j++;
        }
        i++;
    }
    printf("String after removing spaces is %s",str);
    return 0;
}