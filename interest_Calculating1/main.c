#include "head.h"

int main(void)
{
    dailyMoney = 0.0f;
    newTotalMoneyWeekend= 0.0f;
    interestPercentage = 0.51f;
    tempTotalM=0.0f;
  
    time_t t = time(NULL);
    struct tm *now = localtime(&t);
    printf("Current day is: %d\n", now->tm_wday);
    wday = now->tm_wday;
    printf("Please enter the amount of total money between 2000-5.000.000 TL: ");
    scanf("%f", &interest.totalMoney);
    system("cls");
    if(interest.totalMoney<2000||interest.totalMoney>5000000)
    {
        printf("This amount of money is can not be calculated. hit a key to exit!");
        getch();
        return 0;

    }
    printf("Please enter the total day: ");
    scanf("%f", &interest.totalDay);
    system("cls");
    printf("Please enter the withholding interest in as a percentage: ");
    scanf("%f", &interest.withHoldingInterest);
    system("cls");
    interest.withHoldingInterest*=0.01;
    float result =  calculateInterest(interest.totalMoney, interest.totalDay, interest.withHoldingInterest);
    printf("\n%d days after Total money you have is %2.3f TL", (int)interest.totalDay,result);

    getch();
    return 0;
}
