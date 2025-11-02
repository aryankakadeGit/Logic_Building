#include<stdio.h>
int PrintNum(int iNo)
{
    int iCnt=0;
    int iAdd=0;
    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        iAdd+=iCnt;
    }
    return iAdd;
}
int main()
{
    int iValue=0;
    printf("Enter the number : \n");
    scanf("%d",&iValue);
    
    printf("Addition is : %d\n",PrintNum(iValue));
    return 0;
}