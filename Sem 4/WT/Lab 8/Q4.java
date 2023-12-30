//WAP to display array storage type exception
import java.io.*;
class Q4{
    public static void main(String[] args)throws IOException{
        DataInputStream ds=new DataInputStream(System.in);
        Integer[] a=new Integer[2],b=new Integer[2];
        for(int i=0;i<2;i++)a[i]=Integer.parseInt(ds.readLine());
        for(int i=0;i<2;i++)b[i]=Integer.parseInt(ds.readLine());
        try{
            Object[] o=a;o[0]=b;
            for(int i=0;i<2;i++)System.out.print(o[i]+" ");
        }catch(ArrayStoreException ae){
            System.out.println(ae.getMessage());
        }
    }
}