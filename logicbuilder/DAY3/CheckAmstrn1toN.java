package DAY3;
import java.util.*;
public class CheckAmstrn1toN
{
    public static void main(String[] args)
    {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter range ");
        int n=sc.nextInt();
for(int i=1;i<=n;i++)
{
    int sum=0;
    int digit=0;
    int m=i;
    while(m!=0)
    {
        m=m/10;
        digit++;
    }
    m=i;
    while(m!=0)
    {
        int r=m%10;
        sum=sum+(int) Math.pow(r,digit);
        m=m/10;
    }
    if(sum==i)
    {
        System.out.println(i);
    }
}
    }
}

