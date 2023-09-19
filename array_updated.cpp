#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, m; // n is size of an array m is number of operations
    cin>>n>>m;
    int Arr[n+10];
    for(int i=0; i<n+10; i++){
        Arr[i]=0;
    }
    // Arr = 0 0 0 0 0 0 0 0 0 0
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