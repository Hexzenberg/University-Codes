//13.02.23
//WAP to show addition of 2 numbers if 1st number is negative assign 5 if 2nd number is negative assign 6
import java.io.*;
class A{
	A()throws IOException{
		float a,b;
		DataInputStream ds=new DataInputStream(System.in);
		a=Float.parseFloat(ds.readLine());
		b=Float.parseFloat(ds.readLine());
		if(a<0)a=5;if(b<0)b=6;
		System.out.print(a+b);
	}
}
class B{
	public static void main(String args[])throws IOException{
		A ob=new A();
	}
}