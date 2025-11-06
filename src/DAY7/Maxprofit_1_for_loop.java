package DAY7;

public class Maxprofit_1_for_loop
{
    public static void main(String[] args)
    {
    int [] arr={5,3,1,6,9,7,8};
    int min=arr[0];
    int profit=0;
    for(int i=1;i< arr.length;i++)
    {
        min=Math.min(min,arr[i]);
        profit=Math.max(profit,arr[i]-min);
    }
        System.out.println(profit);
    }
}
