#include<bits/stdc++.h>
using namespace std;

int main() {
    int n; //size of array
    cin>>n;
    long long A[n];
    for(int i=0; i<n; i++) {
        cin>>A[i];
    } // took the input of the array

    long long sum = 0;
    for(int i=0; i<n; i++) {
        sum += A[i];
    }
    cout<<sum<<"\n";

    return 0;
}