package DAY2;
import java.util.*;
public class Palindrome {
    public static void main(String[]args)
    {
        Scanner sc=new Scanner(System.in);
       System.out.println("Enter a number :");
       int n=sc.nextInt();

       int original=n,reverse=0;
       while(n>0)
       {
        int digit=n%10;
        reverse=reverse*10+digit;
        n/=10;
       }
       if(original==reverse)
       {
        System.out.println(original+" is a palindrome number :");
       }
       else
       System.out.println(original+" is not a palindrome number :");
    }
}
