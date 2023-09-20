#include<bits/stdc++.h>
using namespace std;

const int N = 1e7+10;
long long Arr[N];

int main(){
    int n, m; // n is size of an array m is number of operations
    cin>>n>>m;
    while(m--){
        int a, b, k;
        cin>>a>>b>>k;
        Arr[a] += k;
        Arr[b+1] -= k;
    }
    for(int i=1; i<=n; i++) {
        Arr[i] += Arr[i-1];
    }
    int max=-1;
    for(auto &val : Arr){
        if(val>max) max = val;
    }
    cout<<max<<"\n";

    return 0;
}