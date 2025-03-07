#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n,num;
    printf("Enter a number\n");
    scanf("%d",&num);
    n=num;

    int r,result=0;
    while(n!=0){
        r=n%10;
        result = result+(r*r*r);
        n=n/10;
    }
    if(result == num){
        printf("It is an armstrong number");
    }
    else{
        printf("It is not an armstrong number");
    }
}

