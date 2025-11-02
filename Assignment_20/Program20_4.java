class Logic
{
    void CheckLargest(int iNo)
    {
        int iRev=0;
        int iLar=0;
        while(iNo!=0)
        {
            iRev=iNo%10;
            if(iLar<iRev)
            {
                iLar=iRev;
            }
            iNo/=10;
        }
        System.out.println(iLar);
    }
}
class Program20_4
{
       public static void main(String[] args) {
        Logic obj=new Logic();
        obj.CheckLargest(1234);

       }
}