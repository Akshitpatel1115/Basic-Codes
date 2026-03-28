// WAJP that reads two integers and display their division. Handle Arithmetic Exception. 

public class q8 {
    public static void main(String[] args) {
        try{
            int a = 10;
            int b = 0;
            int c = a/b;
            System.out.println(c);
        }catch(Exception ArithmeticException){
            System.out.println(ArithmeticException);
        }

        System.out.println("Rest of code..");
    }
}
