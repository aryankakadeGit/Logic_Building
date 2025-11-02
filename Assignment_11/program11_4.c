#include<stdio.h>
int AddEvenRange(int iNo1,int iNo2)
{
    int iCnt=0;
    int Addr=0;
    if(iNo1>iNo2)
    {
        return -1;
    }
    for(iCnt=iNo1;iCnt<=iNo2;iCnt++)
    {
        if(iCnt%2==0)
        {
            Addr+=iCnt;
        }
       
    }
    return Addr;
}
int main()
{
    int iValue1,iValue2,iRet=0;
    printf("Enter two numbers : \n");
    scanf ("%d %d",&iValue1,&iValue2);
    iRet=AddEvenRange(iValue1,iValue2);
    if(iRet==-1)
    {
        printf("Invalid Values");
    }
    else{
            printf("Addition of range is : %d  ",iRet);

    }
    return 0;
}