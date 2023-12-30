//27/02/23
//WAP to find the area of triangle circle and rectangle using multiple inheritance property
//using I->I->N
interface A{
    void ar(double a,double b,double c);
}
interface B{
    void are(double l,double b);
}
interface C{
    void area(double r);
}
class R implements A,B,C{
    public void ar(double a,double b,double c){
        if(a+b>=c&&b+c>=a&&a+c>=b){
            double s=(a+b+c)/2;
            System.out.println(Math.sqrt(s*(s-a)*(s-b)*(s-c)));
        }else System.out.println("Not a triangle");
    }
    public void are(double l,double b){System.out.println(0.5*l*b);}
    public void area(double r){System.out.println(3.14*r*r);}
}
class Q1{
    public static void main(String[] args) {
        R x=new R();
        x.ar(2,3,4);
        x.are(2,3);
        x.area(4);
    }
}