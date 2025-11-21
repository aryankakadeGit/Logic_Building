#include<stdio.h>
#include<stdlib.h>

void SumDigit(int Arr[],int iSize)
{
    int iCnt=0;
    
    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        int iDigit=0;
        int iDigitSum=0;
        while(Arr[iCnt]!=0)
        {
            iDigit=Arr[iCnt]%10;
            iDigitSum+=iDigit;
            Arr[iCnt]/=10;
        }
        printf("%d\t",iDigitSum);
    }
}
int main()
{
    int iLength = 0;
    int iCnt = 0 ;
    
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
    SumDigit(iPtr,iLength);
    
    //step 3 : Free the memory
    free(iPtr);
    return 0;
}