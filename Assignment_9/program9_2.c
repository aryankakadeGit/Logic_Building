#include<stdio.h>
int ConvertDollar(int iNo)
{
    if(iNo<0)
    {
        iNo=-iNo;
    }
    return iNo*70;
}
int main()
{
    int iValue=0;
    int iRet=0;
    printf("Enter dollar : \n");
    scanf("%d",&iValue);
    iRet=ConvertDollar(iValue);
    printf("value in rupees is : %d",iRet);
    return 0 ;
}