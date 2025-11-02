#include<stdio.h>
void PrintFactors(int iNo)
{
    int iCnt=0;
    for(iCnt=1;iCnt<=iNo/2;iCnt++)
    {
        if(iNo%iCnt==0)
        {
            printf("%d\t",iCnt);
        }
    }
}
int main()
{
    int iValue=0;
    printf("Enter the number :\n");
    scanf("%d",&iValue);
    PrintFactors(iValue);
    return 0;
}
//time complexity o(n/2)