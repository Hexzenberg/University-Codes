//Wap to check if the year is a leap year or not. Also swap the 1st and last digit of the leap year using different class.
import java.io.*;
class Sw{
    void swap(int y){
        System.out.print("The entered year is: "+y);
        int r=(y/1000),g=y%10,a=g-r,b=r-g;
        y+=(a*1000);y+=b;
        System.out.print("\nThe Number after swap: "+y);
    }
}
class Le{
    void leap(int y){
        if((y%4==0&&y%100!=0)||y%400==0){
            System.out.print("Leap Year");
            Sw x=new Sw();
            x.swap(y);
        }
        else{System.out.print("Non Leap Year");}
    }
}
class CT{
	public static void main(String[] args)throws IOException{
			int a;
			DataInputStream ds=new DataInputStream(System.in);
			a=Integer.parseInt(ds.readLine());
            Sw y=new Sw();
            y.swap(a);
	}
}
