import java.util.ArrayList;
import java.util.Scanner;
public class permutationString {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.println("Enter String for permutation:");
        //Enter your String
        String s = sc.next();
        ArrayList<String> ans = permutationList("", s);
        System.out.println(ans);
    }
    static ArrayList<String> permutationList(String p, String up){
        if(up.isEmpty()){
            ArrayList<String> list = new ArrayList<>();
            list.add(p);
            return list;
        }
        char ch = up.charAt(0);
        ArrayList<String> ans = new ArrayList<>();
        for(int i=0; i<= p.length(); i++){
            String f = p.substring(0,i);
            String s = p.substring(i, p.length());
            ans.addAll(permutationList(f+ch+s, up.substring(1)));

        }
        return ans;
    }
}
