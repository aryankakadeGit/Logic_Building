class Logic{
    void PrintEven(int a){
       int iCnt=0;
       for(iCnt=1;iCnt<=a;iCnt++)
    {
        if(iCnt%2==0)
        {
            System.out.println(iCnt);
        }
    }
}
}
class Program17_4{
    public static void main(String[] args) {
        Logic lobj=new Logic();
        lobj.PrintEven(20);
    }
}