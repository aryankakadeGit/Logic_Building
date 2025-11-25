#include<stdio.h>
void pattern(int iNo)
{
    int iCnt=0;
    for(iCnt=iNo;iCnt>=1;iCnt--)
    {
        printf("%d\t#\t",iCnt);
    }
}
int main()
{
    int iValue=0;
    printf("ENter number of elements :");
    scanf("%d",&iValue);
    pattern(iValue); 
    return 0;
}