// WAJP to print Java, C++, C with time interval of 5 seconds.

class myThread extends Thread{
    public void run(){
        System.out.println("C");
        try{
            Thread.sleep(5000);
        }catch(Exception e){
            System.out.println(e);
        }
        
        System.out.println("C++");
        try{
            Thread.sleep(5000);
        }catch(Exception e){
            System.out.println(e);
        }

        System.out.println("JAVA");
        try{
            Thread.sleep(5000);
        }catch(Exception e){
            System.out.println(e);
        }
    }
}

public class q9{
    public static void main(String[] args) {
        myThread t1 = new myThread();
        t1.start();
    }
}