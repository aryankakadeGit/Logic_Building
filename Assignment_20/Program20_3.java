class Logic
{
    void CheckPerfect(int iNo)
    {
        int iCnt=0;
        int iAdd=0;
        for(iCnt=1;iCnt<=iNo/2;iCnt++)
        {
            if(iNo%iCnt==0)
            {
                iAdd+=iCnt;
            }
        }
        if(iAdd==iNo)
        {
            System.out.println("perfect");
        }
        else{
            System.out.println("Not PErfect");
        }
        
    }
}
class Program20_3
{
       public static void main(String[] args) {
        Logic obj=new Logic();
        obj.CheckPerfect(6);

       }
}