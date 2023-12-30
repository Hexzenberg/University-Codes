//20/03/2023
//WAP to divide using try catch
import java.io.*;
class Q1{
    public static void main(String[] args)throws IOException{
        DataInputStream ds=new DataInputStream(System.in);
        int a=Integer.parseInt(ds.readLine()),b=Integer.parseInt(ds.readLine());
        try{
            int c=a/b;
            System.out.println(c);
        }
        catch(ArithmeticException ae){
            System.out.println(ae.getMessage());
        }
    }
}