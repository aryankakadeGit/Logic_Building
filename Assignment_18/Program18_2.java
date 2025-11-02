class Logic{
    void SumEvenOdd(int iNo)
    {
        int iDigit=0;
        while(iNo!=0)
        {
            iDigit=iNo%10;
            int iEven =0;
            int iOdd=0;
            if(iDigit%2==0)
            {
                iEven+=iDigit;
            }
            else{
                iOdd+=iDigit;
            }
            iNo/=10;
        }
        System.out.println("Sum of even is : "+iEven+"Sum of odd is : "+iOdd);
    }
}
class Program18_2{
    public static void main(String[] args) {
        Logic lobj=new Logic();
        lobj.SumEvenOdd(123456);
    }
}