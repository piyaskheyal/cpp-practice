/* 
Given t test cases and in each test case a number N, print it's factorial for each test case%M
where M=10^9+7

constrains
1<=t<=10^5
1<=N<=10^5
*/

/*using pre-computation*/

#include <bits/stdc++.h>
using namespace std;

const unsigned int m = 1e9+7, n = 1e5+10;
unsigned int factorial[n];

int main() {
    int t; // test cases
    cin>>t;
    factorial[0] = factorial[1] = 1;
    for(int i=2; i<n; i++) {
        factorial[i] = i*factorial[i-1];
    }

    while(t--) {
        int k;
        cin>>k;
        cout<<factorial[k]<<"\n";
    }

    return 0;
}