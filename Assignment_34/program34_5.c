#include <stdio.h>

void PrintDOH(char ch)
{
    
    printf("%d\t%o\t%x\n",ch,ch,ch);
}
int main()
{
    char cValue = '\0';

    printf("Enter Character :\n");
    scanf("%c", &cValue);
    PrintDOH(cValue);

    return 0;
}