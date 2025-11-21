#include<stdio.h>
#include<stdlib.h>

int Difference(int Arr[],int iSize)
{
    int iCnt=0;
    int iSumEven=0;
    int iSumOdd=0;
    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        if(Arr[iCnt]%2==0)
        {
            iSumEven+=Arr[iCnt];
        }
        else
        {
            iSumOdd+=Arr[iCnt];
        }
    }
    return iSumEven-iSumOdd; 
}
int main()
{
    int iLength = 0;
    int iCnt = 0 , iRet =0 ;
    
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

    //step 2 : Use the memory
    iRet = Difference(iPtr,iLength);
    

    printf("%d is Difference between Even and odd numbers sum",iRet);

    //step 3 : Free the memory
    free(iPtr);
    return 0;
}