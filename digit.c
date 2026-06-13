#include<stdio.h>
int main()
{
    int n,c=0;
    printf("enter the number\n");
    scanf("%d",&n);
    
    if(n==0){
        c=1;
    }
    else{
        while(n!=0){
            c++;
            n=n/10;
        }
    }
    printf("number of digit is %d\n",c);
    return 0;
    }
