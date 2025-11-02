#include<stdio.h>
int Division(int iNo1, int iNo2)
{
    if(iNo2<0)
    {
        return -1;
    }
    int iAns=0;

    iAns=iNo1/iNo2;
    return iAns;

}

int main()
{
    int iValue1= 15;
    int iValue2= 5;
    int iRet=Divide(iValue1,iValue2);
    printf("Division is %d\n",iRet);
    return 0 ;
}