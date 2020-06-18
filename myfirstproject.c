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
void new_acc()
{
    int choice;
    FILE *ptr;
    ptr=fopen("record.dat","a+");
    account_no:
    system("cls");
    printf("\t\t\t==== ADD RECORD  ====");
    printf("\n\n\nEnter today's date(mm/dd/yyyy):");
    scanf("%d/%d/%d",&add.deposit.month,&add.deposit.day,&add.deposit.year);
     printf("\nEnter the account number:");
    scanf("%d",&check.acc_no);
    while(fscanf(ptr,"%d %s %d/%d/%d %d %s %s %lf %s %f %d/%d/%d\n",&add.acc_no,add.name,&add.dob.month,&add.dob.day,&add.dob.year,&add.age,add.address,add.citizenship,&add.phone,add.acc_type,&add.amt,&add.deposit.month,&add.deposit.day,&add.deposit.year)!=EOF)
    {
        if (check.acc_no==add.acc_no)
            {printf("Account no. already in use!");
            fordelay(1000000000);
                goto account_no;

            }
    }
    add.acc_no=check.acc_no;
    printf("\nEnter the name : ");
    scanf("%[^\n]%*c",add.name);
    printf("\nEnter the date of birth(mm/dd/yyyy):");
    scanf("%d/%d/%d ",&add.dob.month,&add.dob.day,&add.dob.year);
    printf("\nEnter the age:");
    scanf("%d",&add.age);
    printf("\nEnter the address:");
    scanf("%s",add.address);
    printf("\nEnter the citizenship number:");
    scanf("%s",add.citizenship);
    printf("\nEnter the phone number: ");
    scanf("%lf",&add.phone);
    printf("\nEnter the amount to deposit:$");
    scanf("%f",&add.amt);
    printf("\nType of account:\n\t#Saving\n\t#Current\n\t#Fixed1(for 1 year)\n\t#Fixed2(for 2 years)\n\t#Fixed3(for 3 years)\n\n\tEnter your choice:");
    scanf("%s",add.acc_type);

        fprintf(ptr,"%d %s %d/%d/%d %d %s %s %lf %s %f %d/%d/%d\n",add.acc_no,add.name,add.dob.month,add.dob.day,add.dob.year,add.age,add.address,add.citizenship,add.phone,add.acc_type,add.amt,add.deposit.month,add.deposit.day,add.deposit.year);

    fclose(ptr);
    printf("\nAccount created successfully!!!!!!!");
    add_invalid:
    printf("\nEnter 1 to go to main menu or 0 to exit");
    scanf("%d",choice);
    if(choice==1)
    {
        system("cls");
        menu();
    }
    else if(choice==0)
    {
        close();
    }
    else{
        printf("\nInvalid number entered!!!");
        goto add_invalid;
    }
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
    scanf("%d",&choice);
    system("cls");
    switch(choice)
    {
        case 1: new_acc();
        break;
    }
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
