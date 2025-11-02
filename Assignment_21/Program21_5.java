class Logic
{
    void DivisibleBy(int iNo)
    {
        int iCnt=0;
        for(iCnt=1;iCnt<=iNo;iCnt++)
        {
            if(iCnt%2==0 && iCnt%3==0)
            {
                System.out.println(iCnt);
            }
        } 

    }
}
class Program21_5
{
       public static void main(String[] args) {
        Logic obj=new Logic();
        obj.DivisibleBy(30);

       }
}