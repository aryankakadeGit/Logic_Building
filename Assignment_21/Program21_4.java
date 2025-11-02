class Logic
{
    void CountFactors(int iNo)
    {
        int iCnt=0;
        int iFact=0;

        for(iCnt=1;iCnt<=iNo;iCnt++)
        {
            if(iNo%iCnt==0)
            {
                iFact++;
            }
        } 
         System.out.println(iFact);

    }
}
class Program21_4
{
       public static void main(String[] args) {
        Logic obj=new Logic();
        obj.CountFactors(12);

       }
}