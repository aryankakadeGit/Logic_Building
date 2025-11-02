class Logic {
    void ReverseNum(int n)
    {
        int iRev=0;
        while(n!=0)
        {
           iRev=n%10;
           System.out.println(iRev);
           n/=10;
        }
    }
        
}
class Program16_4
{
    public static void main(String[] args) 
    {
        Logic obj=new Logic();
        obj.ReverseNum(1234);
    }
}