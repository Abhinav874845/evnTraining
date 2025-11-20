package DAY6;
import java.util.*;
public class Searching
{
    public static void main(String[] args)
    {
        Scanner sc=new Scanner(System.in);
        int [] arr={10,30,20,40,50,80};
        int key=40;
      for(int i=0;i<arr.length;i++)
      {
          if(arr[i]==key)
          {
              System.out.println("Element found at index "+i);
          }
      }
    }
}
