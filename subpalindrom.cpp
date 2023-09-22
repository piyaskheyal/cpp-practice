#include<bits/stdc++.h>
using namespace std;

int main() {
    string str;
    cin>>str;
    str = " " + str; // so that we can work with 1 based index
    int q;
    cin>>q;
    while(q--) {
        int l, r;
        cin>>l,r;
        unordered_map<char, int> freq;
        for(int i = l; i<=r; i++) {
            freq[str[i]] += 1;
        }
        
    }

    return 0;
}