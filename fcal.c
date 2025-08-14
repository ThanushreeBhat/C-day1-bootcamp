#include<stdio.h>
#include<stdbool.h>
int add(int x,int y);
int sub(int x,int y);
int mul(int x,int y);
float div(int x,int y);
void main(){
    char choice;
    int a, b;
    printf("enter operands");
    scanf("%d%d",&a,&b);
    while(true){

    }
}
int add(int x,int y){
    int res;
    res=x+y;
    return res;
}
int sub(int x,int y){
    int res;
    res=x+y;
    return res;
}
int mul(int x,int y){
    int res;
    res=x*y;
    return res;
}
float div(int x,int y){
    float res;
    res=x/y;
    return res;
}