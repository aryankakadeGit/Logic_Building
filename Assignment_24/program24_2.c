#include<stdio.h>
#include<stdlib.h>

int Smallest(int Arr[],int iSize)
{
    int iCnt=0;
    int Smallest=Arr[0];
    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        if(Arr[iCnt]<Smallest)
        {
            Smallest=Arr[iCnt];
        }
    }
    return Smallest; 
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
    iRet = Smallest(iPtr,iLength);
    

    printf("%d is Smallest ",iRet);

    //step 3 : Free the memory
    free(iPtr);
    return 0;
}