package DAY1;
import java.sql.SQLOutput;
import java.util.*;
public class NeonNo {
    public static void main(String[] args)
    {
        Scanner sc =new Scanner(System.in);
        System.out.println("Enter the number : ");
        int num =sc.nextInt();
        int square=num*num;
        int sum=0;
        while(square>0)
        {
            sum=sum+(square%10);
            square=square/10;

        }
        if(sum==num)
        {
            System.out.println("This is a neon number ");
        }
        else {
            System.out.println("This is not a neon number ");
        }
    }
}
