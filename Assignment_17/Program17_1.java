class Logic{
    void SumOfDigits(int num){
        int iRev=0;
        int iAdd=0;
        while(num!=0)
        {
            iRev=num%10;
            iAdd+=iRev;
            num/=10;
        }
        System.out.println(iAdd);
    }
}
class Program17_1{
    public static void main(String[] args) {
        Logic lobj=new Logic();
        lobj.SumOfDigits(1234);
    }
}