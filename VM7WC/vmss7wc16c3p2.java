import java.util.*;

public class vmss7wc16c3p2 {
    
    public static void main(String[] args) {
        ArrayList<Integer>[] adj = new ArrayList[2001];
        boolean[] visited = new boolean[2001];
        
        Scanner scan = new Scanner(System.in);
        int n = scan.nextInt();
        int m = scan.nextInt();
        int a = scan.nextInt();
        int b = scan.nextInt();

        for(int i = 0; i < 2001; i++){
            adj[i] = new ArrayList<>();
        }

        for(int i=0; i<m; i++){
            int u = scan.nextInt();
            int v = scan.nextInt();
            adj[u].add(v);
            adj[v].add(u);
        }

        Queue<Integer> q = new LinkedList<>();
        visited[a] = true;
        q.add(a);

        while(!q.isEmpty()){
            int cur = q.poll();
            for(int nxt : adj[cur]){
                if(!visited[nxt]){
                    visited[nxt] = true;
                    q.add(nxt);
                }
            }
        }
        
        if(visited[b]){
            System.out.println("GO SHAHIR!");
        } else {
            System.out.println("NO SHAHIR!");
        }
        
        scan.close();
    }
}