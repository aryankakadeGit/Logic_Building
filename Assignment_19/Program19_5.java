class Logic
{
    void CalculatePower(int iNo,int iPower)
    {
        int iCnt=0;
        int iResult=1;
        for(iCnt=1;iCnt<=iPower;iCnt++)
        {
            iResult*=iNo;
        }
        System.out.println("Result :"+iResult);
    }
}
class Program19_5
{
       public static void main(String[] args) {
        Logic obj=new Logic();
        obj.CalculatePower(2,5);

       }
}