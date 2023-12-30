//WAP in java using inheritance to show how to call the base class parameterized constructors from the 
//derived class using super. 
class A{
    int x;
    A(int x){this.x=x;System.out.println("Class A constructor called with x:"+x);}
}
class B extends A{
    String str;
    B(int x){super(x);System.out.println("B class constructor called with x:"+x);}
}
public class Q4{
    public static void main(String[] args){B x=new B(10);}
}
