#include<stdio.h>
#include<string.h>
int main ()
{  
    char str[100],ch;
    int i=0,freq=0;
    puts("Enter a string:") ;
    fgets(str ,sizeof(str),stdin);
    printf("Entr thr character of which frequency is to be find:");
    scanf("%c",&ch);
    while(str[i]!='\0')
    {
        if(str[i]==ch)
            freq++;
        i++;
    }
    printf("Frequency of %c is %d",ch,freq);
    return 0;
}
