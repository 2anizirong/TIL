// 1356

import java.util.Scanner;

public class Main
{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String number = sc.next();

        boolean Eugene = false;

        // 문자열을 두 부분으로 나누는 모든 경우
        for (int i = 1; i < number.length(); i++) {
            String part1 = number.substring(0, i);
            String part2 = number.substring(i);

            int product1 = 1;
            int product2 = 1;

            // 앞부분의 자리수 곱 계산
            for (int j = 0; j < part1.length(); j++) {
                product1 *= (part1.charAt(j) - '0');
            }

            // 뒷부분의 자리수 곱 계산
            for (int j = 0; j < part2.length(); j++) {
                product2 *= (part2.charAt(j) - '0');
            }

            // 두 부분의 곱이 같으면 유진수
            if (product1 == product2) {
                Eugene = true;
                break;
            }
        }

        if (Eugene) System.out.println("YES");
        else System.out.println("NO");
    }
}
