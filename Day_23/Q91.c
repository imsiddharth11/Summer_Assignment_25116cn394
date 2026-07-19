#include<stdio.h>
#include<string.h>
int main ()
{  
    char str1[100],str2[100];
    int i,j,len1,len2,count1,count2,flag=0;
    puts("Enter first string:") ;
    fgets(str1,sizeof(str1),stdin);
    puts("Enter second string:") ;
    fgets(str2,sizeof(str2),stdin);
    len1=strlen(str1);
    len2=strlen(str2);
    if(len1!=len2)
        flag=1;
    else
    {
        for(i=0;i<len1;i++)
        {
            count1=0,count2=0;
            for(j=0;j<len2;j++)
            {
                if(str1[i]==str1[j])
                    count1++;
                if(str1[i]==str2[j])
                    count2++;
            }
            if(count1!=count2)
                flag=1;
        }
    }
    if(flag==0)
        printf("Strings are anagram");
    else
        printf("Strings are not anagram");
    return 0;
}