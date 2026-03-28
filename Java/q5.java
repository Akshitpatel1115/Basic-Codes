//  WAJP to create an interface area. Create three classes called rectangle, triangle, and square 
// calculate areas respectively. 

interface Area {
    void calculateArea();
}

class Rectangle implements Area {
    double length, breadth;

    Rectangle(double l, double b) {
        length = l;
        breadth = b;
    }

    public void calculateArea() {
        double area = length * breadth;
        System.out.println("Area of Rectangle = " + area);
    }
}

class Triangle implements Area {
    double base, height;

    Triangle(double b, double h) {
        base = b;
        height = h;
    }

    public void calculateArea() {
        double area = 0.5 * base * height;
        System.out.println("Area of Triangle = " + area);
    }
}

class Square implements Area {
    double side;

    Square(double s) {
        side = s;
    }

    public void calculateArea() {
        double area = side * side;
        System.out.println("Area of Square = " + area);
    }
}

public class q5 {
    public static void main(String[] args) {
        Area r = new Rectangle(10, 5);
        Area t = new Triangle(8, 4);
        Area s = new Square(6);

        r.calculateArea();
        t.calculateArea();
        s.calculateArea();
    }
}