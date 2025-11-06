package DAY5;
import java. util.*;
public class DisariumNo
{
    public static void main(String[] args)
    {
     Scanner sc=new Scanner(System.in);
        System.out.println("Enter number :");
        int n=sc.nextInt();
        int digit=0;
        int m;
        while(n !=0)
        {
            n=n/10;
            digit++;
        }
       int sum=0;
        while(n!=0)
        {
            int rem=n%10;
            sum+=Math.pow(rem,digit);
            digit--;
            n=n/10;
        }
        if(sum==n)
        {
            System.out.println("Disarium number ");
        }
        else
        {
            System.out.println("not a disarium number ");
        }
    }
}
