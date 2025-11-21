#include<stdio.h>
#include<stdlib.h>


void Range(int Arr[],int iSize,int st,int end)
{
    int iCnt=0;
   
    for(iCnt=0;iCnt<iSize;iCnt++)
    {
       if(Arr[iCnt]>st&&Arr[iCnt]<end)
       {
               printf("%d",Arr[iCnt]);
       }
    }
     
}
int main()
{
    int iLength = 0;
    int iCnt = 0 , iStartValue=0 , iEndValue=0 ;
    
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
    printf("ENter the Start value  ");
    scanf("%d",&iStartValue);
    printf("ENter the end value  ");
    scanf("%d",&iEndValue);

    //step 2 : Use the memory
    Range(iPtr,iLength,iStartValue,iEndValue);

    //step 3 : Free the memory
    free(iPtr);
    return 0;
}