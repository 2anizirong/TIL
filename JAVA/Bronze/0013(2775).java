// 2775

import java.util.Scanner;

public class Main
{
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		int T = sc.nextInt();       // 테스트 케이스
		
		int k, n;
		for (int i = 0; i < T; i++) {
		    k = sc.nextInt();
		    n = sc.nextInt();
		    int [][] apartment = new int[k + 1][n + 1];     // 층이 0부터 시작
		    
		    // 0층의 i호에는 i명이 산다.
            for (int j = 1; j <= n; j++) {
                apartment[0][j] = j;
            }
            
            // 각 층과 호의 사람 수를 계산
            for (int l = 1; l <= k; l++) {
                for (int m = 1; m <= n; m++) {
                    apartment[l][m] = apartment[l][m - 1] + apartment[l - 1][m];
                }
            }
            System.out.println(apartment[k][n]);
		}
	}
}
