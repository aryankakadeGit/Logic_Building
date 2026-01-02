#include <stdio.h>

void PrintSeriesTillEnd(char ch)
{
    
    if (ch >= 'A' && ch <= 'Z')
    {
        while (ch <= 'Z')
        {
            printf("%c\t", ch);
            ch++;
        }
    }
    else if (ch >= 'a' && ch <= 'z')
    {
        while (ch >= 'a')
        {
            printf("%c\t", ch);
            ch--;
        }
    }

}
int main()
{
    char cValue = '\0';

    printf("Enter Character :\n");
    scanf("%c", &cValue);
    PrintSeriesTillEnd(cValue);

    return 0;
}