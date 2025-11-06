package DAY2;
import java.util.*;
public class Problem2
{
    public static void main(String[] args)
    {
       Scanner sc=new Scanner (System.in);
        System.out.println("Enter number :");
        int n=sc.nextInt();
        int digit=0;
        int t=n;
        int sum=0;
        while(t!=0)
        {
            t=t/10;
            digit++;
        }
        System.out.println("The number of digit is :"+digit);
        t=n;
        while(t!=0)
        {
            int r=t%10;
            sum=sum+(int)Math.pow(r,digit);
           t= t/10;
        }
        if(sum==n)
        {
            System.out.println("The number "+sum+" is Amstorng number :" );
        }
        else
        {
            System.out.println("This is not a Amstrong number :");
        }
    }
}
