#include<bits/stdc++.h>
using namespace std;

int main() {
    int n; // size of the array
    cin>>n;
    int A[n];
    for(int i=0; i<n; i++) {
        cin>>A[i];
    }
    int last = A[n-1];
    if(last%10==0) {
        cout<<"Yes"<<"\n";
    }else {
        cout<<"No"<<"\n";
    }

    return 0;
}