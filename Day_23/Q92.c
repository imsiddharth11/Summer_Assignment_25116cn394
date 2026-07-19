#include<stdio.h>
#include<string.h>
int main ()
{  
    char str[100],c;
    int i,j,count,max;
    puts("Enter a string:") ;
    fgets(str ,sizeof(str),stdin);
    for(i=0;str[i]!='\0';i++)
    {
        count=0;
        for(j=0;str[j]!='\0';j++)
        {
            if(str[i]==str[j])
                count++;
        }
        if(count>max)
        {
            max=count;
            c=str[i];
        }
    }
    printf("Maximum occuring character=%c",c);
    return 0;
}