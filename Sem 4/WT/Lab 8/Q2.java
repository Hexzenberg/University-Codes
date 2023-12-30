//WAP to add 2 1D array and store in another array whose size is < 1st array
import java.io.*;
class Q2{
    public static void main(String[] args)throws IOException{
        DataInputStream ds=new DataInputStream(System.in);
        int n=Integer.parseInt(ds.readLine()),m=Integer.parseInt(ds.readLine()),k=Integer.parseInt(ds.readLine());
        int[] a=new int[n],b=new int[m],c=new int[k];
        for(int i=0;i<n;i++)a[i]=Integer.parseInt(ds.readLine());
        for(int i=0;i<m;i++)b[i]=Integer.parseInt(ds.readLine());
        try{
            for(int i=0;i<n;i++)c[i]=a[i]+b[i];
            for(int i=0;i<n;i++)System.out.print(c[i]+" ");
        }
        catch(ArrayIndexOutOfBoundsException e){
            System.out.println(e.getMessage());
        }
    }
}