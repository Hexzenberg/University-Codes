//WAP to calculate area using user input, whether it is a circle or a square.
import java.io.*;
class Area{
	float s;int t;
	Area()throws IOException{
		DataInputStream ds=new DataInputStream(System.in);
		System.out.print("Enter the dimension:");
		s=Float.parseFloat(ds.readLine());
		System.out.println("Enter the type square=1,circle=2:");
		t=Integer.parseInt(ds.readLine());
		System.out.println(t==1?s*s+" sq. units":2*3.14f*s*s+" sq. units");
	}
}
class A{
	public static void main(String args[])throws IOException{Area x=new Area();}
}
