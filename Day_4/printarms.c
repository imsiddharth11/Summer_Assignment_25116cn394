#include<stdio.h>
int main()
{
    int n,f,l;

    printf("Enter the first number in  the range\n");
    scanf("%d",&f);
    printf("Enter the last number in  the range\n");
    scanf("%d",&l);

    for(n=f;n<=l;n++){
        int temp=n,c=0;       
        if(temp==0){
        printf("%d\t",n);
        }
        else{
            while(temp!=0){
            c++; //number of digit in n
            temp=temp/10;
            }
    
            temp=n;
            int rem,pow=1,sum=0,i;

            while(temp!=0){
            rem=temp%10;
            pow=1;
                for(i=1;i<=c;i++){
                pow=pow*rem;
                }
            temp=temp/10;
            sum=sum+pow;
            }
    
            if(sum==n)
            printf("%d\t",n);            
        }
    }
    return 0;
}