//Write a class file - box with three data members(length,width,height) and a method volume(). Also implement the 
//application class Demo is created with user entered dimensions and volume is printed.
import java.io.*;
class Box{
	int length,width,height;
	void volume(){System.out.print(length*width*height+" unit cube");}
	Box()throws IOException{
		DataInputStream ds=new DataInputStream(System.in);
		length=Integer.parseInt(ds.readLine());
		width=Integer.parseInt(ds.readLine());
		height=Integer.parseInt(ds.readLine());
	}
}
class Demo{
	void set()throws IOException{Box ob=new Box();ob.volume();}
}
class A{
	public static void main(String args[])throws IOException{
		Demo x=new Demo();
		x.set();
	}
}