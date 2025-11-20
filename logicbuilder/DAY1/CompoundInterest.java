package DAY1;
import java.util.*;
public class CompoundInterest
{
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter the principal value :");
        double P=sc.nextDouble();
        System.out.println("Enter the Rate value :");
        double R=sc.nextDouble();
        System.out.println("Enter the Time value :");
        double T=sc.nextDouble();
        double CI=(P*Math.pow((1+R/100),T))-P;
        System.out.println("The compound interest is "+CI);
    }
}
