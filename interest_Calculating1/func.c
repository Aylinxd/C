#include "head.h"

Interest interest;
int wday;

float interestPercentage;
float dailyMoney;
float newTotalMoneyWeekend;

float tempTotalMoney;
float tempTotalM;
float calculateInterest(float totalMoney, float totalDay, float withHoldingInterest)
{
    dailyMoney = interest.totalMoney;

    tempTotalMoney = dailyMoney;

    if ((wday + (int)interest.totalDay) % 7 == 5)
        interest.totalDay += 3;
    if ((wday + (int)interest.totalDay) % 7 == 6)
        interest.totalDay += 2;
    if ((wday + (int)interest.totalDay) % 7 == 0)
        interest.totalDay += 1;

    int a = wday;
    for (int i = (wday); i < (int)interest.totalDay + (wday); i++)

    {
        tempTotalM = dailyMoney;
        if (a == 7)
            a = 0;

        if (a == 1 || a == 2 || a == 3 || a == 4)
        {

            if (dailyMoney >= 2000 && dailyMoney <= 19999)
                dailyMoney -= 2000;

            else if (dailyMoney >= 20000 && dailyMoney <= 49999)
                dailyMoney -= 5000;

            else if (dailyMoney >= 50000 && dailyMoney <= 99999)
                dailyMoney -= 7500;

            else if (dailyMoney >= 100000 && dailyMoney <= 249999)
                dailyMoney -= 17500;

            else if (dailyMoney >= 250000 && dailyMoney <= 499999)
                dailyMoney -= 25000;

            else if (dailyMoney >= 500000 && dailyMoney <= 999999)
                dailyMoney -= 40000;

            else if (dailyMoney >= 1000000 && dailyMoney <= 1999999)
                dailyMoney -= 75000;

            else if (dailyMoney >= 2000000 && dailyMoney <= 5000000)
                dailyMoney -= 150000;

            dailyMoney = dailyMoney * interestPercentage;

            dailyMoney *= ((1.0 - interest.withHoldingInterest) / 366.0);

            dailyMoney += tempTotalM;
        }
        else if (a == 0 || a == 5 || a == 6)
        {
            newTotalMoneyWeekend = tempTotalMoney;

            if (newTotalMoneyWeekend >= 2000 && newTotalMoneyWeekend <= 19999)
                newTotalMoneyWeekend -= 2000;

            else if (newTotalMoneyWeekend >= 20000 && newTotalMoneyWeekend <= 49999)
                newTotalMoneyWeekend -= 5000;

            else if (newTotalMoneyWeekend >= 50000 && newTotalMoneyWeekend <= 99999)
                newTotalMoneyWeekend -= 7500;

            else if (newTotalMoneyWeekend >= 100000 && newTotalMoneyWeekend <= 249999)
                newTotalMoneyWeekend -= 17500;

            else if (newTotalMoneyWeekend >= 250000 && newTotalMoneyWeekend <= 499999)
                newTotalMoneyWeekend -= 25000;

            else if (newTotalMoneyWeekend >= 500000 && newTotalMoneyWeekend <= 999999)
                newTotalMoneyWeekend -= 40000;

            else if (newTotalMoneyWeekend >= 1000000 && newTotalMoneyWeekend <= 1999999)
                newTotalMoneyWeekend -= 75000;

            else if (newTotalMoneyWeekend >= 2000000 && newTotalMoneyWeekend <= 5000000)
                newTotalMoneyWeekend -= 150000;

            newTotalMoneyWeekend = newTotalMoneyWeekend * interestPercentage;

            newTotalMoneyWeekend *= ((1 - interest.withHoldingInterest) / 366.0);

            dailyMoney += newTotalMoneyWeekend;
            tempTotalM = dailyMoney;
        }
        a++;
    }


    return dailyMoney;
}