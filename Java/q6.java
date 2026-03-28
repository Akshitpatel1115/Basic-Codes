// Write a JAVA program to solve problem of multiple inheritance using Interface.

interface dog {
    void dog_sound();
}

interface cat {
    void cat_sound();
}

public class q6 implements dog,cat{
    public void dog_sound(){
        System.out.println("Bark!!");
    }

    public void cat_sound(){
        System.out.println("Meow!!");
    }

    public static void main(String[] args) {
        q6 obj = new q6();
        obj.dog_sound();
        obj.cat_sound();
    }
}
