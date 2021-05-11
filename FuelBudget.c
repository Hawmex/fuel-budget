#include "stdio.h"

int main()
{
    const unsigned int monthlyQuota = 60;
    const unsigned int quotaPrice = 1500;
    const unsigned int overUsagePrice = 3000;

    unsigned int usagePrediction;
    unsigned int quotaRemainder;

    scanf("%u", &usagePrediction);
    scanf("%u", &quotaRemainder);

    const unsigned int totalQuota = monthlyQuota + quotaRemainder;

    unsigned int budget;

    if (usagePrediction <= totalQuota)
        budget = usagePrediction * quotaPrice;
    else
    {
        const unsigned int overUsage = usagePrediction - totalQuota;

        budget = totalQuota * quotaPrice + overUsage * overUsagePrice;
    }

    printf("%u", budget);

    return 0;
}
