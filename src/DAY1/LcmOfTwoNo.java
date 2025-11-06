package DAY1;

import java.util.*;
public class LcmOfTwoNo {
    public static void main(String[] args) {
       Scanner sc= new Scanner(System.in);
        System.out.println("Enter numbers  :");
       int a=sc.nextInt();
       int b=sc.nextInt();
       int max;
       int lcm;
       if(a>b) {
           max = a;
       }
       else {
           max = b;
       }
       while(true)
       {
           if(max % a==0 && max % b==0)
           {
               lcm=max;
               break;
           }
           max ++;
       }
        System.out.println("Lcm of two number is :");
        System.out.println(lcm);
    }
}
