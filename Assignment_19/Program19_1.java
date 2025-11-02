
class Logic{
    void CheckLeap(int iNo)
    {
        if(iNo%400==0)
        {
            System.out.println("Leap year");
        }
        else{
            System.out.println("Not");
        }
    }
}
class Program19_1
{
       public static void main(String[] args) {
        Logic obj=new Logic();
        obj.CheckLeap(2004);

       }
}