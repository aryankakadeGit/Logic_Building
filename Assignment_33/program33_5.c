#include<stdio.h>

void Check(char ch)
{
    if(ch=='a' || ch<='A')
    {
        printf("Exam @ 7AM");
    }
    else if(ch=='b' || ch<='B')
    {
        printf("Exam @ 8:30AM");
    }
    else if(ch=='c' || ch<='C')
    {
        printf("Exam @ 9:20AM");
    }
    else if(ch=='d' || ch<='D')
    {
        printf("Exam @ 10:30AM");
    }
    else{
        printf("Invalid Division");;
    }
}
int main()
{
    char cValue='\0';

    printf("Enter Division :\n");
    scanf("%c",&cValue);
   
    Check(cValue);
   
    return 0;
}