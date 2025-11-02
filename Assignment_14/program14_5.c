#include<stdio.h>
int CountLess(int iNo)
{
    int iRev=0;
    int iCnt=0;
    while(iNo!=0)
    {
        iRev=iNo%10;
        if(iRev<6)
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
    iRet=CountLess(iValue);
    printf("Count of number less than 6 is  : %d\n",iRet);
    return 0;
}