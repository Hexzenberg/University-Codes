// 06/02/23
//1. write a java program to check given input is armstrong number or not if number is armstrong 
//   then swap first and last digit of numner using another class.
import java.io.*;
class Sw{
    void swap(int y){
        System.out.print("The entered number is: "+y);
        int x=(int)(Math.log10(y)),t=10,m=(int)Math.pow(t,x),r=(y/m),g=y%10,a=g-r,b=r-g;
        y+=(a*m);y+=b;
        System.out.print("\nThe Number after swap: "+y);
    }
}
class Ar{
	void arm(int n){
        Sw x=new Sw();
		int a=0,s=n,r=0,b,c=n;
		r=(int)(Math.log10(n)+1);  
    	while(n>0){b=n%10;a+=(Math.pow(b,r));n/=10;}
		if(a==s){System.out.print("Armstrong number\n");x.swap(c);}
        else System.out.print("Non Armstrong Number\n");
	}
}
class Q1{
	public static void main(String[] args)throws IOException{
			int a;
			DataInputStream ds=new DataInputStream(System.in);
			a=Integer.parseInt(ds.readLine());
            Ar y=new Ar();
            y.arm(a);
	}
}
