//2. write a java program to check number is perfect number or not if number is perfect number 
//   then disdplay your information using different class also your information is user input.
import java.io.*;
class A{
	void show()throws IOException{
		String a;
		DataInputStream ds=new DataInputStream(System.in);
		a=ds.readLine();
		System.out.print(a);
	}
}
class B{
	void perfect() throws IOException{
		DataInputStream ds=new DataInputStream(System.in);
		int a=Integer.parseInt(ds.readLine()),s=0,b=1;
		while(b<=((int)Math.sqrt(a)+1)){if(a%b==0)s+=b;b++;}
		if(a==s){
			System.out.print("Perfect Number\n");
			A x=new A();x.show();
		}else System.out.print("Not a perfect number\n");
	}
}
class Q2{
	public static void main(String args[])throws IOException{
		B x=new B();
		x.perfect();
	}
}