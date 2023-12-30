//WAP to input and display details of n students having roll number, name and cgpa as data members. 
//Display name of the student with lowest CGPA
import java.io.*;
class Student{
    float cgpa;int roll;String name;
    void set()throws IOException{
        DataInputStream ds=new DataInputStream(System.in);
        name=ds.readLine();
        roll=Integer.parseInt(ds.readLine());
        cgpa=Float.parseFloat(ds.readLine());
    }
    void disp(){
        System.out.println("Name: "+name);
        System.out.println("Roll Number: "+roll);
        System.out.println("CGPA: "+cgpa);
    }
}
class A{
    public static void main(String[] args)throws IOException{
        int n=1,m=0;
        DataInputStream ds=new DataInputStream(System.in);
        n=Integer.parseInt(ds.readLine());
        Student[] x=new Student[n];
        for(int i=0;i<n;i++){x[i]=new Student();x[i].set();}
        for(int i=0;i<n;i++)x[i].disp();
        for(int i=1;i<n;i++)if(x[m].cgpa>x[i].cgpa)m=i;
        System.out.println("The name of student with lowest cgpa: "+x[m].name);
    }
}
