#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL Frequency(int Arr[],int iSize,int ino)
{
    int iCnt=0;
    BOOL bFlag=FALSE;
    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        if(Arr[iCnt]==ino)
        {
            bFlag=TRUE;

        }
    }
    return bFlag; 
}
int main()
{
    int iLength = 0;
    int iCnt = 0 , bRet =0 , iValue=0 ;
    
    printf("Enter number of elements : \n");
    scanf("%d",&iLength);
    int* iPtr=NULL;

    //step 1 : Allocate the memory 
    iPtr=(int *)malloc(iLength*sizeof(int));

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
    bRet = Frequency(iPtr,iLength,iValue);
    if(bRet==TRUE)
    {
    printf("%d is present  ",iValue);
    }
    else{
        printf("%d is not present  ",iValue);

    }
    //step 3 : Free the memory
    free(iPtr);
    return 0;
}