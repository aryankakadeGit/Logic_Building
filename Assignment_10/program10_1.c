#include<stdio.h>
double CalculateArea(double iNo)
{
    if(iNo<0)
    {
        iNo=-iNo;
    }
    return 3.14*iNo*iNo;
}
int main()
{
    float fValue=0;
    double dRet=0;
    printf("Enter the radius : \n");
    scanf("%f",&fValue);
    dRet=CalculateArea(fValue);
    printf("The Area is : %lf",dRet);
    return 0;
}