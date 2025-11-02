#include<stdio.h>
double CalculateSqMeter(double iNo)
{
    if(iNo<0)
    {
        iNo=-iNo;
    }
    return iNo*0.0929;
}
int main()
{
    double dValue=0.0;
    double dRet=0.0;
    printf("Enter the sq feet area : \n");
    scanf("%lf",&dValue);
    dRet=CalculateSqMeter(dValue);
    printf("The sqMeter is : %lf",dRet);
    return 0;
}