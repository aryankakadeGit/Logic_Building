#include<stdio.h>
void DisplayContent(int iNo)
{
    int iCnt=0;
    if(iNo<0)
    {
        iNo=-iNo;
    }
    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        printf("$\t*\t");
    }
}
int main()
{
    int iValue=0;
    printf("Enter the number : \n");
    scanf("%d",&iValue);
    DisplayContent(iValue);
    return 0;
}