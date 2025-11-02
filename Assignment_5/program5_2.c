#include<stdio.h>
int FindMax(int a,int b)
{
    if(a>b)
    {
        return a;
    }
    else
    {
        return b;
    }
}
int main()
{
    int iValue1=0;

    int iValue2=0;

    int iRet=0;

    printf("Enter the first number :\n");
    scanf("%d",&iValue1);

    printf("Enter the second number :\n");
    scanf("%d",&iValue2);

    iRet=FindMax(iValue1,iValue2);

    printf("Maximum is : %d\n",iRet);
    return 0;
}