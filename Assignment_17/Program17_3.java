class Logic{
    void MinimumNo(int a,int b,int c){
       int mini=0;
       if(a<b&&a<c)
       {
        mini=a;
       }
       else if(b<a&&b<c)
       {
        mini=b;
       }
       else{
        mini=c;
       }
        System.out.println(mini);
    }
}
class Program17_3{
    public static void main(String[] args) {
        Logic lobj=new Logic();
        lobj.MinimumNo(3,7,2);
    }
}