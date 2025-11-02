class Logic {
    void CalculateSum(int n)
    {
        int iCnt=0;
        int iAdd=0;
        for(iCnt=1;iCnt<=n;iCnt++)
        {
            iAdd+=iCnt;
        }
        System.out.println("the sun of first n number is : "+ iAdd);

    }
}
class Program16_1{
    public static void main(String[] args) {
        Logic obj=new Logic();
        obj.CalculateSum(10);
    }
}