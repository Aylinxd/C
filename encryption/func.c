
#include "head.h"

Idinfo_struct first_Id_Info;
educationinfo_struct first_Education_Info;
cityinfo_struct first_city_Info;
char password[10] = "Aylin";
char password_check[10];
uint16_t length_password_check;
uint16_t length_password;
boolean Iscorrect(char *password, char *password_check)
{
    system("color B");

    char temp = 0;
    uint16_t i = 0;
    length_password = 0;
    length_password_check = 0;

    while (password[i] != '\0')
    {
        length_password++;
        i++;
    }
    printf("password lengts is : %d", length_password);

    i = 0;

    printf("\nlease enter the password!");
    while (temp != '\n')
    {
        temp = getchar();
        password_check[i] = temp;
        i++;
        if (i > length_password+1)
        {
            system("cls");
            printf("\npassword is so long");
            getch();
            return 0;
        }

        length_password_check = i - 1;
    }

    i = 0;

    int check = 0;
    if (length_password == length_password_check)
    {
        for (int i = 0; i < length_password; i++)
        {
            if (password_check[i] != password[i])
            {
                check++;
            }
        }
        if (check == 0)
        {
            printf("\nPassword is correct ! hit a key to see to the menu  ");
            getch();
            return 1;
        }
    }
    if (length_password != length_password_check || check != 0)
    {
        printf("\nPassword is not correct ! hit a key  to end the session ");
        getch();
        return 0;
    }
}




