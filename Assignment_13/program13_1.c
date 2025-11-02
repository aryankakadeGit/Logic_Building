#include<stdio.h>
void PrintNum(int iNo)
{
    int iCnt=0;
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
    PrintNum(iValue);
    return 0;
}