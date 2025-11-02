class Logic{
    void CheckSign(int iNo)
    {
        if(iNo>0)
        {
            System.out.println("positive");
        }
        if(iNo==0)
        {
            System.out.println("Zero");
        }
        else{
            System.out.println("Negative");
        }
      
    }
}
class Program18_2{
    public static void main(String[] args) {
        Logic lobj=new Logic();
        lobj.CheckSign(-7);
    }
}