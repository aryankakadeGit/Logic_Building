#include<stdio.h>
int FindMax(int a,int b,int c)
{
    if(a>b && a>c)
    {
        return a;
    }
    else if (b>a && b>c )
    {
        return b;
    }
    else if (c>a && c>b )
    {
        return c;
    }
}
int main()
{
    int iValue1=0;
    int iValue2=0;
    int iValue3=0;
    int iRet=0;

    printf("Enter the numbers :\n");
    scanf("%d %d %d ",&iValue1, &iValue2, &iValue3);

    
    iRet=FindMax(iValue1,iValue2,iValue3);

    printf("Maximum is : %d\n",iRet);
    return 0;
}