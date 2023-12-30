//Write to a file using buffer
import java.io.*;
public class D{
    public static void main(String ar[]) throws IOException{
        FileOutputStream fout=null;
        DataInputStream ds=new DataInputStream(System.in);
        BufferedOutputStream bout=null;
        try{
            fout=new FileOutputStream("a.txt",false);
            bout=new BufferedOutputStream(fout,11);
            char ch;
            System.out.println("Enter a string ending with ~");
            while((ch=(char)ds.read())!='~') bout.write(ch);
        }finally{
            fout.close();
        }
    }
}