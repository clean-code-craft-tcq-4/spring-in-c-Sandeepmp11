#include "stats.h"
#include <cstdio>

int main()
{
struct Stats compute_statistics(const float* numberset, int setlength) {
    struct Stats s;
    s.average = 0;
    s.min = 0;
    s.max = 0;
};

int emailAlertCallCount = 0;
int ledAlertCallCount = 0;
return 0;
}

struct Stats compute_statistics(const float numberset[], int setlength)
{
    int i;
    float sum=0;
    float numberset[100];
    int setlength = sizeof(numberset) / sizeof(numberset[0]);
    for(i=0; i<(setlength-1);i++)
    {
        sum = sum + numberset[i];
    }
    s.average = sum/setlength;
    
    printf("Average = %f",s.average);
    
    s.min = numberset[0];
    for(i=0; i<(setlength-1);i++)
    {
        if(numberset[i] < s.min)
        {
            s.min = numberset[i];
        }
    }
    printf("Minimum = %f",s.min);
    
    s.max = numberset[0];
    for(i=0; i<(setlength-1);i++)
    {
        if(numberset[i] > s.max)
        {
            s.max = numberset[i];
        }
    }
    printf("Maximum = %f",s.max);
    
}
