#include<stdio.h>
void CheckNumberType(int iNo)
{
    if(iNo<0)
    {
        printf( " Negative " );
    }
    else if(iNo>0)
    {
        printf("positive" );
    }
    else{
        printf("Zero");
    }
}
int main()
{
    int iValue=0;
    printf("Enter the Number :\n");
    scanf("%d",&iValue);
    CheckNumberType(iValue);
    return 0;
}