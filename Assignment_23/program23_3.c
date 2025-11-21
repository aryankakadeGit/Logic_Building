#include<stdio.h>
#include<stdlib.h>


int Frequency(int Arr[],int iSize,int ino)
{
    int iCnt=0;
    int iIndex=0;
    for(iCnt=iSize-1;iCnt>0;iCnt--)
    {
        if(Arr[iCnt]==ino)
        {
            iIndex=iCnt;
            break;
        }
    }
    return iIndex; 
}
int main()
{
    int iLength = 0;
    int iCnt = 0 , iRet =0 , iValue=0 ;
    
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
    iRet = Frequency(iPtr,iLength,iValue);
    
    printf("Last occurence is %d" ,iRet);
   

    //step 3 : Free the memory
    free(iPtr);
    return 0;
}