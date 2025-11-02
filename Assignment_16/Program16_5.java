class Logic {
    void CalculateDigits(int n)
    {
        int iRev=0;
        int iCnt=0;
        while(n!=0)
        {
           iRev=n%10;
           iCnt++;
           n/=10;
        }
        System.out.println(iCnt);
    }
        
}
class Program16_5
{
    public static void main(String[] args) 
    {
        Logic obj=new Logic();
        obj.CalculateDigits(1234);
    }
}