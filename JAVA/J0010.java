// 1362

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int cnt = 1;

        while (true) {
            int o = sc.nextInt();
            int w = sc.nextInt();

            if (o == 0 && w == 0) break;

            boolean ok = true;
            char patAction;
            int n;

            while (true) {
                patAction = sc.next().charAt(0);        // 자바에서 char 입력하는 방법!
                n = sc.nextInt();

                if (patAction == '#' && n == 0) break;
                if (patAction == 'F') w += n;
                else if (patAction == 'E') w -= n;

                if (w <= 0) ok = false;
            }

            if (ok) {
                if (w > (o /2) && w < (o * 2)) System.out.println(cnt + " :-)"); 
                else System.out.println(cnt + " :-(");
            } 
            else System.out.println(cnt + " RIP");
            cnt++;
        }
    }
}
