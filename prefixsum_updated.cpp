/*Given array A of N integers. Given Q queries and in each query given L and R print
sum of array elements from index L to R(L, R are included)

Constraints
1<=N<=10^5
1<=A[i]<=10^9
1<=Q<=10^5
1<=L, R<=N
*/

#include <bits/stdc++.h>
using namespace std;
const int n=1e5+10; 
int A[n];

int main() {
    int k; //size of array
    cin>>k;
    for(int i=1; i<=k; i++) {
        cin>>A[i];
    } // took input of the array

    long long int B[k+1];
    fill_n(B, k+1, 0);
    for(int i=1; i<=k+1; i++) {
        long long int sum=0;
        sum += B[i-1] + A[i];
        B[i] = sum;
    }
    int q;
    cin>>q;
    while(q--) {
        int l,r;
        cin>>l>>r;
        cout<<B[r]-B[l-1]<<"\n";
    }

    return 0;
}