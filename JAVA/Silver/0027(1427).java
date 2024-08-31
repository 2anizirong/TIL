// 1427

import java.util.Scanner;
import java.util.Arrays;

public class Main
{
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		String nums = sc.next();
		// 숫자도 문자의 한 형태이므로 아스키 코드로 하면 toCharArray를 이용할 수 있을 것이라 생각
		char[] numArray = nums.toCharArray();       // 입력한 문자열 형태의 수들을 문자 배열로
		
		Arrays.sort(numArray);          // 문자 배열 오름차순 정렬 (이 sort 함수를 이용하여 오름차순으로 만들고 거꾸로 출력하기)
		for (int i = numArray.length - 1; i >= 0; i--) {
		    System.out.print(numArray[i]);
		}
	}
}
