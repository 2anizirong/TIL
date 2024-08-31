// 1110

import java.util.Scanner;

public class Main
{
	public static void main(String[] args) {
	    Scanner sc = new Scanner(System.in);
	    
		String input = sc.next();
		String num = input;
		int cycleLength = 0;
		
		// 주어진 수가 두 자리 수가 아니면 앞에 0 추가
		if (num.length() < 2) num = '0' + num;
		String initialNum = num;
		
		do {
		    char[] charNum = num.toCharArray();     // [0]은 십의 자리, [1]은 일의 자리
		
		    int tens = charNum[0] - '0';
	        int units = charNum[1] - '0';
	        int sum = tens + units;
	        // 새로운 수 생성
            num = String.valueOf(units) + String.valueOf(sum % 10);
            cycleLength++;
		} while (!num.equals(initialNum));
		
		System.out.println(cycleLength);
	}
}
