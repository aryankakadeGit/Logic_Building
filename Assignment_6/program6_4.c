#include<stdio.h>
int Multi(int iNo1 , int iNo2 , int iNo3)
{
    int multiplication=0;
    multiplication=iNo1*iNo2*iNo3;
    return multiplication;
}
int main()
{
    int iValue1,iValue2,iValue3=0;
    int iRet=0;
    printf("Enter the numbers : \n");
    scanf("%d %d %d",&iValue1,&iValue2,&iValue3);
    iRet=Multi(iValue1,iValue2,iValue3);
    printf("Multiplication is : %d",iRet);

    return 0;
}