#include "head.h"

char password_check[10];
char password[10];
int main(void)
{
    uint16_t choice;
    boolean retrn = 1;

    if (Iscorrect(password, password_check) == 1)
    {
        while (retrn)
        {

            system("cls");
            printf("Please select the number \n");
            printf("1.Identity informations\n");
            printf("2.Education informations\n");
            printf("3.Cities you have been \n");
            printf("4.Print all the informations\n");
            scanf("%d", &choice);

            if (choice == 1)
            {
                system("cls");
                printf("Please enter your name: ");
                scanf("%s", first_Id_Info.name);
                system("cls");
                printf("Please enter your surname: ");
                scanf("%s", first_Id_Info.surname);
                system("cls");
                printf("Please enter your identity: ");
                scanf("%s", first_Id_Info.id);
                printf("\nHit 1 to go to back to the menu\nHit 0 to exit ");
                scanf("%d", &retrn);
            }
            else if (choice == 2)
            {
                system("cls");
                printf("Please enter your elementary school: ");
                scanf("%s", first_Education_Info.elementarySchool);
                system("cls");
                printf("Please enter your high school: ");
                scanf("%s", first_Education_Info.highSchool);
                system("cls");
                printf("Please enter your üniversity: ");
                scanf("%s", first_Education_Info.University);
                printf("\nHit 1 to go to back to the menu\nHit 0 to exit ");
                scanf("%d", &retrn);
            }
            else if (choice == 3)
            {
                system("cls");
                printf("1.city: ");
                scanf("%s", first_city_Info.firstCity);
                system("cls");
                printf("2.city: ");
                scanf("%s", first_city_Info.secondCity);
                system("cls");
                printf("3.city: ");
                scanf("%s", first_city_Info.thirdCity);
                printf("\nHit 1 to go to back to the menu\nHit 0 to exit ");
                scanf("%d", &retrn);
            }
            else if (choice == 4)
            {
                printf("Identity informations:\n%s \n%s \n%s\n\n", first_Id_Info.name, first_Id_Info.surname, first_Id_Info.id);
                printf("Education informations: \n %s\n%s\n%s\n\n", first_Education_Info.elementarySchool, first_Education_Info.highSchool, first_Education_Info.University);
                printf("Cities you have been: \n%s\n%s\n%s\n\n", first_city_Info.firstCity, first_city_Info.secondCity, first_city_Info.thirdCity);
                printf("\n\nHit 1 to go to back to the menu\nHit 0 to exit ");
                scanf("%d", &retrn);
            }
            else
            {
                system("cls");
                printf("this is not an avaliable number. hit a key to exit! ");
                getch();
                return 0;
            }
        }
    }

    FILE *Informations = fopen("Informations.txt", "w");
    fprintf(Informations,"Identity informations:\n%s \n%s \n%s\n\n", first_Id_Info.name, first_Id_Info.surname, first_Id_Info.id);
    fprintf(Informations,"Education informations: \n %s\n%s\n%s\n\n", first_Education_Info.elementarySchool, first_Education_Info.highSchool, first_Education_Info.University);
    fprintf(Informations,"Cities you have been: \n%s\n%s\n%s\n\n", first_city_Info.firstCity, first_city_Info.secondCity, first_city_Info.thirdCity);
     
    
    

    return 0;
}

