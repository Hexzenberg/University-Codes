//WAP to define class Rectangle having length and width data members to calculate area and perimeter 
//using member functions.
import java.io.*;
class Rectangle{
    float length,width,area,p;
    Rectangle()throws IOException{
        DataInputStream ds=new DataInputStream(System.in);
        length=Float.parseFloat(ds.readLine());
        width=Float.parseFloat(ds.readLine());
    }
    void area(){area=length*width;p=2*(length+width);}
    void display(){System.out.println("Area: "+area+" sq. units\nPerimeter: "+p+" units");}
}
class A{
    public static void main(String[] args)throws IOException{
        Rectangle x=new Rectangle();
        x.area();x.display();
    }
}
