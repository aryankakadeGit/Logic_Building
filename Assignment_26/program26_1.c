#include<stdio.h>
void pattern(int iNo)
{
    int iCnt=0;
    char ch = '\0';
    for(iCnt=1,ch='A';iCnt<=iNo;iCnt++,ch++)
    {
        printf("%c\t",ch);
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