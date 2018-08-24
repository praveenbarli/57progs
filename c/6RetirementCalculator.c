#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>
#include <Windows.h>

bool isValidNumber(int num);

void main()
{
    int currentAge = 0;
    int retirementAge = 0;

    printf("What is your current age");
    char *currentAgeInput = malloc(4);
    gets(currentAgeInput);
   
    printf("At what age would you like to retire?");
    char *retirementAgeInput = malloc(4);
    gets(retirementAgeInput);

    printf("current age: %s", currentAgeInput);
    currentAge = atoi((const char *)currentAgeInput);
    printf("current age: %d ", currentAge);
    if(!isValidNumber(currentAge))
    {
        printf("Invalid value for current age.");
        exit(-1);
    }
        printf("current age: %d ", currentAge);
    retirementAge = atoi((const char *)retirementAgeInput);
    if(!isValidNumber(currentAge))
      {
        printf("Invalid value for current age.");
        exit(-1);
      }

    
    SYSTEMTIME str_t;
	GetSystemTime(&str_t);

    //printf("curren year %d ", str_t.wYear);
    int yearsLeftBeforeRetirement = retirementAge - currentAge;
    if(yearsLeftBeforeRetirement < 1)
       {
        printf("You can already retire.");
        exit(0);
       }

    printf("You have %d years left until you can retire. It's %d, so you can retire in %d", 
            yearsLeftBeforeRetirement, str_t.wYear, str_t.wYear + yearsLeftBeforeRetirement);
    

}

bool isValidNumber(int num)
{
    bool isValid = true;
    if(num < 0)
        isValid = false;

    return isValid;
}