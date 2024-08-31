// 1145

import java.util.Scanner;

public class Main
{
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		int[] fiveNum = new int[5];
		for (int i = 0; i < 5; i++) {
		    fiveNum[i] = sc.nextInt();
		}
		
		int result = 1;
		boolean answer = false;
		
		while (!answer) {
		    int cnt = 0;
		    for (int i = 0; i < 5; i++) {
		        if (result % fiveNum[i] == 0) {
		            cnt++;
		        }
		    }
		    if (cnt >= 3) {
		        answer = true;
		    }
		    else result++;
		}
		System.out.println(result);
	}
}
