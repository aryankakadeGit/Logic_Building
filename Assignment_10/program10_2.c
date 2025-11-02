#include<stdio.h>
double CalculateArea(double iNo1,double iNo2)
{
    if(iNo1<0)
    {
        iNo1=-iNo1;
    }
     if(iNo2<0)
    {
        iNo2=-iNo2;
    }
    return iNo1*iNo2;
}
int main()
{
    float fValue1=0;
    float fValue2=0;
    double dRet=0;
    printf("Enter the height : \n");
    scanf("%f",&fValue1);
     printf("Enter the Width : \n");
    scanf("%f",&fValue2);
    dRet=CalculateArea(fValue1,fValue2);
    printf("The Area is : %lf",dRet);
    return 0;
}