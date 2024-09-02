// 7568

import java.util.Scanner;

public class Main
{
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		int N = sc.nextInt();       // 전체 사람의 수
		int[][] spec = new int[N][2];       // 각 사람의 몸무게, 키
		for (int i = 0; i < N; i++) {
		    spec[i][0] = sc.nextInt();      // x 몸무게
		    spec[i][1] = sc.nextInt();      // y 키
		}
		
		int[] rank = new int[N];        // 순위 매기기 배열
		for (int i = 0; i < N; i++) {
		    rank[i] = 1;        // 등수 초기화
		    for (int j = 0; j < N; j++) {
		        if(i != j) if ((spec[i][0] < spec[j][0]) && (spec[i][1] < spec[j][1])) rank[i]++;      // 몸무게, 키 모두 크면 덩치 +1
		    }
		}
		
		for (int i = 0; i < N; i++) System.out.print(rank[i] + " ");
	}
}
