#include<stdio.h>
int PrintFactors(int iNo)
{
    int iCnt=0;
    int iAddEvenFact=0;
    for(iCnt=1;iCnt<=iNo/2;iCnt++)
    {
        if(iNo%iCnt==0 && iCnt%2==0)
        {
            iAddEvenFact+=iCnt;
        }
    }
    return iAddEvenFact;
}
int main()
{
    int iValue=0;
    int iRet=0;
    printf("Enter the number :\n");
    scanf("%d",&iValue);
    iRet=PrintFactors(iValue);
    printf("Sum of Even factors is : %d",iRet);
    return 0;
}
//time complexity o(n/2)