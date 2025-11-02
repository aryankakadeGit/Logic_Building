#include<stdio.h>
int MultFact(int iNo)
{
    int FactMul=1;
    int iCnt=0;
    for(iCnt=1;iCnt<=iNo/2;iCnt++)
    {
        if(iNo%iCnt==0)
        {
            FactMul*=iCnt;
        }
    }
    return FactMul;
}
int main()
{
    int iValue=0;
    int iRet=0;
    printf("Enter the number : \n");
    scanf("%d",&iValue);
    iRet=MultFact(iValue);
    printf("%d",iRet);
    return 0;
}