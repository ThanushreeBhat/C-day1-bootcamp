#include<stdio.h>
void main()
{
    printf("Welcome to Calculator program\n");
    float a,b,res;
    int n;
    printf("Enter the operands\n");
    scanf("%f%f",&a,&b);
    printf("enter operator\n");
    scanf("%d",&n);
    switch(n){
        case 1 :res=a+b;
                printf("result=%.2f",res);
                break;
        case 2 :res=a-b;
                printf("result=%.2f",res);
                break;
        case 3 :res=a*b;
                printf("result=%.2f",a*b);
                break;
        case 4 :res=a/b;
                printf("result=%.2f",a/b);
                break;
    }
    
    
}