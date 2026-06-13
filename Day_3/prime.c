#include<stdio.h>
int main(){
    int rem,f=0,i,n;
    printf("Enter the number\n");
    scanf("%d",&n);

    if(n==0){
        printf("Entered number is 0");
    }
    else{
    for(i=1;i<=n;i++){
        rem=n%i;
        if(rem==0){
        f=f+1;
        }
    }

    if(f==2){
        printf("Entered number is prime");
    }
    else if(f==1)
    printf("Entered number is 1");
    
    else
    printf("Entered number is NOT prime");
    }
    return 0;
}