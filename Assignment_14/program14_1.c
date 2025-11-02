#include<stdio.h>
void ReverseNum(int iNo)
{
    int iRev=0;
    while(iNo!=0)
    {
        iRev=iNo%10;
        printf("%d\n",iRev);
        iNo=iNo/10;
    }
}
int main()
{
    int iValue=0;
    printf("Enter the Number : \n");
    scanf("%d",&iValue);
    ReverseNum(iValue);
    return 0;
}