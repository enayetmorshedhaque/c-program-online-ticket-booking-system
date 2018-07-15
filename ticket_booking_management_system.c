#include <stdio.h>
#include <string.h>
#include <time.h>


int option;
char user_name[20], password[20], source[20], destination[20];
void getCurrentTime();
void login();
void createAccount();
void fareQuery();
void trainRoute();
void purchaseTicket();
void logout();


struct compartments{

    int total_seats, booked_seats, available_seats;
    float ticket_fair;

}f_chair, f_seat, shovan, s_chair;

int main(){
    char user_name[20], password[15];

    printf("\t\t\t\t------------------------------------------------------------\n");
    printf("\t\t\t\t\t   BANGLADESH RAILWAY E-TICKETING SERVICE\n");
    printf("\t\t\t\t------------------------------------------------------------\n\n\n\n\n");

    getCurrentTime();
    printf("1. SignIn\n");
    printf("2. Create Account\n\n");
    printf("Enter Your Choice: ");
    scanf("%d",&option);
    switch(option){
        case 1: login();
                break;

        case 2: createAccount();
                break;

        default: printf("Wrong Choice!!!\n");
                 break;
    }
    return 0;

}


void getCurrentTime(){

    time_t rawtime;
    struct tm * timeinfo;

    time(&rawtime);
    timeinfo = localtime(&rawtime);
    printf("Current Time and Date: %s\n", asctime(timeinfo));
}

void login(){

    printf("\t\t\t-------------------------------\n");
    printf("\t\t\t\t   SIGN IN HERE\n");
    printf("\t\t\t-------------------------------\n\n");
    printf("enter your user name: ");
    scanf("%s",&user_name);
    printf("enter your password: ");
    scanf("%s",&password);
    if(strcmp(user_name, "admin@admin.admin")== 0 && strcmp(password, "admin123")==0){

        printf("\n\t\t-----------------------------------------------\n");
        printf("\t\t\t   WELCOME TO YOUR DASHBOARD USER\n");
        printf("\t\t-----------------------------------------------\n\n");
        printf("1. Fare Query\n");
        printf("2. Train Route\n");
        printf("3. Purchase Ticket\n");
        printf("4. Logout\n");
        printf("Enter Your Choice: ");
        scanf("%d",&option);
        switch(option){

            case 1: fareQuery();
                    break;

            case 2: trainRoute();
                    break;

            case 3: purchaseTicket();
                    break;

            case 4: logout();
                    break;

            default: printf("You have entered wrong choice!!!\n\n");

        }
    }

}

void fareQuery(){

    printf("\n\t\t-----------------------------------------------\n");
    printf("\t\t\t   FARE QUERY OF TRAINS\n");
    printf("\t\t-----------------------------------------------\n\n");

}

void trainRoute(){

    printf("\n\t\t-----------------------------------------------\n");
    printf("\t\t\t   ROUTE DETAILS OF AVAILABLE TRAINS\n");
    printf("\t\t-----------------------------------------------\n\n");

}

void purchaseTicket(){

    printf("\n\t\t-----------------------------------------------\n");
    printf("\t\t\t   PURCHASE YOUR TICKET HERE\n");
    printf("\t\t-----------------------------------------------\n\n");
    printf("Station From: ");
    scanf("%s",&source);
    printf("Station To: ");
    scanf("%s",&destination);
    //printf("")

}

void logout(){

}

void createAccount(){

}
