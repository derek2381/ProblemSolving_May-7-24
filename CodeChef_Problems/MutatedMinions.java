// problem link
// https://www.codechef.com/problems/CHN15A


import java.util.*;
import java.lang.*;
import java.io.*;

class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
		Scanner sc = new Scanner(System.in);

		int t = sc.nextInt();

		while(t-- > 0){
		    int n = sc.nextInt(), k = sc.nextInt();

		    int[] arr = new int[n];
		    int count = 0;
		    for(int i = 0;i < n;i++){
		        arr[i] = sc.nextInt()+k;
		        if(arr[i]%7 == 0){
		            count++;
		        }
		    }

		    System.out.println(count);


		}

	}
}
