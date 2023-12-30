import java.io.*;
class Fi{
		int fi(int a){
			return((a==0)?0:((a==1)?1:(fi(a-1)+fi(a-2))));
		}
}
class Ar{
	void arm(int n){
		int a=0,s=n,r=0,b;
		r=(int)(Math.log10(n)+1);  
    	while(n>0){
    	    b=n%10;
    	    a+=(Math.pow(b,r));
    	    n/=10;
    	}
		System.out.println((a==s)?"Armstrong Number":("Non Armstrong number"));
		}
}
public class Jan__30{
	public static void main(String[] args)throws IOException{
		int a;
		Fi x=new Fi();
		DataInputStream ds=new DataInputStream(System.in);
		a=Integer.parseInt(ds.readLine());
		// for(int i=0;i<a;i++){
        //     	int c=x.fi(i);
		// 	System.out.print(c+" ");
		// }
		Ar ob=new Ar();
		ob.arm(a);
	}
}
