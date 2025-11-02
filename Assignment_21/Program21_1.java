class Logic
{
    void CheckProduct(int iNo)
    {
        int iRev=0;
        int iMul=1;
        while(iNo!=0)
        {
            iRev=iNo%10;
            iMul*=iRev;
            iNo/=10;
        }
        System.out.println(iMul);
    }
}
class Program21_1
{
       public static void main(String[] args) {
        Logic obj=new Logic();
        obj.CheckProduct(234);

       }
}