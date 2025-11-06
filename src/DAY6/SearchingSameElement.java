package DAY6;

public class SearchingSameElement {
    public static void main(String[] args)
    {
        int[] arr = {5, 6, 7, 5, 10, 11, 5, 5, 9, 6, 2, 2, 2};
        int key = 2;
        int count=0;
        for (int i = 0; i < arr.length; i++)
        {
        if(arr[i]==key)
        {
            count++;
        }
        }
        System.out.println("My "+ key+" value "+count +" times appears ");
    }
}
