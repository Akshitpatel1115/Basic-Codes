//  Create a method area (), overload it to calculate area of circle, rectangle and square.  

class Shape{
    void area(double radius){
        System.out.println("Area of circle : " + 3.14*radius*radius);
    }

    void area(double length, double breadth){
        System.out.println("Area of rectangle : " + length * breadth);
    }

    void area(int side){
        System.out.println("Area of sqaure : " + side * side);
    }
}

public class q4 {
    public static void main(String[] args) {
        Shape s1 = new Shape();

        s1.area(4.0);
        s1.area(10, 5);
        s1.area(5);
    }

}
