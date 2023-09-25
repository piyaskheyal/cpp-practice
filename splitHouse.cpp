#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    string s;
    cin>>s;
    bool possible = true;
    for(int i=0; i<n; i++){
        if(s[i]=='H'){
            if(i+1<n && s[i+1]=='H') possible = false;
        }
    }
    if(possible){
        cout<<"YES"<<"\n";
        for(auto &ch: s){
            if(ch == '.'){
                ch = 'B';
            }
        }
        cout<<s<<"\n";
    }else cout<<"NO"<<"\n";

    return 0;
}