//25773

import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		Scanner in=new Scanner(System.in);
		String number=in.next();
		
		char[] num=number.toCharArray();
		int nLength=num.length;
		
		for(int i=0;i<nLength-1;i++) {
			int max=i;
			for(int j=i+1;j<nLength;j++) {
				if(num[j]>num[max]) {
					max=j;
				}
			}
			char temp=num[i];
            num[i]=num[max];
            num[max]=temp;
		}
		System.out.println(new String(num));
	}
}
