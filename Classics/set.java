import java.util.Scanner;
import java.util.HashSet;

public class set {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int n = scan.nextInt();

        HashSet<Integer> set = new HashSet<>();

        for(int i=0; i<n; i++){
            int k = scan.nextInt();
            set.add(k);
        }

        System.out.println(set.size());
        scan.close();
    }
}