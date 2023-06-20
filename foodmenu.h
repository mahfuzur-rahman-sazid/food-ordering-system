
 void meal(void)     //MEAL OPTIONS
 {
     int choice,again,quantity; //DECLARING VARIABLES
     double total=0;
     printf("\t|===============================================================|\n");
     printf("\t|\tMEAL MENU!!.....\t\t\t\t\t|\n\t|\n");
     printf("\t|===============================================================|\n");
     printf("\t|\tMEAL AVAILABLE FOR YOU TO ENJOY--->       \t\t|\n\t|\n");
     printf("\t| 1.FRIED RICE WITH CHICKEN AND WATER 120.00tk  \t\t|\n");
     printf("\t| 2.STEAM RICE WITH CHICKEN AND WATER 110.00tk  \t\t|\n");
     printf("\t| 3.Back to Main Menu     \t\t\t\t\t|\n");
     printf("\t|===============================================================|\n");
     printf("\n\n\t <<..Enter your choice..>> \n");

     char m;
     FILE*mealmenu;

     mealmenu=fopen("menu.txt","rt");     //FILE
     while((m=getc(mealmenu))!=EOF)
     {
       printf("%c",m);
     }
     fclose(mealmenu);
     printf("\n\n\nENTER YOUR ORDER:\n\n ");
     scanf("%d",&choice);
     if (choice==1)                 //CONDITIONS
     {
         printf("Qauntity: ");      //adds up the money of total quantity
         scanf("%d",&quantity);
         total=total+120*(quantity);
         printf("\n\tPRESS 1 TO ORDER AGAIN: \n");
         printf("\tPRESS 2 FOR THE AMOUNT YOU NEED TO PAY:\n");
         printf("\n\n\t <<..Enter your choice..>> \n");
         scanf("%d",&again);

         if(again==1)
         {
             printf("\n\n");
             system ("cls");
             meal();
         }
         else if(again==2)

             printf("YOUR TOTAL AMOUNT IS: %.2ftk\n\n",total);    //displays the total money amount

             int TTL=total;
             FILE*TOT;
             TOT=fopen("order.txt","a");              //orders are added in the file
             fprintf(TOT,"\nOVERALL TOTAL: %dtk\n",TTL);
             fclose(TOT);

            customer_details();
            system("cls");

         }
         else if(choice==2)
         {
             {
         printf("Qauntity: ");
         scanf("%d",&quantity);
         total=total+120*(quantity);
         printf("\n\tPRESS 1 TO ORDER AGAIN: \n");
         printf("\tPRESS 2 FOR THE AMOUNT YOU NEED TO PAY:\n");
         printf("\n\n\t <<..Enter your choice..>> \n");
         scanf("%d",&again);

         if(again==1)
         {
             printf("\n\n");
             system("cls");
             meal();
         }
         else if(again==2)

             printf("YOUR TOTAL AMOUNT IS: %.2ftk\n\n",total);

             int TTL=total;
             FILE*TOT;
             TOT=fopen("order.txt","a");
             fprintf(TOT,"\nOVERALL TOTAL: %dtk\n",TTL);
             fclose(TOT);

              customer_details();
              system("cls");

         }
         }
         else if(choice==3)
         {
             system("cls");
             mainmenu();
         }
         else
         {
              printf("\t\tERROR!CHOOSE FROM THE OPTIONS ABOVE\n\n");
              if(getch())
              system("cls");
              meal();
         }
 }
void snacks_drinks(void)                 //SNACK AND DRINKS MENU
  {
       int choice,again,quantity;
     double total=0;
     printf("\t|===============================================|\n");
     printf("\t|\tSNACKS AND DRINKS MENU!!......\t\t|\n\t|\n");
     printf("\t|===============================================|\n");
     printf("\t|SNACKS AND DRINKS AVAILABLE FOR YOU TO ENJOY-->|\n\t|\n");
     printf("\t| 1.CHICKEN BURGER 90.00tk  \t\t\t|\n");
     printf("\t| 2.BEEF BURGER 110.00tk\t\t\t|\n");
     printf("\t| 3.WATER 15.OOtk  \t\t\t\t|\n");
     printf("\t| 4.COKE 40.00tk  \t\t\t\t|\n");
     printf("\t| 5.FANTA 40.00tk \t\t\t\t|\n");
     printf("\t| 6.COFFEE 1OO.OOtk  \t\t\t\t|\n");
     printf("\t| 7.Back to Main Menu  \t\t\t\t|\n");
     printf("\t|===============================================|\n");
     printf("\n\n\t <<..Enter your choice..>> \n");

     char m;
     FILE*S_D_menu;

     S_D_menu=fopen("menu.txt","rt");
     while((m=getc(S_D_menu))!=EOF)
     {
       printf("%c",m);
     }
     fclose(S_D_menu);
     printf("\n\n\nENTER YOUR ORDER:\n\n ");
     scanf("%d",&choice);
     if (choice==1)
     {
         printf("Qauntity: ");
         scanf("%d",&quantity);
         total=total+90*(quantity);
         printf("\n\tPRESS 1 TO ORDER AGAIN: \n");
         printf("\tPRESS 2 FOR THE AMOUNT YOU NEED TO PAY:\n");
         printf("\n\n\t <<..Enter your choice..>> \n");
         scanf("%d",&again);

         if(again==1)
         {
             printf("\n\n");
             system("cls");
              snacks_drinks();
         }
         else if(again==2)

             printf("YOUR TOTAL AMOUNT IS: %.2ftk\n\n",total);

             int TTL=total;
             FILE*TOT;
             TOT=fopen("order.txt","a");
             fprintf(TOT,"\nOVERALL TOTAL: %dtk\n",TTL);
             fclose(TOT);

            customer_details();
            system("cls");

         }
         else if(choice==2)
         {
             {
         printf("Qauntity: ");
         scanf("%d",&quantity);
         total=total+110*(quantity);
         printf("\n\tPRESS 1 TO ORDER AGAIN: \n");
         printf("\tPRESS 2 FOR THE AMOUNT YOU NEED TO PAY:\n");
         printf("\n\n\t <<..Enter your choice..>> \n");
         scanf("%d",&again);

         if(again==1)
         {
             printf("\n\n");
             system("cls");
              snacks_drinks();
         }
         else if(again==2)

             printf("YOUR TOTAL AMOUNT IS: %.2ftk\n\n",total);

             int TTL=total;
             FILE*TOT;
             TOT=fopen("order.txt","a");
             fprintf(TOT,"\nOVERALL TOTAL: %dtk\n",TTL);
             fclose(TOT);

              customer_details();
              system("cls");

         }
         }
         else if(choice==3)
         {
             {
         printf("Qauntity: ");
         scanf("%d",&quantity);
         total=total+15*(quantity);
         printf("\n\tPRESS 1 TO ORDER AGAIN: \n");
         printf("\tPRESS 2 FOR THE AMOUNT YOU NEED TO PAY:\n");
         printf("\n\n\t <<..Enter your choice..>> \n");
         scanf("%d",&again);

         if(again==1)
         {
             printf("\n\n");
             system("cls");
              snacks_drinks();
         }
         else if(again==2)

             printf("YOUR TOTAL AMOUNT IS: %.2ftk\n\n",total);

             int TTL=total;
             FILE*TOT;
             TOT=fopen("order.txt","a");
             fprintf(TOT,"\nOVERALL TOTAL: %dtk\n",TTL);
             fclose(TOT);

              customer_details();
                system("cls");

         }
         }
         else if(choice==4)
         { {
         printf("Qauntity: ");
         scanf("%d",&quantity);
         total=total+40*(quantity);
         printf("\n\tPRESS 1 TO ORDER AGAIN: \n");
         printf("\tPRESS 2 FOR THE AMOUNT YOU NEED TO PAY:\n");
         printf("\n\n\t <<..Enter your choice..>> \n");
         scanf("%d",&again);

         if(again==1)
         {
             printf("\n\n");
             system("cls");
             snacks_drinks();
         }
         else if(again==2)

             printf("YOUR TOTAL AMOUNT IS: %.2ftk\n\n",total);

             int TTL=total;                        //ORDERs are added
             FILE*TOT;
             TOT=fopen("order.txt","a");
             fprintf(TOT,"\nOVERALL TOTAL: %dtk\n",TTL);
             fclose(TOT);

              customer_details();
                system("cls");

         }

         }
         else if(choice==5)
         {
              {
         printf("Qauntity: ");
         scanf("%d",&quantity);
         total=total+40*(quantity);                                      //FUNCTIONS OF MATHS
         printf("\n\tPRESS 1 TO ORDER AGAIN: \n");
         printf("\tPRESS 2 FOR THE AMOUNT YOU NEED TO PAY:\n");
         printf("\n\n\t <<..Enter your choice..>> \n");
         scanf("%d",&again);

         if(again==1)
         {
             printf("\n\n");
              system("cls");
              snacks_drinks();
         }
         else if(again==2)

             printf("YOUR TOTAL AMOUNT IS: %.2ftk\n\n",total);

             int TTL=total;
             FILE*TOT;
             TOT=fopen("order.txt","a");
             fprintf(TOT,"\nOVERALL TOTAL: %dtk\n",TTL);
             fclose(TOT);

              customer_details();
                system("cls");

         }
         }
         else if(choice==6)
         {
              {
         printf("Qauntity: ");
         scanf("%d",&quantity);
         total=total+100*(quantity);
         printf("\n\tPRESS 1 TO ORDER AGAIN: \n");
         printf("\tPRESS 2 FOR THE AMOUNT YOU NEED TO PAY:\n");
         printf("\n\n\t <<..Enter your choice..>> \n");
         scanf("%d",&again);

         if(again==1)
         {
             printf("\n\n");
             system("cls");
              snacks_drinks();
         }
         else if(again==2)

             printf("YOUR TOTAL AMOUNT IS: %.2ftk\n\n",total);

             int TTL=total;
             FILE*TOT;
             TOT=fopen("order.txt","a");
             fprintf(TOT,"\nOVERALL TOTAL: %dtk\n",TTL);
             fclose(TOT);

              customer_details();
                system("cls");

         }
         }
         else if(choice==7)
         {
              system("cls");
             mainmenu();
         }
          else
         {
              printf("\t\tERROR!CHOOSE FROM THE OPTIONS ABOVE\n\n");
              if(getch())
              system("cls");
               snacks_drinks();
         }
  }
