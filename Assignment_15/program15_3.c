#include<stdio.h>
int CountThreeSeven(int iNo)
{
    int iRev=0;
    int iCnt=0;
    while(iNo!=0)
    {
        iRev=iNo%10;
        if(iRev>3 && iRev<7)
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
    iRet=CountThreeSeven(iValue);
    printf(" %d \n",iRet);
    return 0;
}