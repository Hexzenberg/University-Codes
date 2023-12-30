//Write a program in which a super class ‘Course’ is defined with the following details:
//Data members: (i) credit (int variable) (ii) medium
//Method: (i) number() to calculate the total number of students registered for the course. 
//If the number is exceeding the minimum number defined (let say 2 students), the course will be floated otherwise not.
//(ii) display() that shows whether the course is floated.
//Derived the subclass for two courses, namely courseA and courseB that would show the total 
//number of students registered for these courses and the course details.
class Course{
    int credit,r,m;String medium;
    Course(int credit, String medium, int m){this.credit=credit;this.medium=medium;this.m=m;}
    void number(int r){this.r=r;}
    void display(){System.out.println(r>=m?"The " + medium + " course with " + credit + " credits is floated.":"The " + medium + " course with " + credit + " credits is not floated.");}
}
class CourseA extends Course{
    public CourseA(){
        super(3, "Course A", 2);
    }
}
class CourseB extends Course{
    CourseB(){super(2, "Course B", 3);}
}
class Q2{
    public static void main(String[] args){
        CourseA x=new CourseA();
        x.number(3);x.display();
        CourseB y=new CourseB();
        y.number(2);y.display();
    }
}
