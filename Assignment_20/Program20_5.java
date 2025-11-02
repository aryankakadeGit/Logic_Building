class Logic
{
    void CheckSmallest(int iNo)
    {
        int iRev=0;
        int iSmall=9;
        while(iNo!=0)
        {
            iRev=iNo%10;
            if(iSmall>iRev)
            {
                iSmall=iRev;
            }
            iNo/=10;
        }
        System.out.println(iSmall);
    }
}
class Program20_5
{
       public static void main(String[] args) {
        Logic obj=new Logic();
        obj.CheckSmallest(1234);

       }
}