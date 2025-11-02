#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;
BOOL CheckZero(int iNo)
{
    int iRev=0;
    while(iNo!=0)
    {
        iRev=iNo%10;
        if(iRev==0)
        {
            return TRUE;
        }
        iNo=iNo/10;
    }
}
int main()
{
    int iValue=0;
    BOOL bRet=FALSE;
    printf("Enter the Number : \n");
    scanf("%d",&iValue);
    bRet=CheckZero(iValue);
    if(bRet==TRUE)
    {
        printf("Contains Zero");
    }
    else
    {
        printf("not Contains Zero");
    }
    return 0;
}