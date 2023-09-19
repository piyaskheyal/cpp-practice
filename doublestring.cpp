#include <bits/stdc++.h>
using namespace std;

void isDoubleString(string str) {
    for(int i=0; i<str.length(); i++) {
        for(int j=i+1; j<str.length(); j++) {
            if(str[i] == str[j]) {
                cout<<"Yes"<<"\n";
                return;
            }
        }
    }
    cout<<"No"<<"\n";
}

int main() {
    int q; // number of queries
    cin>>q;
    while(q--) {
        string s;
        cin>>s;
        isDoubleString(s);
    }

    return 0;
}