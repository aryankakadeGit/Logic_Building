
class Logic{
    void CheckGrade(int iNo)
    {
        if(iNo>90)
        {
            System.out.println("A grade");
        }
        if(iNo<90&&iNo>50)
        {
            System.out.println("B grade");
        }
        else{
            System.out.println("Fail");
        }
    }
}
class Program19_2
{
       public static void main(String[] args) {
        Logic obj=new Logic();
        obj.CheckGrade(84);

       }
}