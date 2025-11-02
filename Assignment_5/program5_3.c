#include<stdio.h>
void CheckLeapYear(int iNo)
{
    if( (iNo%400) == 0)
    {
        printf( " Year is leap year " );
    }
    else
    {
        printf("Year is not a leap year" ); 
    }
}
int main()
{
    int iValue=0;
    printf("Enter the year :\n");
    scanf("%d",&iValue);
    CheckLeapYear(iValue);
    return 0;
}