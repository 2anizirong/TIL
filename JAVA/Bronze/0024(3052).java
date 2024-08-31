// 3052

import java.util.Scanner;

public class Main
{
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int count = 0;
		boolean[] divide42 = new boolean[42];
		
		for (int i = 0; i < 10; i++) {
		    int num = sc.nextInt();
		    int remain = num % 42;
		    
		    if (!divide42[remain]) {
		        divide42[remain] = true;
		        count++;
		    }
		}
		System.out.println(count);
	}
