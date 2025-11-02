#include<stdio.h>
int EvenFactorial(int iNo)
{
    if(iNo<0)
    {
        iNo=-iNo;
    }
    int iEvenFact=1;
    int iCnt=0;
    int iOddFact=1;
    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        if(iCnt%2!=0)
        {
            iEvenFact*=iCnt; 
        }
        else
        {
            iOddFact*=iCnt;
        }
    }
    return iEvenFact-iOddFact ;
    
}
int main()
{
    int iValue=0;
    int iRet=0;
    printf("Enter number : \n");
    scanf("%d",&iValue);
    iRet=EvenFactorial(iValue);
    printf("%d",iRet);
    return 0 ;
}