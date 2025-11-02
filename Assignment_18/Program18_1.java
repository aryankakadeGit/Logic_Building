class Logic{
    void CheckPrime(int a){
       int iCnt=0;
       for(iCnt=2;iCnt<a;iCnt++)
    {
        if(a%iCnt==0)
        {
            System.out.println("Not a prime No");

        }
        else{
            System.out.println("prime");
        }
    }
}
}
class Program17_4{
    public static void main(String[] args) {
        Logic lobj=new Logic();
        lobj.CheckPrime(20);
    }
}