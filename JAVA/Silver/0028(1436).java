// 1436

// 잘못된 코드. 메모리 초과
import java.util.Scanner;

public class Main
{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        
        int n = 0;
        int num = 0;
        String title = "";
        
        while (true) {
            n++;
            title = Integer.toString(n);      // 문제. while(true)를 통해 무한 루프.. title이 계속 재생성되는 게 무한 반복이 되는게 무리인 것 이라고 생각
            
            if (title.contains("666")) {        // contains함수는 대상 문자열에 특정 문자열이 포함되어 있는지 확인하는 함수
                if (num == N) {      // 문제. num의 제대로 된 업데이트가 되지 않고 있다..
                    break;
                }
            }
        }
        System.out.println(title);
    }
}


// 올바르게 고친 코드
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        
        int cnt = 0;          // '666'이 포함된 숫자의 개수
        int num = 666;        // num을 먼저 666으로 초기
        
        while (cnt < N) {      // 무한 루프를 돌리기 보다 조건을 통한 while문으로 구성하기
            String title = Integer.toString(num);
            
            if (title.contains("666")) {
                cnt++;
                if (cnt == N) {
                    break;
                }
            }
            num++;
        }        
        System.out.println(num);
    }
}
