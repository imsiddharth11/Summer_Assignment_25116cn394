#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    int vowels=0,consonants=0;
    puts("Enter a string .");
    fgets(str ,sizeof(str),stdin);
    for( int i=0;str[i]!='\0';i++)
    {
       if( str[i]>='a' && str[i]<='z')
       {
        if( str[i]=='a'|| str[i]=='e'|| str[i]=='i'|| str[i]=='o'|| str[i]=='u')
        {
           vowels++;
        }
        else consonants++;
       }
    }
    printf("Vowels=%d and Consonants=%d.",vowels,consonants);
    return 0;
}