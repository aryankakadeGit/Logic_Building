#include<stdio.h>
void pattern(int iNo)
{
    int iCnt=0;
    iNo=iNo*2;
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
    printf("Enter number of elements :");
    scanf("%d",&iValue);
    pattern(iValue); 
    return 0;
}