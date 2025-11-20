package DAY8;
import java .util.*;
public class MatrixMultiplication {
    public static void main(String[] args)
    {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter row1 value ");
        int row1=sc.nextInt();
        System.out.println("Enter col1 value ");
        int col1=sc.nextInt();
        System.out.println("Enter row2 value ");
        int row2=sc.nextInt();
        System.out.println("Enter col2 value ");
        int col2=sc.nextInt();

        int [][] m1=new int[row1][col1];
        int [][] m2=new int[row2][col2];
        int [][] m3=new int[col1][row2];
        if(col1==row2)
        {
            System.out.println("Enter the element in 1st matrix");
            for(int i=0;i<row1;i++)
            {
                for(int j=0;j<col1;j++)
                {
                    m1[i][j]=sc.nextInt();
                }
            }
            System.out.println("Enter the element in 2st matrix");
            for(int i=0;i<row2;i++)
            {
                for(int j=0;j<col2;j++)
                {
                    m2[i][j]=sc.nextInt();
                }
            }

            System.out.println("Matrix multiplication");
            for(int i=0;i<row1;i++)
            {
                for(int j=0;j<col2;j++)
                {
                    for(int k=0;k<row2;k++)
                    {
                        m3[i][j]=m3[i][j]+m1[i][k]*m2[k][j];
                    }
                }
            }
            for(int i=0;i<row1;i++)
            {
                for(int j=0;j<col2;j++)
                {
                    System.out.print(" "+m3[i][j]);
                }
                System.out.println();
            }
        }
        else
        {
            System.out.println("Can't multiply");
        }
    }
}