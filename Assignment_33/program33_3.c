#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;
BOOL Check(char ch)
{
    if(ch>='0' && ch<='9')
    {
        return TRUE;
    }
    else{
        return FALSE;
    }
}
int main()
{
    char cValue='\0';

    printf("Enter Character :\n");
    scanf("%c",&cValue);
    int bRet=0;
    bRet=Check(cValue);
    if(bRet==TRUE)
    {
        printf("IT is a Digit ");  
    }
    if(bRet==FALSE)
    {
        printf("IT is not a Digit ");  
    }
    return 0;
}