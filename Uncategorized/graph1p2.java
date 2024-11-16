import java.util.*;
public class graph1p2 {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        
        int n = sc.nextInt();

        int[][] arr = new int[n][n];
        boolean[] visited = new boolean[n];
        int[] dis = new int[n];

        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                arr[i][j] = sc.nextInt();
            }
        }

        Queue<Integer> q = new LinkedList<>();
        q.add(0);
        visited[0] = true;
        dis[0] = 0;
        while(!q.isEmpty()){
            int cur = q.poll();
            for(int nxt=0; nxt<n; nxt++){
                int isConnected = arr[cur][nxt];
                if(isConnected == 1 && !visited[nxt]){
                    q.add(nxt);
                    visited[nxt] = true;
                    dis[nxt] = dis[cur] + 1;
                }
            }
        }

        System.out.println(dis[n-1]);
    }
}