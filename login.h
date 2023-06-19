
void log_in(void) //CODES USED FOR LOGIN
 {
     char user_name[100];
     long long int pass;
     printf("\t\n\nINPUT LOGIN INFO -->\n");
     printf("USERNAME: ");
     scanf("%s",&user_name);
     printf("PASSWORD: ");
     scanf("%lld",&pass);
     system("cls");

     FILE*c_details;                 //FILE AND POINTERS
     c_details=fopen("info.txt","a");
     fprintf(c_details,"USERNAME: %s\nPASSWORD: %lld\n\n\n",user_name,pass);
     fclose(c_details);
     printf("|USERNAME|: %s\n|PASSWORD|: %lld\n",user_name,pass);
     printf("\n\n\t|=======================================================|\n");
     printf("\t YOUR ARE SUCCESSFULLY LOG-INED\n\n");
     printf("\t\t\t<<ENJOY YOUR ORDERING>>\n");
     printf("\t|=======================================================|\n");
     printf("\n\nPress any key to MAIN MENU");
     if(getch())
     mainmenu();
 }
