package DAY3;
import java.sql.SQLOutput;
import java.util.*;
public class NeonRange
{
    public static void main(String[] args)
    {
        Scanner sc=new Scanner(System.in);

        System.out.println("Enter range ");
        int num=sc.nextInt();
        for(int i=1;i<num;i++)
        {
           int sum=0 ;
            int square=i*i;

            while(square!=0)
            {
                int r=square%10;
               sum=sum+r;
               square=square/10;
            }
            if(sum==i)
            {
                System.out.println(i);
            }
        }
    }
}
