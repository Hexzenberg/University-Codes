//WAP to define a class number with appropriate data members and member functions to input n number of integers
//and swap the biggest and smallest elements.
import java.io.*;
class Number{
    int n,max=0,min=Integer.MAX_VALUE;
    void read()throws IOException{
        DataInputStream ds=new DataInputStream(System.in);
        n=Integer.parseInt(ds.readLine());
    }
    void swap(Number[] ob,int m){
        int k=0,l=0;
        for(int i=0;i<m;i++){
            if(max<=ob[i].n){max=ob[i].n;k=i;}
            if(min>=ob[i].n){min=ob[i].n;l=i;}
        }ob[k].n=min;ob[l].n=max;
    }
    void display(){System.out.print(n+" ");}
}
class A{
    public static void main(String[] args)throws IOException{
        int n=1;
        DataInputStream ds=new DataInputStream(System.in);
        n=Integer.parseInt(ds.readLine());
        Number[] x=new Number[n];Number y=new Number();
        for(int i=0;i<n;i++){x[i]=new Number();x[i].read();}
        for(int i=0;i<n;i++)x[i].display();
        y.swap(x,n);System.out.println();
        for(int i=0;i<n;i++)x[i].display();
    }
}
