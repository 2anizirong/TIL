// 10811

import java.util.Scanner;

public class Main
{
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int N = sc.nextInt(); int M = sc.nextInt();
		int[] basket = new int[N];
		for (int i = 0; i < N; i++) {
		    basket[i] = i + 1;
		}
		
		for (int k = 0; k < M; k++) {           // M번 역순으로
		    int i = sc.nextInt(); int j = sc.nextInt();
		    int start = i - 1; int end = j - 1;
		    
		    while (start < end) {
                int tmp = basket[start];
                basket[start] = basket[end];
                basket[end] = tmp;
                
                start++; end--;
            }
		}
		
		for (int i = 0; i < N; i++) {
            System.out.print(basket[i] + " ");
        }
	}
}
