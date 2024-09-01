// 1816

// 처음 잘 못 짠 코드
// 해당 코드는 for 문에서 j = 2일 때 한 번 돌고 break 때문에 그냥 멈춤..
// --> 홀수인지 짝수인지를 판단한 것 뿐이 된다..
import java.util.Scanner;

public class Main
{
	public static void main(String[] args) {
	    Scanner sc = new Scanner(System.in);
	    
	    int N = sc.nextInt();
	    for (int i = 0; i < N; i++) {
	        Long S = sc.nextLong();         // 10^12 ~ 10^18 의 값만 취급 --> 범위 Long
	    
	        for (int j = 2; j <= 1000000; j++) {
	            if (S % j == 0) {
	                System.out.println("NO");
	                break;          // 여기에서 나눌 수 있으면 NO
	            }
	            else {
	                System.out.println("YES");
	                break;
	            }
	        }
	    }
	}
}


// 새로 고친 코드
// sk라는 플래그 변수를 설정하기!
// 먼저 sk를 true로 초기화하고 10^6보다 작은 수로 S가 나눠 떨어지면 false로 바꾸는 식으로~
import java.util.Scanner;

public class Main
{
	public static void main(String[] args) {
	    Scanner sc = new Scanner(System.in);
	    
	    int N = sc.nextInt();
	    for (int i = 0; i < N; i++) {
	        Long S = sc.nextLong();         // 10^12 ~ 10^18 의 값만 취급 --> 범위 Long
	        
	        boolean sk = true;         // secret key에 적합한지를 따지는 sk
	        for (int j = 2; j <= 1000000; j++) {
	            if (S % j == 0) {
	                sk = false;
	                break;          // 여기에서 나눌 수 있으면 NO
	            }
	        }
	        if (!sk) System.out.println("NO");
	        else System.out.println("YES");
	    }
	}
}
