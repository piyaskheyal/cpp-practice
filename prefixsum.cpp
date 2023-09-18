/*Given array A of N integers. Given Q queries and in each query given L and R print
sum of array elements from index L to R(L, R are included)

Constraints
1<=N<=10^5
1<=A[i]<=10^9
1<=Q<=10^5
1<=L, R<=N
*/

// prefix sum
#include <bits/stdc++.h>
using namespace std;


int main() {
    int n; // size of an array
    cin>>n;
    int A[n+1];
    for(int i=1; i<n+1; i++){
        cin>>A[i];
    }
    int q; //number of queries
    cin>>q;
    while(q--){
        int l, r; // [l,r]
        cin>>l>>r;
        long long int sum=0;
        for(int i=l; i<=r; i++){
            sum += A[i];
        }
        cout<<sum<<"\n";
    }

    return 0;
}