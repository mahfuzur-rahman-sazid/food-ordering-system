

struct Customer       //STRUCTURES
{
    char full_name[100];
    long long int phone;
};

void customer_details(void) {
    struct Customer customer;

    printf("\n\nINPUT CUSTOMER INFO-->\n");
    printf("Name: ");
    scanf("%s", customer.full_name);
    printf("Phone number: ");
    scanf("%lld", &customer.phone);
    system("cls");

    printf("\n\nYOUR FOLLOWING DETAILS ARE MENTIONED BELOW-->\n\n");

    FILE *c_details;
    c_details = fopen("order.txt", "a");
    fprintf(c_details, "FOOD FOR: %s\nPHONE NUMBER: %lld\n\n\n", customer.full_name, customer.phone);
    fclose(c_details);
    printf("|NAME|: %s\n|PHONE NUMBER|: %lld\n", customer.full_name, customer.phone);
    printf("\n\n\t|=======================================================|\n");
    printf("\t  YOUR FOOD IS BEING PREPARED!! PICK UP IN A FEW MINUTES\n\n");
    printf("\t\t\t<<THANK YOU FOR ORDERING>>\n");
    printf("\t|=======================================================|\n");
    printf("\n\nPress any key to return to the MAIN MENU");
    if (getch())
        mainmenu();
}
