#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    vector<int> A(n);
    for(int i=0; i<n; i++){
        cin>>A[i];
    }
    map<int, int> freq;
    for(auto &x: A){
        ++freq[x];
    }

    bool maxExist = false;

    for(auto it=freq.rbegin(); it!=freq.rend(); it++){
        if(it->second == 1){
            cout<<it->first<<"\n";
            maxExist = true;
            break;
        }
    }
    if(!maxExist) cout<<"-1"<<"\n";


    return 0;
}