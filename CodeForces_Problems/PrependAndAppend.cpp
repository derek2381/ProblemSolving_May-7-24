// problem linked
// https://codeforces.com/problemset/problem/1791/C

#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string str;
        cin >> str;

        int i = 0, j = n-1;

        while(i < j){
            if(str[i] != str[j]){
                i++;
                j--;
                n -= 2;
            }else{
                break;
            }
        }

        cout << n << endl;
    }
}
