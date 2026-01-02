#include<stdio.h>

void PrintOpposite(char ch)
{
    if(ch>='a' && ch<='z')
    {
        printf("%c",ch-=32);
    }
    else if(ch>='A' && ch<='Z'){
        printf("%c",ch+=32);
    }
    else{
        printf("Invalid Input");
    }
}
int main()
{
    char cValue='\0';

    printf("Enter Character :\n");
    scanf("%c",&cValue);
    PrintOpposite(cValue);
    
    return 0;
}