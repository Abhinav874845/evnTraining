package DAY7;

public class Maxprofit
{
    public static void main(String[] args)
    {
        int[] arr = {5, 3, 1, 6, 9, 8};
        int profit = 0;
        for(int i=0;i< arr.length-1;i++)
        {
            for(int j=i+1;j< arr.length;j++)
            {
                profit=Math.max(profit,arr[j]-arr[i]);
            }
        }
        System.out.println(profit);
    }
}
