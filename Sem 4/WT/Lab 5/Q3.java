//WAP for constructor subtract method with various parameters in a class.
import java.io.*;
class Subtract{
	Subtract(int x,int y){System.out.println(x-y); }
	Subtract(float x,float y){System.out.println(x-y); }
	Subtract(double x,double y){System.out.println(x-y); }
}
class A{
	public static void main(String args[])throws IOException{
		Subtract x=new Subtract(4,3),y=new Subtract(4.5f,3.2f),z=new Subtract(4.3,3.1);
	}
}