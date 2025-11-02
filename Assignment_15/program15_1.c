#include<stdio.h>
int CountEven(int iNo)
{
    int iRev=0;
    int iCnt=0;
    while(iNo!=0)
    {
        iRev=iNo%10;
        if(iRev%2==0)
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
    iRet=CountEven(iValue);
    printf("even digits are %d \n",iRet);
    return 0;
}