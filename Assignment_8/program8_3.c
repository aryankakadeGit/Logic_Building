#include<stdio.h>
int factorial(int iNo)
{
    int iCnt=0;
    int iFact=1;
    for(iCnt=iNo;iCnt>0;iCnt--)
    {
        iFact*=iCnt;
    }
}
int main()
{
    int iValue=0;
    int iRet=0;
    printf("Enter the number :\n");
    scanf("%d",&iValue);
    iRet=factorial(iValue);
    printf("Factorial is : %d ", iRet);
    return 0;
}