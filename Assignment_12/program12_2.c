#include<stdio.h>
int CountFactors(int iNo)
{
    int iCnt=0;
    int iCountFact=0;
    for(iCnt=1;iCnt<=iNo/2;iCnt++)
    {
        if(iNo%iCnt==0)
        {
            iCountFact++;
        }
    }
    return iCountFact;
}
int main()
{
    int iValue=0;
    int iRet=0;
    printf("Enter the number :\n");
    scanf("%d",&iValue);
    iRet=CountFactors(iValue);
    printf("The number of factors is %d",iRet);
    return 0;
}
//time complexity o(n/2)