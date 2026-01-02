#include<stdio.h>
void ReverseString(char *str)
{
    char *end =str;
    char *start =str;
    char temp='\0';
    while(*str!='\0')
    {
        end=str;
        str++;
    }
    while(start<end)
    {
        temp=*start;
        *start=*end;
        *end=temp;
        start++;
        end--;
    }
}
int main()
{
    char Arr[50];
    printf("Enter the string : \n");
    scanf("%[^'\n']s",Arr);
    ReverseString(Arr);
    printf("Reversed String is : %s",Arr);
    return 0;
}