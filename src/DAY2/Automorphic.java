package DAY2;
import java.util.*;
public class Automorphic {
    public static void main(String[]args)
    {
    Scanner sc=new Scanner(System.in);
    System.out.println("Enter a number");
    int n=sc.nextInt();
    for(int i=1;i<n;i++)
    {
        int digit=0;
        int square=i*i;
        int m=i;
        while(m!=0)
        {
            m=m/10;
            digit++;
        }
        int temp=(int)Math.pow(10,digit);
        int result=square%temp;
        if(i==result)
        {
            System.out.println("Automorphic "+i);
        }

        }
    }
    }

