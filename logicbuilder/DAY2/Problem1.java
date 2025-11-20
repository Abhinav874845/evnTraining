package DAY2;
import java.util.*;
public class Problem1
{
    public static void main(String[] args) {
      Scanner sc =new Scanner(System.in);
        System.out.println("Enter number :");
        long n=sc.nextInt();
int sum=0;
        for(int i=1; i<n;i++) {
            int flag = 0;
            for (int j = 2; j < i; j++) {
                if (i % j == 0) {
                    flag = 1;
                    break;
                }
            }
            if (flag == 0) {
                System.out.println(i+" ");
                 sum=sum+i;
            }
        }
        System.out.println(sum);
    }
}
