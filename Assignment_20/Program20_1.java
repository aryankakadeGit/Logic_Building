class Logic
{
    void CalculateSumEven(int iNo)
    {
        int iCnt=0;
        int iResult=0;
        for(iCnt=1;iCnt<=iNo;iCnt++)
        {
            if(iCnt%2==0)
            {
                iResult+=iCnt;
            }
        }
        System.out.println("Result :"+iResult);
    }
}
class Program20_1
{
       public static void main(String[] args) {
        Logic obj=new Logic();
        obj.CalculateSumEven(10);

       }
}