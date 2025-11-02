#include<stdio.h>
int CountFour(int iNo)
{
    int iRev=0;
    int iCnt=0;
    while(iNo!=0)
    {
        iRev=iNo%10;
        if(iRev==4)
        {
            iCnt++;
        }
        iNo=iNo/10;
    }
    return iCnt;
}
int main()
{
    int iValue=0;
    int iRet=0;
    printf("Enter the Number : \n");
    scanf("%d",&iValue);
    iRet=CountFour(iValue);
    printf("Count of Four is  : %d\n",iRet);
    return 0;
}