#include<stdio.h>
#include<stdbool.h>
bool CheckDivisible(int iNo1)
{
    if(iNo1%5==0)
    {
        return true ;
    }
    else{
        return false;
    }
}
int main()
{
    int iValue=0;
    bool bRet=false;
    printf("Enter the number");
    scanf("%d",&iValue);
    bRet=CheckDivisible(iValue);
    if(bRet==true)
    {
        printf("number is divisible by 5");
    }
    else{
        printf("number is not divible by 5");
    }
    return 0;
}