//Write to a file
import java.io.*;
class A{
    public static void main(String ar[])throws IOException{
        char ch=' ';
        DataInputStream ds=new DataInputStream(System.in);
        FileOutputStream fout=null;
        try{
            fout=new FileOutputStream("a.txt");
            while((ch=(char)ds.read())!='#')fout.write(ch);
        }catch(Exception f){f.getMessage();} 
        finally{
            fout.close();
        }
    }
}