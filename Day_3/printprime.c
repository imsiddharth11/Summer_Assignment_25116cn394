#include<stdio.h>
int main(){
    int x,y,rem,f=0,i,n;
    printf("Enter the starting number for range\n");
    scanf("%d",&x);

    printf("Enter the last number for range\n");
    scanf("%d",&y);  

    printf("The prime number in this range are\n");

    for(n=x;n<=y;n++){

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
      printf("%d\n",n);
    }
   
    }
    f=0;
    }
    return 0;
}