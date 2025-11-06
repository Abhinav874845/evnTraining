package DAY1;
import java.util.*;
public class SimpleInterest
{
    public static void main(String[] args) {
        Scanner sc =new Scanner(System.in);
        System.out.println(" Enter principal value :");
        double P=sc.nextDouble();
        System.out.println("Enter Rate value :");
        double R=sc.nextDouble();
        System.out.println("Enter Time value :");
        double T=sc.nextDouble();
        double SI=(P*R*T)/100;
        System.out.println("The simple interest is "+SI);
    }
}
