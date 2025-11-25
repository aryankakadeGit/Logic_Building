#include<stdio.h>
void print(int iRow,int iCol)
{
    int i=0 , j =0;
    for(i=iRow ; i>=1 ; i--)
    {
        for(j=1 ; j<=iCol ;j++)
        {
            if(i==iRow || j==iCol || i ==1 || j==1 || i==j)
            {
                printf("*\t");
            }
            else if(i>j)
            {
                printf("#\t");
            }
            else{
                printf("$\t");
            }
        }
        printf("\n");
    }
}
int main()
{
    int iValue1=0;
    int iValue2=0;
    printf("Enter the row and colums : \n");
    scanf("%d %d",&iValue1,&iValue2);
    print(iValue1,iValue2);
    return 0;
}