// 2751
// 시간초과 중요 문제!!

// 처음 코드
import java.util.Scanner;
import java.util.Arrays;

public class Main
{
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int N = sc.nextInt();
		
		int[] nums = new int[N];
		for (int i = 0; i < N; i++) {
		    nums[i] = sc.nextInt();
		}
		Arrays.sort(nums);
		
		for (int i = 0; i < N; i++) {
		    System.out.println(nums[i]);
		}
	}
}

// -----------------------------------------------------------------------------
// 시간 초과가 떠서 StringBuffer 쓰기로!!

import java.util.Scanner;
import java.util.Arrays;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();

        int[] nums = new int[N];
        for (int i = 0; i < N; i++) {
            nums[i] = sc.nextInt();
        }
        Arrays.sort(nums);

        StringBuffer sb = new StringBuffer();
        for (int i = 0; i < N; i++) {
            sb.append(nums[i]).append("\n");
        }

        System.out.print(sb.toString());
    }
}
