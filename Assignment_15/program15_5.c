#include<stdio.h>
int GiveDifference(int iNo)
{
    int iRev=0;
    int iEveAdd=0;
    int iOddAdd=0;
    
    while(iNo!=0)
    {
        iRev=iNo%10;
        if(iRev%2==0)
        {
            iEveAdd+=iRev;
        }
        else
        {
            iOddAdd+=iRev;
        }
        iNo=iNo/10;
    }
    return iEveAdd-iOddAdd;
}
int main()
{
    int iValue=0;
    int iRet=0;
    printf("Enter the Number : \n");
    scanf("%d",&iValue);
    iRet=GiveDifference(iValue);
    printf(" DIfference betn even and add is %d \n",iRet);
    return 0;
}