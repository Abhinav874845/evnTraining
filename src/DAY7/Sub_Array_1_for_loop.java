package DAY7;

public class Sub_Array_1_for_loop {
    public static void main(String[] args)
    {
    int[] arr = {1, 2, -3, 5, 6, -4, -5};
    int result = arr[0];
    int maxend = arr[0];
    int l= arr.length;
    for(int i = 1;i<l; i++)
    {
    maxend=Math.max(maxend+arr[i],arr[i]);
    result=Math.max(result,maxend);
    }
        System.out.println(result);
}
}
