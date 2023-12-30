//Wap to check if the number is armstrong number or not if armstrong then display your info like Name, Roll and college name using different class
import java.io.*;
class Ar{
	int arm(int n){
		int a=0,r=0,s=n;
    	r=(int)(Math.log10(n)+1);
    	while(n>0){
    	    int b=n%10;
    	    a+=(Math.pow(b,r));
    	    n/=10;
    	}
		System.out.print(a==s?"Armstrong Number\n":"Non Armstrong number\n");
		return(a==s?1:0);
		}
}
class B{
	void p(int a){
		Ar x=new Ar();
		int y=x.arm(a);
		if(y==1){
			System.out.print("Nikhil "+" 2105760 "+" KIIT University");
		}else{
			System.out.print("No info");
		}
	}
}
class ClassTest{
	public static void main(String[] args)throws IOException{
			int a;
			DataInputStream ds=new DataInputStream(System.in);
			a=Integer.parseInt(ds.readLine());
			B y=new B();
			y.p(a);
		}
	}
