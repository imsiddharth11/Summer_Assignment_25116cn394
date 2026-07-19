#include<stdio.h>
#include<string.h>
int main ()
{  
    char str[100];
    int i,j,flag;
    puts("Enter a string:") ;
    fgets(str ,sizeof(str),stdin);
    for(i=0;str[i]!='\0';i++)
    {
        int flag=0;
        for(j=0;str[j]!='\0';j++)
        {
            if(i!=j && str[i]==str[j])
            {
                flag=1;
                break;
            }
        }
        if(flag==1)
        {
            printf("First repeating character of string is %c",str[i]);
            break;
        }
    }
    return 0;
}