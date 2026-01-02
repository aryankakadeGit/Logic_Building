#include<stdio.h>
#define BOOL int 
#define TRUE 1 
#define FALSE 0  
BOOL CheckVowel(char *str)
{
    
    while(*str!='\0')
    {
        if(*str=='a' || *str=='e'||*str=='i'||*str=='o'||*str=='u')
        {
            
            return TRUE;
        }
        str++;
    }
    return FALSE;
}
int main()
{
    char Arr[50];
    BOOL bRet=FALSE;
    printf("Enter the string : \n");
    scanf("%[^'\n']s",Arr);
    bRet=CheckVowel(Arr);
    if(bRet==TRUE)
    {
        printf("Vowels Present ");
    }
    else
    {
        printf("Vowels not present");
    }


    return 0;
}