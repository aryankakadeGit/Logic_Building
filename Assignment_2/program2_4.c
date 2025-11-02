#include<stdio.h>
void Display(int iNo,int Repeatition)
{
    int iCnt=0;
    for(iCnt=1 ; iCnt<=Repeatition ; iCnt++)
    {
        printf("%d\t",iNo);
    }
}
int main()
{
    int iValue=0;
    int ifreq=0;
    printf("Enter the number that you want to repeat :\n");
    scanf("%d",&iValue);
    printf("Enter the frequency that you want to repeat :\n");
    scanf("%d",&ifreq);
    Display(iValue,ifreq);

    return 0;
}