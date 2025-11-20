package DAY1;
import java.util.*;
public class CheckLeapYear {
    public static void main(String[] args) {
        Scanner sc= new Scanner(System.in);

        System.out.println("Enter he year :");
        int year=sc.nextInt();
        if(year%4==0){
            if(year%100==0) {
                if (year % 400 == 0)
                {
                    System.out.println(year +" this is leap year");
                }
                else
                    System.out.println(year+" not a leap year");
            }
            else
                System.out.println( year+ " this is leap year");
        }
        else
            System.out.println(year+ " this is not a leap year ");
    }
}
