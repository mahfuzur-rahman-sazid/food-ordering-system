#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include "splash.h"
#include "login.h"
#include "order_options.h"
#include "foodmenu.h"
#include "customer_details.h"

void mainmenu(void);



int main()   //FUNCTION CALLING
{   Splash_Screen();
    sleep(5);

  int m,n,l;                      //LOOP AND NESTED LOOP
    printf("LETS START");
    for ( m = 0 ; m <=10 ; m++)
    {   for (n=0;n<300000000;n++)
           l=n;
        printf(".");
    }


    system("cls");

    log_in();


    mainmenu();
    return 0;
}



void mainmenu(void) //HOMEPAGE OF THE SYSTEM
{
    system("cls");
    printf("\t|===============================================|\n");
    printf("\t|\tWELCOME! TO OUR FOOD ORDERING SYSTEM\t|\n\t|\n");
    printf("\t| 1.HUnGRy! WANT TO ORDER FOOD.  \t\t|\n");
    printf("\t| 2.NOT HUnGRy! EXIT.  \t\t\t\t|\n");
    printf("\t|===============================================|\n");

    int CHOICE;
    printf("\n\n\t <<..Enter your choice..>> \n");    //USED CONDITIONS FOR CHOOSING OPTION
    scanf("%d",&CHOICE);
    if (CHOICE==1)
    {
         readytoorder();
     }
    else if (CHOICE==2)
    {   system("cls");
        printf("\t|===============================================|\n");
        printf("\t|\t\tTHANK YOU!!\t\t\t|\n");
        printf("\t|\tHUnGRy? grab something to eat!!\t\t|\n");
        printf("\t|===============================================|\n");
    }
}



