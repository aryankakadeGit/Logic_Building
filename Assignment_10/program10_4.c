#include<stdio.h>
double CalculateCelsius(double iNo)
{
    return (iNo-32)*(5.0/9.0);
}
int main()
{
    float fValue=0.0;
    double dRet=0.0;
    printf("Enter the Farenheit : \n");
    scanf("%f",&fValue);
    dRet=CalculateCelsius(fValue);
    printf("The Celsius is : %lf",dRet);
    return 0;
}