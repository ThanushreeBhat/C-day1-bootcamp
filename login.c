#include<stdio.h>
#include<string.h>
void main()
{
    char username[100 ];
    char password[100];
    printf("Enter the username\n");
    scanf("%s",&username);
    printf("Enter the password\n");
    scanf("%s",&password);
    printf("Username:%s\n",username);
    printf("Password:%s\n",password);
    if((strcmp(username,"admin")==0) && (strcmp(password,"password")==0)){
        printf("Login successful\n");
        }
    else{
        printf("Login failed\n");
    }
}