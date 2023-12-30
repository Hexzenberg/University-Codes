//WAP with constructor area() and display the area of circle,triangle and square as per the 
//user choice and entered dimensions.
import java.io.*;
class Area{
	float s;int t;
	Area()throws IOException{
		DataInputStream ds=new DataInputStream(System.in);
		System.out.print("Enter the dimension:");
		s=Float.parseFloat(ds.readLine());
		System.out.println("Enter the type square=1,circle=2,triangle=3:");
		t=Integer.parseInt(ds.readLine());
		System.out.println(t==1?s*s+" sq. units":t==2?2*3.14f*s*s+" sq. units":(float)(3/4)*s*s+" sq. units");
	}
}
class A{
	public static void main(String args[])throws IOException{Area x=new Area();}
}