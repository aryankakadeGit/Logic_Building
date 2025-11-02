class Logic {
    void CheckEvenOdd(int n)
    {
        if(n%2==0)
        {
          System.out.println("number is : even ");

        }
        else{
          System.out.println("number is odd ");
        }
    }
}
class Program16_2{
    public static void main(String[] args) {
        Logic obj=new Logic();
        obj.CheckEvenOdd(7);
    }
}