class Logic {
    void FindFactorial(int n)
    {
        int iCnt=0;
        int iFact=1;
        for(iCnt=n;iCnt>=1;iCnt--)
        {
            iFact*=iCnt;
        }
        System.out.println("Factorial is :"+iFact);
        
    }
}
class Program16_3{
    public static void main(String[] args) {
        Logic obj=new Logic();
        obj.FindFactorial(5);
    }
}