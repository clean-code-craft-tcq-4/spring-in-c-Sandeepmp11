#include "stats.h"
#include <cstdio>
struct Stats{
    float average;
    float min;
    float max;
}

struct Stats compute_statistics(const float* numberset, int setlength);

int main()
{
struct Stats s;
    s = compute_statistics(const float* numberset, int setlength);
    s.average = 0;
    s.min = 0;
    s.max = 0; 
int emailAlertCallCount = 0;
int ledAlertCallCount = 0;
return 0;
}

struct Stats compute_statistics(const float* numberset, int setlength)
{
    struct Stats s1;
    int i;
    float sum=0;
    setlength = sizeof(numberset) / sizeof(numberset[0]);
    for(i=0; i<(setlength-1);i++)
    {
        sum = sum + numberset[i];
    }
    s1.average = sum/setlength;
    
    printf("Average = %f",s1.average);
    
    s1.min = numberset[0];
    for(i=0; i<(setlength-1);i++)
    {
        if(numberset[i] < s1.min)
        {
            s1.min = numberset[i];
        }
    }
    printf("Minimum = %f",s1.min);
    
    s.max = numberset[0];
    for(i=0; i<(setlength-1);i++)
    {
        if(numberset[i] > s1.max)
        {
            s1.max = numberset[i];
        }
    }
    printf("Maximum = %f",s1.max);
    return s1;
}
