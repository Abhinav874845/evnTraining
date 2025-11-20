package DAY1;
import java.util.*;
public class HCF {
    public static void main(String[] args)
    {
      Scanner sc= new Scanner(System.in);
        System.out.println("Enter 1st number :");
      double a=sc.nextInt();
        System.out.println("Enter 2nd number :");
        double b=sc.nextInt();
        double temp;
        while(b!=0){
            temp=b;
            b=a%b;
            a=temp;
        }
        System.out.println("The HCF is " +a);
    }
}
