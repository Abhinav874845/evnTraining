package DAY1;
import java.util.*;
public class SumOfEvenNO
{
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter start no :");
        int start=sc.nextInt();
        System.out.println("Enter end no :");
        int end=sc.nextInt();
       int sum=0;
      for(int i=start;i<=end;i++)
      {
          if(i%2==0){
              sum=sum+i;
          }
      }
        System.out.println("The sum os even no is :"+sum);
    }
}
