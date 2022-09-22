#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct user{
    char name[50];
    char email[70];
    int phone;
    char username[50];
    char password[50];
};

void UsernameGenerator(char email[50],char username[50]){
    for(int i = 0; i<strlen(email);i++){
    if (email[i] == '@') break;
    else username[i] = email[i];   }
}


int main() {
     FILE *save1;
    struct user user1;
    int choice;
    jump:
    printf("\n\t\t\t\t<------- Welcome to the Authentication System  ------->");
    printf("\n\nPlease choose your operation\n\n");

    printf("1)Signup\t2)Login\t\t3)Exit\t\t4)Delete all accounts");

    printf("\n\nYour choice: ");
    scanf("%d",&choice);
    fgetc(stdin);

    switch (choice) {
        case 1:
            system("clear");

            printf("\nEnter your full name: ");
            fgets(user1.name, 50, stdin);
            user1.name[strlen(user1.name) - 1] = '\0';

            printf("\nEnter your email: ");
            fgets(user1.email, 50, stdin);
            user1.email[strlen(user1.email) - 1] = '\0';

            printf("\nEnter your phone number: ");
            scanf("%d", &user1.phone);

            fgetc(stdin);

            printf("Enter your password: ");
            fgets(user1.password, 50, stdin);
            user1.password[strlen(user1.password) - 1] = '\0';

            UsernameGenerator(user1.email, user1.username);
            printf("\nYour username is \t %s", user1.username);

            save1 = fopen("save1.txt", "a+");

            fwrite(&user1, sizeof(struct user), 1, save1);
            if (&fwrite != 0) printf("\n\nUser registration success, Your username is \"%s\"", user1.username);
            else printf("Sorry something went wrong !!");
            return 0;
        case 2:
                system("clear");
                char username[50], pword[50];
                struct user usr;

                printf("\nEnter your username:\t");
                fgets(username, 50, stdin);
                username[strlen(username) - 1] = '\0';

                printf("Enter your password:\t");
                fgets(pword, 50, stdin);
                pword[strlen(pword) - 1] = '\0';

                save1 = fopen("save1.txt", "r");
                if (save1 == 0) { printf("log file not found !"); break;}

                while (fread(&usr, sizeof(struct user), 1, save1)) {
                    if (strcmp(usr.username, username) == 0 && strcmp(usr.password, pword) == 0)
                    {
                            system("clear");
                            printf("\n\tWelcome %s", usr.username);
                            printf("\n\n|Full Name:\t%s", usr.name);
                            printf("\n|Email:\t\t%s", usr.email);
                            printf("\n|Username:\t%s", usr.username);
                            printf("\n|Contact no:\t%d", usr.phone);
                        } else if (strcmp(usr.username, username) == 0 && strcmp(usr.password, pword) != 0)
                        {
                            printf("\n\nInvalid Password! Try again ");
                            goto jump;
                        } else if (strcmp(usr.username, username) != 0 && strcmp(usr.password, pword) == 0 )
                        {
                        printf("\n\nInvalid Username! Try again ");
                        goto jump;
                    }else if (strcmp(usr.username, username) != 0 && strcmp(usr.password, pword) != 0)
                    {
                        printf("User not found ! ");
                        goto jump;
                    }
                }
                fclose(save1);
            break;
        case 3:
            printf("\t\tBye bye !");
            return 0;
        case 4:
            remove("save1.txt");
            return 0;
        default:
            printf("\n\tInvalid choice ! ");
            goto jump;
    }
    return 0;
}
