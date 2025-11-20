package DAY1;
import java.util.*;
public class CheckLargNo {
    public static void main(String[] args) {
      Scanner sc= new Scanner(System.in);
        System.out.println("Enter 1st number :");
        int num1= sc.nextInt();
        System.out.println("Enter 2nd number :");
        int num2=sc.nextInt();
        System.out.println("Enter 3rd number :");
        int num3=sc.nextInt();
        if(num1>num2 && num1>num3)
        {
            System.out.println("Num1 is greater :");
        }
        else if(num2>num1 && num2>num3)
        {
            System.out.println("Num2 is greater :");
        }
        else
        {
            System.out.println("num3 is greater :");
        }
    }
}
