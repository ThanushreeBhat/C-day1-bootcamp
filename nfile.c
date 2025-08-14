#include<stdio.h>
int main(){
    int choice;
    char name[50];
    char USN[20];
    char Branch[10];
        FILE *fptr;
    do{
        printf("\n1.Add student\n2. Edit\n");
        printf("Enter your choice:");
        scanf("%d",&choice);
        if (choice==1){
            fptr=fopen("studentdetails.txt","w");
            if(fptr==NULL){
                printf("Error opening file");
                 return 1;
             }
             printf("Enter name:\n");
             scanf("%s",&name);
             printf("Enter USN\n");
             scanf(" %s ",&USN);
             printf("Enter Branch:\n");
             scanf(" %s ",&Branch);
            fprintf(fptr,"%s %s %s ",name,USN,Branch);
             fclose(fptr);
             printf("Student details added successfully\n");
            }
            else if (choice==2){
                printf("Invalid choice\n");                
            }
    }while(choice!=3);
    return 0;
    
    }
    
    
