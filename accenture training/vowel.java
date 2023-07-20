import java.util.*;
public class vowel{
    public static void main(String[] args){
        Scanner s=new Scanner(System.in);
        String ptr=s.nextLine();
        String str=ptr.toLowerCase();
        int c=0;
        for(int i=0;i<str.length();i++){
            if(str.charAt(i)=='a'||str.charAt(i)=='e'||str.charAt(i)=='i'||str.charAt(i)=='o'||str.charAt(i)=='u'){
                c++;
            }
        }
        System.out.println(c);
    }
}