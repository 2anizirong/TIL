// 1297

import java.util.Scanner;

public class Main
{
	public static void main(String[] args) {
		 Scanner sc=new Scanner(System.in);
		 
		 int D=sc.nextInt();    // TV 대각선 길이
		 int H=sc.nextInt();    // TV 높이 비율
		 int W=sc.nextInt();    // TV 너비 비율
		 
		 double realH=(D*H)/Math.sqrt(H*H+W*W);
        double realW = (D*W)/Math.sqrt(H*H+W*W);
        
        int height=(int)Math.floor(realH);      // floor()함수를 사용하여 소수점 이하는 버림
        int width=(int) Math.floor(realW);
        
        System.out.println(height+" "+width);
	}
}
