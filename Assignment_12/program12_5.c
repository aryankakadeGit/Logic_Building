#include<stdio.h>
#include<stdbool.h>
bool DivisibleByFive(int iNo)
{
    if(iNo%5==0)
    {
        return true;
    }
    else{
        return false;
    }
}
int main()
{
    int iValue=0;
    bool bRet=false;
    printf("Enter the number :\n");
    scanf("%d",&iValue);
    printf("%s\n",DivisibleByFive(iValue)?"Yes":"No");
    return 0;
}