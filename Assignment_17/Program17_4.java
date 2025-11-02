class Logic{
    void MaximumNo(int a,int b){
       int maxi=0;
       if(a>b)
       {
        maxi=a;
       }
       else{
        maxi=b;
       }
        System.out.println(maxi);
    }
}
class Program17_4{
    public static void main(String[] args) {
        Logic lobj=new Logic();
        lobj.MaximumNo(20,15);
    }
}