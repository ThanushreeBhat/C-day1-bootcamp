#include<stdio.h>
void main(){
    int cart_value=3750;
    if (cart_value==5000){
        printf("discount=1000\n");
    }
    else if(cart_value>= 3500 && cart_value<5000){
        printf("discount=750\n");
    }
    else if(cart_value>=2500 && cart_value<3500){
        printf("discount=500\n");
    }
    else if (cart_value<2500){
        printf("discount=100\n");
    }
}