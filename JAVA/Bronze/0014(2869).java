// 2869

import java.util.Scanner;

public class Main
{
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
        
        int A = sc.nextInt();       // + 낮
        int B = sc.nextInt();       // - 밤
        int V = sc.nextInt();       // 나무 막대의 높이
        
        int days = (int)Math.ceil((double)(V - A) / (A - B)) + 1;
        
        System.out.println(days);
	}
}
