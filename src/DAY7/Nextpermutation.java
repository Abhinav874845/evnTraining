package DAY7;

public class Nextpermutation
{
    public static void main(String[] args)
    {
        //int arr[] = {2, 4, 1, 7, 5, 0};
        int arr[]={4,3,2,1};
        int pivot = -1;
        int l = arr.length;
        for (int i = l - 2; i >= 0; i--)
        {
            if (arr[i] < arr[i + 1]) {
                pivot = i;
                break;
            }
        }
        if (pivot == -1)
        {
            int start = 0;
            int end = l - 1;
            while (start < end)
            {
                int temp = arr[start];
                arr[start] = arr[end];
                arr[end] = temp;
                start++;
                end--;
            }
        }
        else {
            System.out.println("pivot index is :" + pivot);
            //find the greater number
            for (int i = l - 1; i > pivot; i--)
            {
                if (arr[pivot] < arr[i])
                {
                    int temp = arr[i];
                    arr[i] = arr[pivot];
                    arr[pivot] = temp;
                    break;
                }
            }
            // reverse
            int start = pivot + 1;
            int end = l - 1;
            while (start < end)
            {
                int temp = arr[start];
                arr[start] = arr[end];
                arr[end] = temp;
                start++;
                end--;
            }
            for (int i = 0; i < l; i++)
            {
                System.out.print(" " + arr[i]);
            }
        }
        for (int i = 0; i < l; i++)
        {
            System.out.print(" " + arr[i]);
        }
    }
}
