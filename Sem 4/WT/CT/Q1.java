//06/03/23  
//Illustrate the usage of abstract class with following Java classes –
//i>An abstract class “Student‟ with data member roll no, reg no and a abstract method course()
//ii>A subclass “Kiitian” with course() method implementation
abstract class Student{
    int roll_no,reg_no;
    abstract void course();
}
class Kiitian extends Student{
    void course(){System.out.println("KIIT");}
} 
class Q1{
    public static void main(String[] args){Kiitian x=new Kiitian();x.course();}
}