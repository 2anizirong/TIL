// 1037

import java.util.Scanner;
import java.util.Arrays;

public class Main
{
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int NDivisorCount = sc.nextInt();          // 약수의 개수
		int[] divisors = new int[NDivisorCount];
		
		for (int i = 0; i < NDivisorCount; i++) {
		    divisors[i] = sc.nextInt();
		}
		Arrays.sort(divisors);      // 약수들 오름차순 정렬
		
		int N = divisors[0] * divisors[divisors.length - 1];
		System.out.println(N);
	}
}
