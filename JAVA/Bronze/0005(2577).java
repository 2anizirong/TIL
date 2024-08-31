// 2577

import java.util.Scanner;

public class Main
{
	public static void main(String[] args) {
		Scanner in=new Scanner(System.in);
		int A=in.nextInt();
		int B=in.nextInt();
		int C=in.nextInt();
		int mult=A*B*C;
		
		int[] numArr=new int[10];
		
		while(mult>0){
		    int n=mult%10;
		    switch(n){
		        case 0:
		            numArr[0]++;
		            break;
		        case 1:
		            numArr[1]++;
		            break;
		        case 2:
		            numArr[2]++;
		            break;
		        case 3:
		            numArr[3]++;
		            break;
		        case 4:
		            numArr[4]++;
		            break;
		        case 5:
		            numArr[5]++;
		            break;
		        case 6:
		            numArr[6]++;
		            break;
		        case 7:
		            numArr[7]++;
		            break;
		        case 8:
		            numArr[8]++;
		            break;
		        case 9:
		            numArr[9]++;
		            break;
		    }
		    mult/=10;
		}
		for(int i=0;i<10;i++){
		    System.out.println(numArr[i]);
		}
	}
}
