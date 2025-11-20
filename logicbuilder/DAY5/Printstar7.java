package DAY5;
import java.util.*;
public class Printstar7 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.println("Enter no");
        int n = sc.nextInt();
        // upper side print star
for(int i=1;i<=n;i++)
{
    for(int j=n-1;j>=i;j--)
    {
        System.out.print(" ");
    }
    for(int k=1;k<=i;k++)
    {
        System.out.print(" *");
    }
    System.out.println();
}

//down side print star
for(int i=1;i<=n;i++)
{
    for(int j=1;j<=i;j++)
    {
        System.out.print(" ");
    }
    for(int k=n-1;k>=i;k--)
    {
        System.out.print(" *");
    }
    System.out.println();
}
    }
}
