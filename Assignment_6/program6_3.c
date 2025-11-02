#include<stdio.h>
#include<stdbool.h>
bool CheckGreater(int iNo1 , int iNo2)
{
    if(iNo1==iNo2)
    {
        return true ;
    }
    else{
        return false;
    }
}
int main()
{
    int iValue1,iValue2=0;
    bool bRet=false;
    printf("Enter the number : \n");
    scanf("%d %d",&iValue1,&iValue2);
    bRet=CheckGreater(iValue1,iValue2);
    if(bRet==0)
    {
        printf("Number is not same ");
    }
    else
    {
        printf("Number is same ");
    }

    return 0;
}