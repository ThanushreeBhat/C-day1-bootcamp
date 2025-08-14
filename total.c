#include<stdio.h>
void main(){

   // int marks,sub1=100,sub2=98,sub3=96,sub4=98,sub5=99,sub6=100;
    
//     float percentage;
//    
//     }
//     percentage=(total/6);
//     printf("marks is %d\n",total);
//     printf("percentage= %.2f\n",percentage);
//     if(percentage>90){
//         printf("excellent\n");
//     }
//     else{
//         printf("Better luck next time\n");
//     }
// }
int total=0,marks[]={100,98,96,98,100};
int length= sizeof(marks)/sizeof(marks[0]);
 for(int i=0;i<length;i++){
      total=total+marks[i];

 }
 printf("%d",total);
}
