/*
Given array a of N integers. Given Q queries and in
each query given a number X, print xount of that number
in array.

constraints
1<=N<=10^5
1<=a[i]<=10^7
1<=Q<=10^5
*/

/*using a hash table to pre-compute the counts*/

#include <bits/stdc++.h>
using namespace std;

const int N = 10e7;
int hsh[N];

int main() {
    int n; // size of the array
    cin>>n;
    long int a[n];
    for(int i=0; i<n; i++) {
        cin>>a[i];
        ++hsh[a[i]];
    }

    int q; // queries
    cin>>q;
    while(q--) {
        int x; // x is number that we have to count
        cin>>x;
        cout<<hsh[x]<<"\n";
    }


    return 0;
}