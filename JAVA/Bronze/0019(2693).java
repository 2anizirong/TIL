// 2693

import java.util.Scanner;
import java.util.Arrays;

public class Main
{
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int T = sc.nextInt();       // 테스트 케이스
		
		for (int i = 0; i < T; i++) {
		    int[] A = new int[10];
		    for (int j = 0; j < 10; j++) {
		        A[j] = sc.nextInt();
		    }
		    Arrays.sort(A);
		    System.out.println(A[7]);
		}
	}
}
