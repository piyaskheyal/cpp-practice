#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, m; // n is size of an array m is number of operations
    cin>>n>>m;
    int Arr[n+10];
    // Arr = 0 0 0 0 0 0 0 0 0 0
    for(int i=0; i<n+10; i++){
        Arr[i]=0;
    }

    while(m--){
        int a, b, k;
        cin>>a>>b>>k;
        for(int i=a; i<=b; i++){
            Arr[i] += k;
        }
    }
    int max=-1;
    for(auto val : Arr){
        if(val>max) max = val;
    }
    cout<<max<<"\n";

    return 0;
}