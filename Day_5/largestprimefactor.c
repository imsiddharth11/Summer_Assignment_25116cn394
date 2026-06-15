#include<stdio.h> 
int main(){
    int n;
    printf("Enter the number\n");
    scanf("%d",&n);

    int i,rem,temp=n,largest;//it is important to define lagest here
    for(i=1;i<=n;i++){
        rem=temp%i;
        if(rem==0){
            int j,x,sum=0;
            for(j=1;j<=i;j++){
                x=i%j;
                if(x==0)
                sum=sum+1;
            }
            if(sum==2)
            largest=i;
        }        
    }
    printf("%d is the largest prime factor",largest);
    return 0;
}