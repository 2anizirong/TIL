// 1373

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String bin = sc.next(); // 2진수 입력

        while (bin.length() % 3 != 0) {     // 자리수 3개로 8진수로 변환
            bin = '0' + bin;
        }

        for (int i = 0; i < bin.length(); i += 3) {
            int oct = (bin.charAt(i) - '0') * 4 + (bin.charAt(i + 1) - '0') * 2 + (bin.charAt(i + 2) - '0');
            System.out.print(oct);
        }
    }
}
