// You are given a sting str =”SDJ International College”. Perform the following operation on it.  
// ➢ Find the length of string  
// ➢ Replace the character ‘e’ by ‘E’  
// ➢ convert all character in uppercase

public class q7 {
    public static void main(String[] args) {
        String str ="SDJ International College";

        int len = str.length();
        System.out.println("Length of string : " + len);

        String new_str = str.replace("e","E");
        System.out.println("New String with replace char : " + new_str);

        String upp_str = str.toUpperCase();
        System.out.println("New String with all upper case latter : " + upp_str);
    }
}
