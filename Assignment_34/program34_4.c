#include <stdio.h>
#include<stdbool.h>
bool PrintSeriesTillEnd(char ch)
{
    
    if (ch >= 'A' && ch <= 'Z')
    {
       return false;
    }
    else if (ch >= 'a' && ch <= 'z')
    {
        return false;
    }
    else{
        return true;
    }

}
int main()
{
    char cValue = '\0';

    printf("Enter Character :\n");
    scanf("%c", &cValue);
    bool Bret=false;

    Bret=PrintSeriesTillEnd(cValue);
    if(Bret==true)
    {
        printf("Special Character");
    }
    else
    {
        printf("Not a Special Character");
    }
    return 0;
}