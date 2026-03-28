// WAJP to create a Player class. Inherit the classes Cricket _Player, Football _Player and Hockey_ 
// Player from Player class. 

class Player{
    void show(){
        System.out.println("Hello from player class.");
    }
}

class Cricket_Player extends Player{
    void show(){
        System.out.println("Hello from Cricket_Player class.");
    }
}

class Football_Player extends Player{
    void show(){
        System.out.println("Hello from Football_Player class.");
    }
}

class Hockey_Player extends Player{
    void show(){
        System.out.println("Hello from Hockey_Player class.");
    }
}

public class q2 {
    public static void main(String args[]){
        Cricket_Player objc = new Cricket_Player();
        objc.show();

        Football_Player objf = new Football_Player();
        objf.show();

        Hockey_Player objh = new Hockey_Player();
        objh.show();
    }
}