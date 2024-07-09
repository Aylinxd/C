#include <stdio.h>
#include <stdint.h>
#include <windows.h>
#include <conio.h>
// constantı ekleyemedim
// extern const uint16_t password_size ;

extern char password[];
extern char password_check[];
boolean Iscorrect(char *password, char *password_check);


typedef struct
{
    char name[100];
    char surname[100];
    char id[100];

} Idinfo_struct;
extern Idinfo_struct first_Id_Info;


typedef struct
{
    char elementarySchool[100];
    char highSchool[100];
    char University[100];

} educationinfo_struct;

extern educationinfo_struct first_Education_Info;



typedef struct
{
    char firstCity[100];
    char secondCity[100];
    char thirdCity[100];

} cityinfo_struct;

extern cityinfo_struct first_city_Info;

