#include<stdio.h>
void PrintRange(int iNo1,int iNo2)
{
    int iCnt=0;
    if(iNo1>iNo2)
    {
        printf("Invalid Values");
        return;
    }
    for(iCnt=iNo1;iCnt<=iNo2;iCnt++)
    {
        printf("%d\t",iCnt);
    }
}
int main()
{
    int iValue1,iValue2=0;
    printf("Enter two numbers : \n");
    scanf ("%d %d",&iValue1,&iValue2);
    PrintRange(iValue1,iValue2);
    return 0;
}