#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include<stdbool.h>
int i,j;
int main_exit;
void menu();
int atm();
void close();
struct date{
    int month,day,year;

    };
struct {

    char name[60];
    int acc_no,age;
    char address[60];
    char citizenship[15];
    double phone;
    char acc_type[10];
    float amt;
    struct date dob;
    struct date deposit;
    struct date withdraw;

    }add,upd,check,rem,transaction;
void fordelay(int j)
{   int i,k;
    for(i=0;i<j;i++);
}
void menu()
{
    int choice;
    printf("\n");
    system("cls");
    system("color 6");
    printf("\n\n\t\t\t       BANKING MANAGEMENT SYSTEM");
    printf("\n\n\n\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 WELCOME TO THE MAIN MENU \xB2\xB2\xB2\xB2\xB2\xB2\xB2");
    printf("\n\n\t\t[1] Create a new account\n\t\t[2] Update information of existing account\n\t\t[3] Transactions\n\t\t[4] Check the details of existing account\n\t\t[5] Remove existing account\n\t\t[6] View customer's list\n\t\t[7] ATM Feature\n\t\t[8] Exit\n\n\n\t\t Enter your choice:");

}
int main()
{
    char pass[10],password[10]="password";
    int i=0;
    printf("\n\n\n\t\t\t\t   Bank Management System\n\t\t\t\t\t User Login ");
    printf("\n\n\n\n\n\t\t\t\tEnter the password to login:");
    scanf("%s",pass);
    if(strcmp(pass,password)==0)
    {
        printf("\n\nPassword Matched!!\n\nLoading");
        for(i=0;i<6;i++)
        {
            fordelay(100000000);
            printf(". ");
        }
        printf("\n");
        system("pause");
        system("cls");
        menu();
    }
    else{
        printf("\n\nWrong Password!!!\a\a\a");
        login_try:
        printf("\n\nEnter 1 to try again or 0 to exit : ");
        int a;
        scanf("%d",&a);
        if(a==1)
        {
            system("cls");
            main();
        }
        else if(a==0)
        {
            system("cls");
        }
        else{
            printf("\nEnter valid number!!!!\n");
            goto login_try;
        }
    }

    return 0;
}
