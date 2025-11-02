class Logic
{
    void CountEvenOdd(int iNo)
    {
        int iEvenCnt=0;
        int iOddCnt=0;
        int iCnt=0;
        for(iCnt=1;iCnt<=iNo;iCnt++)
        {
            if(iCnt%2==0)
            {
                iEvenCnt++;
            }
            else{
                iOddCnt++;            }
        }
        System.out.println("even:"+iEvenCnt);
        System.out.println("odd:"+iOddCnt);
    }
}
class Program21_2
{
       public static void main(String[] args) {
        Logic obj=new Logic();
        obj.CountEvenOdd(50);

       }
}