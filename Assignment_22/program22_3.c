#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
typedef int * IPTR;

bool NumberPresent(int Arr[],int iSize,int no)
{
    int iCnt=0;
    bool bFlag=false;
    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        if(Arr[iCnt]==no)
        {
            bFlag=true;
            break;
        }
    }
    return bFlag;
}
int main()
{
    int iLength = 0;
    int iCnt = 0 ;
    bool bRet =0 ;
    int iValue=0;
    printf("Enter number of elements : \n");
    scanf("%d",&iLength);
    IPTR iPtr=NULL;

    //step 1 : Allocate the memory 
    iPtr=(IPTR)malloc(iLength*sizeof(int));

    if(NULL == iPtr)
    {
        printf("Unable to allocate memory ");
        return -1;
    }

    printf("ENter the values : ");
    for(iCnt=0 ; iCnt<iLength ; iCnt++)
    {
        scanf("%d",&iPtr[iCnt]);
    }

     printf("ENter the value to search : ");
     scanf("%d",&iValue);
    //step 2 : Use the memory
    bRet = NumberPresent(iPtr,iLength,iValue);
    if(bRet==true)
    {
        printf("%d is present in array ",iValue);
    }
    else{
        printf("%d is not present in array ",iValue);

    }
    //step 3 : Free the memory
    free(iPtr);
    return 0;
}