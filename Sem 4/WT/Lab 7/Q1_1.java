//WAP to find the area of triangle circle and rectangle using multiple inheritance property
//using I->N->N
interface A{
    void ar(double a,double b,double c);
}
class B{
    void are(double l,double b){System.out.println(0.5*l*b);}
}
class R extends B implements A{
    public void ar(double a,double b,double c){
        if(a+b>=c&&b+c>=a&&a+c>=b){
            double s=(a+b+c)/2;
            System.out.println(Math.sqrt(s*(s-a)*(s-b)*(s-c)));
        }else System.out.println("Not a triangle");
    }
    void area(double r){System.out.println(3.14*r*r);}
}
class Q1_1{
    public static void main(String[] args) {
        R x=new R();
        x.ar(2,3,4);
        x.are(2,3);
        x.area(4);
    }
}