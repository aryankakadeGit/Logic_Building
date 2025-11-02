#include<stdio.h>
void PrintEvenNum(int iNo)
{
    int iCnt=0;
    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        if(iCnt%2==0)
        {
            printf("%d\t",iCnt);
 
        }
    }
}
int main()
{
    int iValue=0;
    printf("Enter the number : \n");
    scanf("%d",&iValue);
    PrintEvenNum(iValue);
    return 0;
}