#include<stdio.h>
int CalculateMeter(int iNo)
{
    if(iNo<0)
    {
        iNo=-iNo;
    }
    return iNo*1000;
}
int main()
{
    int iValue=0;
    int dRet=0;
    printf("Enter the km : \n");
    scanf("%d",&iValue);
    dRet=CalculateMeter(iValue);
    printf("The meter is : %d",dRet);
    return 0;
}