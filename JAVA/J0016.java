// 9093
// 자꾸 시간초과로 애쓴 문제...
// StringBuffer을 사용하자!!

import java.util.Scanner;

public class Main
{
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
        
        int T = sc.nextInt();       // 테스트 케이스
        sc.nextLine(); // 버퍼 비우기 (첫 번째 개행 문자 소비)
        
        // 시간 초과를 막기 위해 결과를 저장할 StringBuffer
        StringBuffer sb = new StringBuffer();
        
        for (int i = 0; i < T; i++) {
            String sentence = sc.nextLine();
            String[] words = sentence.split(" ");       // 공백으로 단어 분리
            
            for (int j = 0; j < words.length; j++) {
                String word = words[j];
                
                for (int k = word.length() - 1; k >= 0; k--) {
                    sb.append(word.charAt(k));
                }
                
                if (j < words.length - 1) {
                    sb.append(" ");
                }
            }
            sb.append("\n");
        }
        System.out.print(sb.toString());
	}
}
