//Read from a file
import java.io.*;
public class A{
    public static void main(String ar[])throws IOException{
        FileInputStream fin=null;
        try{
            fin=new FileInputStream("a.txt");
            int ch;
            while((ch=fin.read())!=-1) System.out.print((char)ch);
        }finally{
            fin.close();
        }
    }
}