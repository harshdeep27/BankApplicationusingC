#include <stdio.h>
#include <stdlib.h>
#include<stdio.h>
#include<string.h>

struct customer
{
    char firstName[15];
    char lastName[15];
    char mobile[11];
    char emailid[26];
    char password[10];
    char rePassword[10];
    char teachername[15];
    char book[15];
    float acc_bal;
    float Annual_Income;
}cus;
void logoutpage1(struct customer);
void logoutpage1(struct customer cus)
{
    int a;
    change(cus);
    system("cls");
    printf("Logged out successfully\n");
    printf("Press 1 to go to home page\n");
    scanf("%d",&a);
    if(a==1)

    {
        system("cls");
        main();
    }
    else
    {
        system("cls");
        fflush(stdin);
        login();
    }
}
void change(struct customer);
void change(struct customer cus)
{
    int a;
    FILE *fp2,*fp1;
    fp1=fopen("C:/TurboC3/TurboC3/BIN/project/test1.txt","r");
    fp2=fopen("C:/TurboC3/TurboC3/BIN/project/test2.txt","w");
    struct customer cus1;
    while((fread(&cus1,sizeof(cus1),1,fp1))==1)
    {
        if(strcmp(cus1.mobile,cus.mobile)!=0)
        {
            fwrite(&cus1,sizeof(cus1),1,fp2);
        }
        else
        {
            fwrite(&cus,sizeof(cus),1,fp2);
        }
    }
    fclose(fp1);
    fclose(fp2);
    fp1=fopen("C:/TurboC3/TurboC3/BIN/project/test1.txt","w");
    fp2=fopen("C:/TurboC3/TurboC3/BIN/project/test2.txt","r");
    {
         while((fread(&cus1,sizeof(cus1),1,fp2))==1)
         {
             fwrite(&cus1,sizeof(cus1),1,fp1);
         }
    }
     fclose(fp1);
    fclose(fp2);

}

void delete_aac(struct customer);
void delete_acc(struct customer cus)
{
    int a,b;
    FILE *fp2;
    FILE *fp1;
    fp1 = fopen("C:/TurboC3/TurboC3/BIN/project/test1.txt","r");
    fp2 = fopen("C:/TurboC3/TurboC3/BIN/project/test2.txt","w");
    struct customer cus1;
    while((fread(&cus1,sizeof(cus1),1,fp1))==1)
    {
        if(strcmp(cus1.mobile,cus.mobile)!=0)
        {
            fwrite(&cus1,sizeof(cus1),1,fp2);
        }
    }
    fclose(fp1);
    fclose(fp2);
     fp1 = fopen("C:/TurboC3/TurboC3/BIN/project/test1.txt","w");
    fp2 = fopen("C:/TurboC3/TurboC3/BIN/project/test2.txt","r");
    {
         while((fread(&cus1,sizeof(cus1),1,fp2))==1)
         {
             fwrite(&cus1,sizeof(cus1),1,fp1);
         }
    }
     fclose(fp1);
    fclose(fp2);

        return;
}
void option(struct customer);
void option(struct customer cus)
{
    struct customer cus1;
    int opt,a;
    FILE *fp1,*fp2;
            system("cls");
                        printf("1. Firstname: %s\n",cus.firstName);
                        printf("2. Lastname: %s\n",cus.lastName);
                        printf("3. Email id: %s\n4. Annual income: %f\n",cus.emailid,cus.Annual_Income);
                        printf("5. To go back to Your account\n6. To Log out\n");
        printf("Enter the choice to be editted");
        scanf("%d",&opt);


        if(opt==1)
        {
            system("cls");
            memset(cus.firstName,0,sizeof(cus.firstName));
            printf("Enter Firstname: ");
            scanf("%s",cus.firstName);
            option(cus);
        }
         else if(opt==2)
        {
            system("cls");
            memset(cus.lastName,0,sizeof(cus.lastName));
            printf("Enter Lastname: ");
            scanf("%s",cus.lastName);
            option(cus);
        }

         else if(opt==3)
        {
            system("cls");
            memset(cus.emailid,0,sizeof(cus.emailid));
            printf("Enter emailid: ");
            scanf("%s",cus.emailid);
            option(cus);
        }

       else if(opt==4)
       {
            system("cls");
            printf("Enter Annual income: ");
            scanf("%f",&cus.Annual_Income);
            option(cus);
       }
       else if(opt==5)
       {
           system("cls");
         fp1 = fopen("C:/TurboC3/TurboC3/BIN/project/test1.txt","r");
         fp2= fopen("C:/TurboC3/TurboC3/BIN/project/test2.txt","w");
         rewind(fp1);
         while((fread(&cus1,sizeof(cus),1,fp1)==1))
         {
             a=strcmp(cus1.mobile,cus.mobile);
             if(a==0)
             {
                    fwrite(&cus,sizeof(cus),1,fp2);
             }

             else
             {
                    fwrite(&cus1,sizeof(cus1),1,fp2);
             }

        }
        fclose(fp1);
        fclose(fp2);
        fp1 = fopen("C:/TurboC3/TurboC3/BIN/project/test1.txt","w");
        fp2= fopen("C:/TurboC3/TurboC3/BIN/project/test2.txt","r");
        while((fread(&cus1,sizeof(cus1),1,fp2)==1))
        {
            fwrite(&cus1,sizeof(cus1),1,fp1);
        }
        fclose(fp1);
        fclose(fp2);
        loginpage(cus);

}
else if(opt==6)
{
    logoutpage1(cus);
}
else
{
    system("cls");
    option(cus);
}
}
void changepassword(struct customer);
void changepassword(struct customer cus)
{
    int a;
    struct customer cus1;
    FILE *fp1,*fp2;
    char password1[15];
    system("cls");
    printf("Enter your old password:");
    scanf("%s",password1);
    if(strcmp(password1,cus.password)==0)
    {
        memset(cus.password,0,sizeof(cus.password));
        memset(cus.rePassword,0,sizeof(cus.rePassword));
        printf("New password:");
        scanf("%s",cus.password);
        printf("Re-enter New Password:");
        scanf("%s",cus.rePassword);
    }
    else{
        system("cls");
        fflush(stdin);
        login();

    }
     fp1 = fopen("C:/TurboC3/TurboC3/BIN/project/test1.txt","r");
         fp2= fopen("C:/TurboC3/TurboC3/BIN/project/test2.txt","w");
        rewind(fp1);
        while((fread(&cus1,sizeof(cus1),1,fp1)==1))
        {
            a=strcmp(cus1.mobile,cus.mobile);
             if(a==0)
             {
                        if(strcmp(cus.password,cus.rePassword)==0)
                            {
                                fwrite(&cus,sizeof(cus),1,fp2);
                            }


             }
             else
             {
                 fwrite(&cus1,sizeof(cus1),1,fp2);
             }

        }
        fclose(fp1);
        fclose(fp2);
        fp1 = fopen("C:/TurboC3/TurboC3/BIN/project/test1.txt","w");
        fp2= fopen("C:/TurboC3/TurboC3/BIN/project/test2.txt","r");
        while((fread(&cus1,sizeof(cus1),1,fp2)==1))
        {
            fwrite(&cus1,sizeof(cus),1,fp1);
        }
        fclose(fp1);
        fclose(fp2);
        system("cls");
        printf("password successfully changes\npress 1 to go to your account\npress ant other key to log out\n");
        scanf("%d",&a);
        if(a==1)
        {
            system("cls");
            loginpage(cus);
        }
        else
        {
            system("cls");
            logoutpage1(cus);
        }

}
void loginpage(struct customer cus);
void loginpage(struct customer cus)
{
    struct customer cus1;
     int opt,a,b=0;
     char transfer_Act[11];
     float credit,withdraw,Transfer_Amt;
     printf("\n\t\t\tWELCOME to your ACCOUNT\n");
     printf("Mobile no. = %s\nName = %s %s\nEmail id = %s\n\n\n\tAnnual income = %f",cus.mobile,cus.firstName,cus.lastName,cus.emailid,cus.Annual_Income);
     printf("\nSelect an option");
     printf("\n1. Check Account Balance.");
     printf("\n2. Credit Money");
     printf("\n3. Withdraw Money");
     printf("\n4. Delete My Account");
     printf("\n5. Transfer Money From one account to another");
     printf("\n6. Edit details");
     printf("\n7. Change password");
     printf("\n8. Loan\n");
     printf("9. Log out\n");
     scanf("%d",&opt);
     system("cls");
     if(opt==1)
     {
          printf("\nYour Account Balance is: %f ",cus.acc_bal);
          printf("\n\n\nSelect an option");
          printf("\n1. Log Out");
          printf("\n2. Go Back to Account Page\n");
          scanf("%d",&opt);
          system("cls");
          if(opt==1)
          {
                system("cls");
                logoutpage1(cus);
          }
          if(opt==2)
          {
                system("cls");
                loginpage(cus);
          }
     }
     if(opt==2)
     {
       printf("\nAmount of Money to be credited:\n");
       scanf("%f",&credit);
       cus.acc_bal=cus.acc_bal+credit;
       system("cls");
          printf("\nYour final BALANCE is:%f",cus.acc_bal);
           change(cus);
          printf("\n\n\nSelect an option");
          printf("\n1. Log Out");
          printf("\n2. Go Back to Account Page\n");
          scanf("%d",&opt);
          system("cls");
          if(opt==1)
          {
              logoutpage1(cus);
          }
          if(opt==2)
          {
              loginpage(cus);
          }
     }
     if(opt==3)
     {
            printf("\nAmount of Money to be withdrawn:\n");
            scanf("%f",&withdraw);

            if(cus.acc_bal>withdraw)
            {
                cus.acc_bal=cus.acc_bal-withdraw;
                system("cls");
                printf("\nYour final BALANCE is: %f",cus.acc_bal);
                 change(cus);
                printf("\n\n\nSelect an option");
                printf("\n1. Log Out");
                printf("\n2. Go Back to Account Page\n");
                scanf("%d",&opt);
                fflush(stdin);
                system("cls");
                if(opt==1)
                {
                    logoutpage1(cus);
                }
                if(opt==2)
                {
                    loginpage(cus);
                }
            }
            else
            {
                system("cls");
                printf("Insufficient Balance");
                printf("\n\n\nSelect an option");
                printf("\n1. Log Out");
                printf("\n2. Go Back to Account Page\n");
                scanf("%d",&opt);
                system("cls");
                if(opt==1)
                {
                     logoutpage1(cus);
                }
                if(opt==2)
                {
                     loginpage(cus);
                }
            }

        }
     if(opt==4)
     {
         delete_acc(cus);
         system("cls");
         printf("\nYour Account has been deleted.");
     }
      if(opt==5)
      {
          FILE *fp3;

          printf("\nEnter the Account Number to which you want the Money to be transfered:\n");
          scanf("%s",transfer_Act);

          fp3=fopen("C:/TurboC3/TurboC3/BIN/project/test1.txt","r");
          while((fread(&cus1,sizeof(cus1),1,fp3))==1)
           {
              if(strcmp(cus1.mobile,transfer_Act)==0)
              {
                b=1;
              }
          }
          if(b!=1)
          {
              system("cls");
                  printf("Account doesn't exists\nPress 1 to go back to your account");

                  scanf("%d",&a);
                  if(a==1)
                  {
                      system("cls");
                      loginpage(cus);
                  }
           }
           fclose(fp3);

          printf("Amount of Money to be transfered:\n");
          scanf("%f",&Transfer_Amt);
          if(cus.acc_bal>Transfer_Amt)
          {
          FILE *fp2,*fp1;
    fp1=fopen("C:/TurboC3/TurboC3/BIN/project/test1.txt","r");
    fp2=fopen("C:/TurboC3/TurboC3/BIN/project/test2.txt","w");
    struct customer cus1;
    while((fread(&cus1,sizeof(cus1),1,fp1))==1)
    {
        if(strcmp(cus1.mobile,transfer_Act)==0)
        {
            cus1.acc_bal=cus1.acc_bal+Transfer_Amt;
            fwrite(&cus1,sizeof(cus1),1,fp2);
        }
        else
        {
            fwrite(&cus1,sizeof(cus1),1,fp2);
        }
    }
    fclose(fp1);
    fclose(fp2);
    fp1=fopen("C:/TurboC3/TurboC3/BIN/project/test1.txt","w");
    fp2=fopen("C:/TurboC3/TurboC3/BIN/project/test2.txt","r");
    {
         while((fread(&cus1,sizeof(cus1),1,fp2))==1)
         {
             fwrite(&cus1,sizeof(cus1),1,fp1);
         }
    }
     fclose(fp1);
    fclose(fp2);


            if(cus.acc_bal>Transfer_Amt)
            {
                cus.acc_bal=cus.acc_bal-Transfer_Amt;

                system("cls");
                printf("\nAmmount Has Been Transfered to %d",transfer_Act);
                printf("\nYour final BALANCE is: %f",cus.acc_bal);
                 change(cus);
                printf("\n\n\nSelect an option");
                printf("\n1. Log Out");
                printf("\n2. Go Back to Account Page\n");
                scanf("%d",&opt);
                system("cls");
        if(opt==1)
        {

             logoutpage1(cus);
        }
        if(opt==2)
        {
             loginpage(cus);
        }
            }
          }
            else
            {
                system("cls");
                printf("Insufficient Balance");
                printf("\n\n\nSelect an option");
                printf("\n1. Log Out");
                printf("\n2. Go Back to Account Page\n");
                scanf("%d",&opt);
                system("cls");
                if(opt==1)
                {
                     logoutpage1(cus);
                }
                if(opt==2)
                {
                   loginpage(cus);
                }
            }
      }
      if(opt==6)
      {
           option(cus);

      }
      if(opt==7)
      {

          changepassword(cus);
      }
      else if(opt==8)
      {
          loanpage(cus);
      }
      else if(opt==9)
      {
          system("cls");
          logoutpage1(cus);
      }
      else
      {
          loginpage(cus);
      }
return;
}


char mobile[11],password[10];
int loginChoice, logchoice;
void checklogin();
void login()
{

    printf("\t\tLog in - our Bank\n");
    printf("\nMobile     :");
    gets(mobile);
    fflush(stdin);


    printf("Password   :");
    gets(password);
    fflush(stdin);

    checklogin();
}
void checklogin()
{
    int a,b,c=0,d;
    char teachername[15],book[15];
    FILE *fp1,*fp2;
    printf("\n1. Log in\n2. Want to edit\n3.Forgot password\n\nEnter your choice\n");
    scanf("%d",&loginChoice);
    fflush(stdin);

    if(loginChoice==1)
    {
          system("cls");
        fp1 = fopen("C:/TurboC3/TurboC3/BIN/project/test1.txt","r");
        rewind(fp1);
        while((fread(&cus,sizeof(cus),1,fp1)==1))
        {
             a=strcmp(cus.mobile,mobile);
             if(a==0)
             {
                b=strcmp(cus.password,password);
                if(b==0)
                {
                    printf("You are successfully logged in\n");

                    loginpage(cus);
                    c=1;
                    break;
                }
                else if((a==0)&&(b!=0))
                {
                    c=1;
                    printf("\tWrong password");
                    printf("\npress 1 to edit\npress 2 if you forgot your password\n");
                    scanf("%d",&d);
                    if(d==1)
                    {
                          system("cls");
                          checklogin();
                    }
                    else if(d==2)
                    {
                        fclose(fp1);
                        system("cls");
                        printf("\nWho is your fav teacher\n");
        scanf("%s",teachername);
        printf("What is your favaurate book\n");
        scanf("%s",book);
         fp1 = fopen("C:/TurboC3/TurboC3/BIN/project/test1.txt","r");
         fp2= fopen("C:/TurboC3/TurboC3/BIN/project/test2.txt","w");
        rewind(fp1);
        while((fread(&cus,sizeof(cus),1,fp1)==1))
        {
            a=strcmp(cus.mobile,mobile);
             if(a==0)
             {
                 if((strcmp(teachername,cus.teachername)==0)&&(strcmp(book,cus.book)==0))
                    {
                        memset(cus.password,0,sizeof(cus.password));
                        memset(cus.rePassword,0,sizeof(cus.rePassword));
                        system("cls");
                        printf("Enter the new password:");
                        scanf("%s",cus.password);
                        printf("Reenter the password:");
                        scanf("%s",cus.rePassword);
                        if(strcmp(cus.password,cus.rePassword)==0)
                            {
                                fwrite(&cus,sizeof(cus),1,fp2);
                            }

                    }
             }
             else
             {
                 fwrite(&cus,sizeof(cus),1,fp2);
             }

        }
        fclose(fp1);
        fclose(fp2);
        fp1 = fopen("C:/TurboC3/TurboC3/BIN/project/test1.txt","w");
        fp2= fopen("C:/TurboC3/TurboC3/BIN/project/test2.txt","r");
        while((fread(&cus,sizeof(cus),1,fp2)==1))
        {
            fwrite(&cus,sizeof(cus),1,fp1);
        }
        fclose(fp1);
        fclose(fp2);
        printf("\nPassword changes\nPress 1 to go to login page\n");
        scanf("%d",&d);
        if(d==1)
        {
            system("cls");
            fflush(stdin);
            login();
        }

                    }
                }
            }
        }
        fclose(fp1);
        if(c==0)
        {
            printf("Account doesn't exists\n Press 1 to continue\n");
            scanf("%d",&c);
            if(c==1)
            {
                system("cls");
                c=0;
                main();
            }
            else
            {
                login();
            }
        }
    }
    else if(loginChoice==2)
    {
        system("cls");
        printf("1. Mobile     :%s\n2. Password   :%s\n",mobile,password);
        printf("\nEnter your Choice\n");
        scanf("%d",&logchoice);
        fflush(stdin);

        if(logchoice==1)
        {
            system("cls");
            printf("\nMobile     :");
            gets(mobile);
            fflush(stdin);

            printf("Password   :%s\n",password);
            checklogin();
        }
        else if(logchoice==2)
        {
            system("cls");
            printf("Mobile     :%s\n",mobile);
            printf("Password   :");
            gets(password);
            fflush(stdin);
            checklogin();
        }
        else
        {
            system("cls");
            login();
        }
    }
    else if(loginChoice==3)
        {
            system("cls");
                        printf("\nWho is your fav teacher\n");
        scanf("%s",teachername);
        printf("What is your favaurate book\n");
        scanf("%s",book);
         fp1 = fopen("C:/TurboC3/TurboC3/BIN/project/test1.txt","r");
         fp2= fopen("C:/TurboC3/TurboC3/BIN/project/test2.txt","w");
        rewind(fp1);
        while((fread(&cus,sizeof(cus),1,fp1)==1))
        {
            a=strcmp(cus.mobile,mobile);
             if(a==0)
             {
                 if((strcmp(teachername,cus.teachername)==0)&&(strcmp(book,cus.book)==0))
                    {
                        memset(cus.password,0,sizeof(cus.password));
                        memset(cus.rePassword,0,sizeof(cus.rePassword));
                        system("cls");
                        printf("Enter the new password:");
                        scanf("%s",cus.password);
                        printf("Reenter the password:");
                        scanf("%s",cus.rePassword);
                        if(strcmp(cus.password,cus.rePassword)==0)
                            {
                                fwrite(&cus,sizeof(cus),1,fp2);
                            }

                    }
             }
             else
             {
                 fwrite(&cus,sizeof(cus),1,fp2);
             }

        }
        fclose(fp1);
        fclose(fp2);
        fp1 = fopen("C:/TurboC3/TurboC3/BIN/project/test1.txt","w");
        fp2= fopen("C:/TurboC3/TurboC3/BIN/project/test2.txt","r");
        while((fread(&cus,sizeof(cus),1,fp2)==1))
        {
            fwrite(&cus,sizeof(cus),1,fp1);
        }
        fclose(fp1);
        fclose(fp2);
        printf("Password changes\nPress 1 to go to login page\n");
        scanf("%d",&d);
        if(d==1)
        {
            system("cls");
            fflush(stdin);
            login();
        }
    }
else
  {
      system("cls");
      login();
  }
}
int signinChoice,signchoice;
char firstName[15],lastName[15],mobile[11],emailid[26],password[10],rePassword[10];
void editsignin();
void choicecheck();
void signin()
{
    system("cls");
    FILE *fp1;
    printf("\t\tSign Up- our Bank\n\n\n");
    memset(&cus,0,sizeof(cus));
    printf("First Name    :");
    scanf("%s",cus.firstName);
    fflush(stdin);
    printf("Last Name     :");
    scanf("%s",cus.lastName);
    fflush(stdin);

    printf("Mobile        :");
    scanf("%s",cus.mobile);
    fflush(stdin);

    printf("Email id      :");
    scanf("%s",cus.emailid);
    fflush(stdin);

    printf("Password      :");
    scanf("%s",cus.password);
    fflush(stdin);


    printf("Re-password   :");
    scanf("%s",cus.rePassword);
    fflush(stdin);

    printf("Annual Income   :");
    scanf("%f",&cus.Annual_Income);
    fflush(stdin);


    cus.acc_bal=500.00;

    editsignin();
}
void editsignin()
{
    FILE *fp1;
    printf("\n\n1. Want to edit...\n");
    printf("2. Sign UP\n");
    printf("Enter your choice\n");
    scanf("%d",&signchoice);
    fflush(stdin);

    if(signchoice==2)
    {
      choicecheck();
    }
    else if(signchoice==1)
    {
        system("cls");
         printf("1. First Name    :%s\n2. Last Name     :%s\n3. Mobile        :%s\n4. Email id      :%s\n5. Password      :%s\n6. Re-password   :%s\n",cus.firstName,cus.lastName,cus.mobile,cus.emailid,cus.password,cus.rePassword);
         printf("Enter choice to be edited\n");
        scanf("%d",&signinChoice);
        fflush(stdin);
        system("cls");
        if(signinChoice==1)
    {
        system("cls");
         printf("\nFirst Name    :");
         gets(cus.firstName);
         fflush(stdin);

         printf("Last Name     :%s\nMobile        :%s\nEmail id      :%s\nPassword      :%s\nRe-password   :%s\n",cus.lastName,cus.mobile,cus.emailid,cus.password,cus.rePassword);
         editsignin();
    }
    else if(signinChoice==2)
    {
        system("cls");

        printf("First Name    :%s\n",cus.firstName);
        printf("Last Name     :");
        gets(cus.lastName);
        fflush(stdin);

        printf("Mobile        :%s\nEmail id      :%s\nPassword      :%s\nRe-password   :%s\n",cus.mobile,cus.emailid,cus.password,cus.rePassword);
        editsignin();

    }
    else if(signinChoice==3)
    {
        system("cls");
        printf("First Name    :%s\nLast Name     :%s\n",cus.firstName,cus.lastName);
        printf("Mobile        :");
        gets(cus.mobile);
        fflush(stdin);

        printf("Email id      :%s\nPassword      :%s\nRe-password   :%s\n",cus.emailid,cus.password,cus.rePassword);
        editsignin();

    }
    else if(signinChoice==4)
    {
        system("cls");
        printf("First Name    :%s\nLast Name     :%s\nMobile        :%s\n",cus.firstName,cus.lastName,cus.mobile);
        printf("Email id      :");
        gets(cus.emailid);
        fflush(stdin);

        printf("Password      :%s\nRe-password   :%s\n",cus.password,cus.rePassword);
        editsignin();
    }
    else if(signinChoice==5)
    {
        system("cls");
        printf("First Name    :%s\nLast Name     :%s\nMobile        :%s\nEmail id      :%s\n",cus.firstName,cus.lastName,cus.mobile,cus.emailid);
        printf("Password      :");
        gets(cus.password);
        fflush(stdin);

        printf("Re-password   :%s\n",cus.rePassword);
        editsignin();
    }
    else if(signinChoice==6)
    {
        system("cls");
        printf("First Name    :%s\nLast Name     :%s\nMobile        :%s\nEmail id      :%s\nPassword      :%s\n",cus.firstName,cus.lastName,cus.mobile,cus.emailid,cus.password);
        printf("Re-password      :");
        gets(cus.rePassword);
        fflush(stdin);

        editsignin();
    }
    else
    {
        system("cls");
        editsignin();
    }


}
else
    {
     system("cls");
     editsignin();
    }
}
void choicecheck()
{
    int a;
    if(strcmp(cus.password,cus.rePassword)!=0)
    {
          system("cls");
        printf("Passwords don't match");
        editsignin();
    }
    FILE *fp1;
    struct customer cus2;
    system("cls");
    fp1 = fopen("C:/TurboC3/TurboC3/BIN/project/test1.txt","r");
        rewind(fp1);
        while((fread(&cus2,sizeof(cus2),1,fp1)==1))
        {
            a=strcmp(cus2.mobile,cus.mobile);
            if(a==0)
            {
                  system("cls");
                printf("Account already exists\n");
                editsignin();
            }

        }
    fclose(fp1);




        printf("\t\tAccount Successfully Made\n\n");
        printf("Please give answer for these questions for security\n\nWho was your favourate teacher\n");
        scanf("%s",cus.teachername);
        printf("What is your favourate book\n");
        scanf("%s",cus.book);

    fp1 = fopen("C:/TurboC3/TurboC3/BIN/project/test1.txt","a");
    fwrite(&cus,sizeof(cus),1,fp1);
    fclose(fp1);

        printf("1. Home\n");
        printf("2. Log in\n");
        printf("Enter your choice\n");
        scanf("%d",&signinChoice);
        fflush(stdin);

        if(signinChoice==1)
        {
            system("cls");
            main();
        }
        else if(signinChoice==2)
        {
             system("cls");
           login();
        }
        else
        {
            system("cls");
            printf("Wrong choice\nAccount successfully made\nEnter any character to continue\n");
            scanf("%d",signinChoice);
            system("cls");
            login();
        }
}

void welcomechoice()
{
     FILE *fp1;
     int welcomeChoice;
     printf("Enter your choice\n");
     scanf("%d",&welcomeChoice);
     fflush(stdin);

    switch(welcomeChoice)
    {
    case 1:
        system("cls");
       signin();
        break;
    case 2:
        system("cls");
        login();
        break;
    case 3:
        system("cls");
        //aboutus();
        break;
    case 4:
        system("cls");
        //contactus();
        break;
    case 5:
        system("cls");
        //help();
        break;
    default:
        system("cls");
        welcomechoice();

    }


}

int main()
{
    printf("\t \t Welcome to our Bank \n1. Sign in \n2. log in\n3. about us\n4. contact us\n5. help\n");
    welcomechoice();
      return 0;
}
#include<stdio.h>
void loanpage(struct customer cus_loan);
void loanpage(struct customer cus_loan)
{
    int i,j,opt;
    char ch='%';
    float loan,type_1[12],minimum_loan,interest,minimum_years;
    printf("\n\tThe Reason for Opting Loan..\n\n\n\t1. Marriage of Son or Daughter or Anyone of the Family.\n\t2. For Constructing a HOUSE.\n\t3. For a Death Ceromony.\n\t4. For Buying Household Things.\n\t5. Any other Reason.\n\n\n\tSELECT AN OPTION");
    scanf("%d",&opt);
    if(opt==1)
    {
       minimum_loan=(cus.Annual_Income)/3;
    }
    if(opt==2)
    {
       minimum_loan=(cus.Annual_Income)/2;
    }
    if(opt==3)
    {
       minimum_loan=(cus.Annual_Income)/3;
    }
    if((opt==4)||(opt==5))
    {
       minimum_loan=(cus.Annual_Income)/4;
    }
    printf("\n\n\n\t\tEnter Amount of loan\t");
    scanf("%f",&loan);
    minimum_years=loan/minimum_loan;
    printf("\n\tMinimum Years %f",minimum_years);
    printf("\n\tEnter the number of years Fror which you want the Loan..");
    if(minimum_years<20)
    {
        printf("\n\tMinimum number of Years to pay the loan is %f Years",&minimum_years);
        printf("\n\tSelect the number of Years Less than 20 years\t");
        scanf("%d",&i);
        system("cls");
        interest=(20-i)/100.00;
        printf("\n\t The Interest on the LOAN Would Be.. %f",interest*100);
        if(i>=minimum_years)
        {
            for(j=0;j<i;j++)
            {
                type_1[j]=minimum_loan+(loan*interest);
                printf("\n\n\tAT the End of %d Years You will Have to Pay rs.%f Only...",j+1,type_1[j]);
                loan=loan-minimum_loan;
            }
        }
    }
    else
    {
        printf("\n\tWe give Away the loan minimum for 20 years...\n\tBut you have opted the Amount You can't payback in 20 Years..\n\tPress 1 to Restart the process..and 2 to Logout");
        scanf("%d",&opt);
        if(opt==1)
        {
            loanpage(cus_loan);
        }
        else
        {
            logoutpage1(cus_loan);
        }
    }

    return;
}



