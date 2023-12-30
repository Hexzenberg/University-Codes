//Copy a file to another file
import java.io.*;
public class C{
    public static void main(String ar[])throws IOException{
        FileInputStream fin=null;
        FileOutputStream fout=null;
        try{
            fin=new FileInputStream("a.txt");
            fout=new FileOutputStream("b.txt");
            int ch;
            while((ch=fin.read())!=-1)fout.write((char)ch);
        }finally{
            fin.close();
            fout.close();
        }
    }
}