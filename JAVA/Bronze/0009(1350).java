// 1350

import java.util.Scanner;

public class Main
{
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		int N = sc.nextInt();         // 파일의 개수

    // int type --> long type!!!
    
		// int[] fileSize = new int[N]; 
		long[] fileSize = new long[N];
		for (int i = 0; i < N ;i++) {       // 각각의 파일 사이즈 입력
		    // fileSize[i] = sc.nextInt();
		    fileSize[i] = sc.nextLong();
		}
		
		/*int clusterSize = sc.nextInt();     // 클러스터의 크기
		int totalCluster = 0;*/
	    long clusterSize = sc.nextLong();     // 클러스터의 크기
		long totalCluster = 0;
		
		for (int i = 0; i < N; i++) {
            if (fileSize[i] > 0) {
                totalCluster += ((fileSize[i] + clusterSize - 1) / clusterSize) * clusterSize;
            }
        }
		
		System.out.println(totalCluster);
	}
}
