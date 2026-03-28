// Define a class called Student. Store roll no. & name of the student. Define member functions to 
// assign & display value of roll no. & name

class Student{
    int rollno;
    String name;

    void set_data(int r, String n){
        rollno = r;
        name = n;
    }

    void get_data(){
        System.out.println("Student Roll No : " + rollno);
        System.out.println("Student Name : " + name);
        System.out.println("\n");
    }
}

public class q3 {
    public static void main(String[] args) {
        Student s1 = new Student();
        Student s2 = new Student();
        Student s3 = new Student();

        s1.set_data(101, "Akshit");
        s1.get_data();

        s2.set_data(102, "Kalp");
        s2.get_data();

        s3.set_data(103, "Vansh");
        s3.get_data();
    }
}
