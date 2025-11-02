#include<stdio.h>
float Percentage(int iNo1 , int iNo2)
{
    float percentage=0;
    percentage= ((float)iNo2/iNo1)*100;
    return percentage;
}
int main()
{
    int iValue1 , iValue2 ;
    float iRet=0;
    printf("Enter the total marks and obtained marks  : \n");
    scanf("%d %d",&iValue1,&iValue2);
    iRet=Percentage(iValue1,iValue2);
    printf("Percentage is : %f ",iRet);

    return 0;
}