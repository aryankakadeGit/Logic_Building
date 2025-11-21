#include<stdio.h>
#include<stdlib.h>

typedef int * IPTR;

int EvenFrequency(int Arr[],int iSize)
{
    int iCnt=0;
    int iCount=0;
    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        if(Arr[iCnt]%2==0)
        {
            iCount++;
        }
    }
    return iCount; 
}
int main()
{
    int iLength = 0;
    int iCnt = 0 , iRet =0 ;
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
    
    //step 2 : Use the memory
    iRet = EvenFrequency(iPtr,iLength);
    printf("there are %d even numbers in array ", iRet);
    //step 3 : Free the memory
    free(iPtr);
    return 0;
}