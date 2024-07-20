// 5622

import java.util.Scanner;

public class Main
{
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		String str = sc.next();
		
		char[] words = new char[str.length()];
		int cnt = 0;
		for (int i = 0; i < str.length(); i++) {
    		words[i] = str.charAt(i);
    		if (words[i] == 'A' || words[i] == 'B' || words[i] == 'C') cnt += 3;
    		else if (words[i] == 'D' || words[i] == 'E' || words[i] == 'F') cnt += 4;
    		else if (words[i] == 'G' || words[i] == 'H' || words[i] == 'I') cnt += 5;
    		else if (words[i] == 'J' || words[i] == 'K' || words[i] == 'L') cnt += 6;
    		else if (words[i] == 'M' || words[i] == 'N' || words[i] == 'O') cnt += 7;
    		else if (words[i] == 'P' || words[i] == 'Q' || words[i] == 'R' || words[i] == 'S') cnt += 8;
    		else if (words[i] == 'T' || words[i] == 'U' || words[i] == 'V') cnt += 9;
    		else if (words[i] == 'W' || words[i] == 'X' || words[i] == 'Y' || words[i] == 'Z') cnt += 10;
		}
		System.out.println(cnt);
	}
}
