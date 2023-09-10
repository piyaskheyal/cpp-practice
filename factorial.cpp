/* 
Given t test cases and in each test case a number N, print it's factorial for each test case%M
where M=10^9+7

constrains
1<=t<=10^5
1<=N<=10^5
*/

#include <bits/stdc++.h>
using namespace std;

unsigned int Factorial(int a) {
    unsigned int f=1, m = 1e9+7;
    if (a==0) return 1;
    for(int i=a; i>=1; i--) {
        f = ((f%m)*(i%m))%m;
    }
    return f;
}

int main() {
    int t; // test cases
    cin>>t;

    while(t--) {
        int n;
        cin>>n;
        cout<<Factorial(n)<<"\n";
    }

    return 0;
}