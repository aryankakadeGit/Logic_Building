#include<stdio.h>
int CountThreeSeven(int iNo)
{
    int iRev=0;
    int iMul=0;
    
    while(iNo!=0)
    {
        iRev=iNo%10;
        iMul*=iRev;
        iNo=iNo/10;
    }
    return iMul;
}
int main()
{
    int iValue=0;
    int iRet=0;
    printf("Enter the Number : \n");
    scanf("%d",&iValue);
    iRet=CountThreeSeven(iValue);
    printf(" multiplication is %d \n",iRet);
    return 0;
}