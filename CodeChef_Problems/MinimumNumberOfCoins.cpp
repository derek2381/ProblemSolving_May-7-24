// problem link
// https://www.codechef.com/problems/MINCOINS

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int n;
	    cin >> n;
	    int count = 0;
	    count = n / 10;
	    n %= 10;
	    count += n/5;
	    n %= 5;

	    if(n%5 == 0){
	        cout << count << endl;
	    }else{
	        cout << -1 << endl;
	    }
	}

}
