#include <stdio.h>
#include <conio.h>
#include <time.h>
#include <stdint.h>
#include <windows.h>

extern int wday;
extern float dailyMoney;
extern float newTotalMoneyWeekend;
extern float interestPercentage;
extern float tempTotalM;

float calculateInterest(float totalMoney, float totalDay, float withHoldingInterest);

typedef struct
{
    float totalMoney;
    float totalDay;
    float withHoldingInterest;

} Interest;

extern Interest interest;
