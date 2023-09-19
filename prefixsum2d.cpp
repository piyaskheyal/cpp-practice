/*
Given 2D array of N*N integers. Given Q queries and in each query given a, b, c and d.
Print sum of square represented by (a, b) as top left point and (c, d) as top bottom 
right point.

Constraints
1<=N<=10^3
1<=A[i][j]<=10^9
1<=Q<=10^5
1<=a, b, c, d<=N
*/

#include <bits/stdc++.h>
using namespace std;

const int N=1e3+10;
int A[N][N];

int main() {
    int n; //size of array
    cin>>n;

    for(int i=1; i<=n; i++) {
        for(int j=1; j<=n; j++) {
            cin>>A[i][j];
        }
    }
    
    int q;
    cin>>q;
    while(q--) {
        int a, b, c, d;
        cin>>a>>b>>c>>d; //(a,b), (c,d)
        
        long long int sum=0;
        for(int i=a; i<=c; i++) {
            for(int j=b; j<=d; j++) {
                sum += 0LL+A[i][j];
            }
        }
        cout<<sum<<"\n";
    }


    return 0;
}