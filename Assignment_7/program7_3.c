#include<stdio.h>
void DisplayNumberLine(int iNo)
{
    int iCnt=0;
    if(iNo<0)
    {
        iNo=-iNo;
    }
    for(iCnt=iNo;iCnt>0;iCnt--)
    {
        printf("-%d\t",iCnt);
    }
    printf("0\t");
    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        printf("%d\t",iCnt);
    }
}
int main()
{
    int iValue=0;
    printf("Enter the number : \n");
    scanf("%d",&iValue);
    DisplayNumberLine(iValue);
    return 0;
}