package DAY1;
import java.util.*;
public class Fibonacci {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter N number :");
        int n=sc.nextInt();
        int a=0 ,b=1,temp =0;
        int sum=0;
        System.out.println("The fabonacci is :");

        while(a<=n) {

            if(a%2==0)
            {
            sum+=a;
            }
            System.out.println(a);
            temp = a + b;
            a = b;
            b = temp;
        }
        System.out.println("Sum of the fibonacci series is= "+sum);
    }
}
