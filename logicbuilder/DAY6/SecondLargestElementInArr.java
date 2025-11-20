package DAY6;

public class SecondLargestElementInArr
{
    public static void main(String[] args)
    {
        int [] arr={10,20,40,30,60,60,60};
        int s=-1;
        int l=-1;
        for(int i=0;i<arr.length;i++)
        {
            if(arr[i]>l)
            {
                s=l;
                l=arr[i];
            }
            else if(arr[i]>s && arr[i]!=l)
            {
                s=arr[i];
            }
        }
        System.out.println("Second largest Element is " +s);
    }

}
