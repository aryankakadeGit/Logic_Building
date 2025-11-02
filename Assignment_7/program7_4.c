#include<stdio.h>
void DisplayOddNumber(int iNo)
{
    int iCnt=0;
    if(iNo<0)
    {
        iNo=-iNo;
    }
    
    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        if(iCnt%2!=0)
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
    DisplayOddNumber(iValue);
    return 0;
}