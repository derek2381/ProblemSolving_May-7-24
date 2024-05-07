// problem link
// https://codeforces.com/problemset/problem/1462/A

import java.util.*;

public class solution{
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);

        int t = sc.nextInt();
        while(t-- > 0){
            int n = sc.nextInt();
            int[] arr = new int[n];

            for(int i = 0;i < n;i++){
                arr[i] = sc.nextInt();
            }

            int i = 0, j = n-1;
            while(i < j){
                System.out.print(arr[i] + " " + arr[j] + " ");
                i++;
                j--;
            }

            if(i == j){
                System.out.println(arr[j]);
            }
        }
    }
}
