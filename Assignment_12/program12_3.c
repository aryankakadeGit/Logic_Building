#include<stdio.h>
int PrintFactors(int iNo)
{
    int iCnt=0;
    int iAddFact=0;
    for(iCnt=1;iCnt<=iNo/2;iCnt++)
    {
        if(iNo%iCnt==0)
        {
            iAddFact+=iCnt;
        }
    }
    return iAddFact;
}
int main()
{
    int iValue=0;
    int iRet=0;
    printf("Enter the number :\n");
    scanf("%d",&iValue);
    iRet=PrintFactors(iValue);
    printf("Sum of factors is : %d",iRet);
    return 0;
}
//time complexity o(n/2)