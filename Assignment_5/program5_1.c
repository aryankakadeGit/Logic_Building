#include<stdio.h>
void CheckEvenOdd(int iNo)
{
    if((iNo%2)==0)
    {
        printf( " Number is even " );
    }
    else{
        printf(" Number is odd " );
    }
}
int main()
{
    int iValue=0;
    printf("Enter the number :\n");
    scanf("%d",&iValue);
    CheckEvenOdd(iValue);
    return 0;
}