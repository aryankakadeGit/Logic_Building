#include<stdio.h>
void CheckSize(int iNo)
{
    if(iNo<50)
    {
        printf("small");
    }
    if(iNo>50 && iNo<100)
    {
        printf("medium");
    }
    if(iNo>100)
    {
        printf("Large");
    }
}
int main()
{
    int iValue=0;
    printf("Enter The Number : \n");
    scanf("%d",&iValue);
    CheckSize(iValue);
    return 0;
}