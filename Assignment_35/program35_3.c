#include<stdio.h>
int CountDifference(char *str)
{
    int iCntCapital=0;
    int iCntSmall=0;
    while(*str!='\0')
    {
        if(*str>='a' && *str<='z')
        {
            iCntSmall++;
        }
        else if(*str>='a' && *str<='z')
        {
            iCntCapital++;
        }
        str++;
    }
    return iCntSmall-iCntCapital;
}
int main()
{
    char Arr[50];
    int iRet=0;
    printf("Enter the string : \n");
    scanf("%[^'\n']s",Arr);
    iRet=CountDifference(Arr);
    printf("Difference in small and capital Letters is : %d",iRet);

    return 0;
}