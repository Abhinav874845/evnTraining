package DAY4;
import java.util.*;
public class PrintStar5
{
    public static void main(String[] args)
    {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enet number ");
        int n=sc.nextInt();

    for(int i=1 ;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            System.out.print("   ");
        }
        for(int k=5;k>=i;k--)
        {
            System.out.print(" * ");
        }
        System.out.println();

    }
    }
}
