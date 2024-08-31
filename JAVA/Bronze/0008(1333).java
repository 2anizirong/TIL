// 1333

import java.util.Scanner;

public class Main
{
	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		
		int N=sc.nextInt();     // 곡의 개수
		int L=sc.nextInt();     // 각각의 곡의 길이
		int D=sc.nextInt();     // 전화벨 간격

		int totalTime=N*L+(N-1)*5;  // 전체 재생 시간
        int ringTime=0;  // 전화벨이 울리는 시간

        while(ringTime<=totalTime){
            boolean silent=true;    // 노래 없음
            for (int i=0;i<N;i++) {
                int songStart=i*(L+5);          // 노래 시작 시간
                int songEnd=songStart+L;        // 노래 끝 시간
                
                if (ringTime>=songStart && ringTime<songEnd) {
                    silent=false;
                    break;
                }
            }
            
            if (silent) {
                System.out.println(ringTime);
                return;
            }
            ringTime+=D;
        }

        // 모든 노래가 끝난 후에도 전화벨이 들리지 않으면 그 이후 가장 처음 전화벨이 울리는 시간
        System.out.println(ringTime);
	}
} 
