#include<stdio.h>
void Display_ASCII()
{
    int iCnt=0;
    char ch='\0';
    for(iCnt=0;iCnt<=255;iCnt++)
    {
        printf("%d\t:\t%x\t:\t%c\n",iCnt,iCnt,iCnt);
    }
}
int main()
{
    Display_ASCII();
    return 0;
}