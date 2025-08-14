#include<stdio.h>
int main(){
    FILE *fptr;

    fptr=fopen("student.txt","w");
    if(fptr== NULL){
        printf("Error opening file");
        return 1;
    }
    fprintf(fptr,"Thanushree Bhat K G\n");
    fprintf(fptr,"Mallika\n");
    fclose(fptr);
    printf("File written\n");
}