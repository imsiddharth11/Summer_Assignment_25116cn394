#include<stdio.h>
#include<string.h>
int main ()
{
    char str[100],word[100],lword[100];
    puts("Enter a sentence:");
    fgets(str ,sizeof(str),stdin);
    int i,c=0;
    lword[0]='\0';
    for(i=0;i<strlen(str);i++)
    {
        if(str[i]!=' ' && str[i]!='\n')
        {
            word[c]=str[i];
            c++;
        }
        else
        {
            word[c]='\0';
            if(strlen(word)>strlen(lword))
            {
                strcpy(lword,word);
            }
            c=0;
        }
    }
    printf("Longest word=%s",lword);
    return 0;
}