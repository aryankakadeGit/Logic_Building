import java.util.*;

class Pattern {
    public void print(int iRow, int iCol) {
     int i = 0;
     int j = 0;
        for (i = 1; i <= iRow; i++) {
                            
            int iNeg=i;

            for (j = 1; j <= iCol; j++) 
            {
                
                System.out.print(iNeg+ "\t");
                iNeg++;
            }
            System.out.println();
        }
    }
}

class program29_5 {
    public static void main(String[] args) {
        int iValue1 = 0;
        int iValue2 = 0;
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter row and column number :\n");
        iValue1 = sobj.nextInt();
        iValue2 = sobj.nextInt();
        Pattern pobj = new Pattern();
        pobj.print(iValue1, iValue2);
    }
}
