#include <bits/stdc++.h>
using namespace std;
const int N = 1e3+10;
int A[N][N];
long long int B[N][N];
int main() {
    int n; //size of array
    cin>>n;
    for(int i=1; i<=n; i++) {
        for(int j=1; j<=n; j++) {
            cin>>A[i][j];
        }
    } // took input of the array
    for(int i=1; i<=n; i++) {
        for(int j=1; j<=n; j++) {
            B[i][j] = B[i][j-1] + 0LL + B[i-1][j] + A[i][j] - B[i-1][j-1];
        }
    } // filled the sum array

    int q;
    cin>>q;
    while(q--) {
        int a, b, c, d;
        cin>>a>>b>>c>>d;
        cout<<B[c][d] - B[c][b-1] - B[a-1][d] + B[a-1][b-1]<<"\n";
    }


    return 0;
}