// 4344

import java.util.Scanner;

public class Main
{
	public static void main(String[] args) {
	    Scanner sc = new Scanner(System.in);
        
        int C = sc.nextInt();       // 테스트 케이스
        
        for (int i = 0; i < C; i++) {
            int N = sc.nextInt();   // 학생의 수
            int[] scores = new int[N];      // 학생들의 점수
            
            int sum = 0;
            for (int j = 0; j < N; j++) {
                scores[j] = sc.nextInt();
                sum += scores[j];
            }
            double average = (double) sum / N;
            
            int count = 0;
            for (int j = 0; j < N; j++) {
                if (scores[j] > average) {
                    count++;
                }
            }
            double percentage = (double) count / N * 100;
            
            // 반올림하여 소수점 셋째자리까지 출력하기
            System.out.printf("%.3f%%\n", percentage);
        }
	}
}
