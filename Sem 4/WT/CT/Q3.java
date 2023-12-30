//Write a program to demonstrate the multiplication of two matrices.
public class Q3{
    public static void main(String[] args){
        int[][] a={{1,1,1},{1,1,1},{1,1,1}},b={{1,1,1},{1,1,1},{1,1,1}},r=new int[a.length][b[0].length];
        for(int i=0;i<a.length;i++)for(int j=0;j<b[0].length;j++)for(int k=0;k<b.length;k++)r[i][j]+=a[i][k]*b[k][j];
        for(int i=0;i<r.length;i++){
            for(int j=0;j<r[0].length;j++)System.out.print(r[i][j]+" ");
            System.out.println();
        }
    }
}

