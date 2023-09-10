#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; // t for how many terms
    cin>>t;
    long long int a=0, b=1, c;

    cout<<a<<" "<<b<<" ";
    for(int i=2; i<t; i++) {
        c = a+b;
        a = b;
        b = c;
        cout<<c<<" ";
    }
    cout<<"\n";


    return 0;
}