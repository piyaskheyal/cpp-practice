/*
Given array a of N integers. Given Q queries and in
each query given a number X, print xount of that number
in array.

constraints
1<=N<=10^5
1<=a[i]<=10^7
1<=Q<=10^5
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; // size of the array
    cin>>n;
    long int a[n];
    for(int i=0; i<n; i++) {
        long int k;
        cin>>k;
        a[i] = k;
    }
    int q; // queries
    cin>>q;
    while(q--) {
        int x, count=0; // x is number that we have to count
        cin>>x;
        for(int i=0; i<n; i++) {
            if (a[i] == x) ++count;
        }
        cout<<count<<"\n";
    }


    return 0;
}