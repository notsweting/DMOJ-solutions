import java.util.Scanner;
import java.util.TreeSet;

public class mald1p1 {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        TreeSet<String> k = new TreeSet<>();
        String[] urls = new String[10005];
        int n;
        boolean next = false;
        
        n = scan.nextInt();
        scan.nextLine(); // Consume the newline character
        
        for (int i = 1; i <= n; i++) {
            urls[i] = scan.nextLine();
            if (next) {
                k.add(urls[i]);
                next = false;
            }
            if (urls[i].contains("yubo")) {
                k.add(urls[i]);
                if(i > 1) k.add(urls[i - 1]);
                next = true;
            }
        }
        
        for (String l : k) {
            System.out.println(l);
        }
        
        scan.close();
    }
}