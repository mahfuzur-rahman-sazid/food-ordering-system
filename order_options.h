
 void readytoorder(void)  //WHAT TO ORDER
 {
    system("cls");
    printf("\t|===============================================|\n");
    printf("\t|\tWHAT WOULD YOU LIKE TO GET?\t\t|\n\t|\n");
    printf("\t| 1.Meal    \t\t\t\t\t|\n");
    printf("\t| 2.Drinks and Snacks.  \t\t\t|\n");
    printf("\t| 3.All Orders.  \t\t\t\t|\n");
    printf("\t| 4.Back to Main Menu.  \t\t\t|\n");
    printf("\t|===============================================|\n");

    int CHOICE;
    printf("\n\n\t <<..Enter your choice..>> \n");   //USED CONDITIONS
    scanf("%d",&CHOICE);

    if (CHOICE==1)
    {
        system("cls");
        meal();

    }
    else if (CHOICE==2)
    {
        system("cls");
       snacks_drinks();
    }
    else if (CHOICE==3)
    {   system("cls");

        FILE*all_orders;                   //FILE AND POINTERS
        char a;
        all_orders=fopen("order.txt","r");
        while((a=fgetc(all_orders))!=EOF)
        {
            printf("%c",a);
        }
        if(getch())
        readytoorder();
    }
    else if(CHOICE==4)
    {
        system("cls");
        mainmenu();
    }
    else
    {
        printf("\t\tERROR!CHOOSE FROM THE OPTIONS ABOVE\n\n");
        readytoorder();
    }
 }
