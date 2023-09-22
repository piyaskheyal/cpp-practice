#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> bobArmy(n), aliceArmy(n);
        for(int i=0; i<n; i++){
            cin>>bobArmy[i];
        }
        for(int i=0; i<n; i++){
            cin>>aliceArmy[i];
        }// took the input of army
        sort(bobArmy.rbegin(), bobArmy.rend());
        sort(aliceArmy.rbegin(), aliceArmy.rend());
        bobArmy.erase(unique(bobArmy.begin(), bobArmy.end()), bobArmy.end());
        aliceArmy.erase(unique(aliceArmy.begin(), aliceArmy.end()), aliceArmy.end());

        if(bobArmy[0]>aliceArmy[0]){
            cout<<"Bob"<<"\n";
        }else if(aliceArmy[0]>bobArmy[0]){
            cout<<"Alice"<<"\n";
        }else cout<<"Tie"<<"\n";
    }

    return 0;
}