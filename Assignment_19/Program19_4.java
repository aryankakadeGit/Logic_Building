
class Logic{
    void PrintDigit(int iNo)
    {
        int iRev=0;
        while(iNo!=0)
        {
            iRev=iNo%10;
            System.out.println(iRev);
            iNo/=10;
        }
    }
}
class Program19_4
{
       public static void main(String[] args) {
        Logic obj=new Logic();
        obj.PrintDigit(55);

       }
}