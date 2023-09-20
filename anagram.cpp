#include<bits/stdc++.h>
using namespace std;

int CommonCharacters(string a, string b) {
    unordered_map<char, int> freqA;

    for(char ch: a) {
        ++freqA[ch];
    }
    int count = 0;
    for(char ch: b){
        if(freqA.find(ch)!=freqA.end() && freqA[ch]>0) {
            ++count;
            --freqA[ch];
        }
    }
    return count;
}

int main() {
    int q;
    cin>>q;
    while(q--){
        string S, T;// add from S and subtract from T
        cin>>S;
        cin>>T;
        // cout<<S<<" "<<T<<"\n";
        int common = CommonCharacters(S, T);
        // cout<<common<<"\n";
        int operations = (S.size()-common) + (T.size()-common);
        cout<<operations<<"\n";
    }

    return 0;
}