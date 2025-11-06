package DAY1;
import java.util.*;
public class PrimeNo {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter the N value :");
        int n=sc.nextInt();
        System.out.println("The prime number of "+n+"are");

        for(int i=2;i<=n;i++)
        {
            boolean isPrime=true;
            for(int j=2;j<=i/2;j++)
            {
              if(i%j==0)
              {
                  isPrime=false;
                  break;
              }
            }
            if (isPrime)
            {
                System.out.println(i+ ": Prime number");
            }
        }

    }
}
