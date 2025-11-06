package DAY1;
import java.util.*;
public class PerimeterOfRectangle
{
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter length value :");
        int length=sc.nextInt();
        System.out.println("Enter width value :");
        int width=sc.nextInt();
        int peri=2*(length+width);
        System.out.println("The perimeter of rectangle is "+peri);
    }
}
