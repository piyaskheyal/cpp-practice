#include<bits/stdc++.h>
using namespace std;

int main() {
    string str, first="", second="";
    cin>>str;
    int l = str.size();
    if(l%2==0) { // number of character is even
        for(int i=0; i<(l/2); i++) {
            first += str[i];
        }
        for(int i=l-1; i>=l/2; i--) {
            second += str[i];
        }
    } else { // number of character is odd
        for(int i=0; i<((l+1)/2)-1; i++) {
            first += str[i];
        }
        for(int i=l-1; i>=((l+1)/2); i--) {
            second += str[i];
        }
    }
    if(first == second) {
        cout<<"YES";
    }else {
        cout<<"NO";
    }

    return 0;
}