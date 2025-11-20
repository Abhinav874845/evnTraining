package DAY1;
import java.util.*;
public class CheckVowel
{
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter alphabet :");
        char ch =sc.next().charAt(0);
      if((ch>='a' && ch<='z') ||(ch>='A' && ch<='Z'))
      {
          if(ch=='a'|| ch=='e'|| ch=='i'|| ch=='o'|| ch=='u'|| ch=='A'|| ch=='E'|| ch=='I'|| ch=='O'|| ch=='U')
          {
              System.out.println("This is a vowel");
          }
          else
          {
              System.out.println("This is not a vowel ");
          }
      }
      else
      {
          System.out.println("This is not a character");
      }

    }
}
