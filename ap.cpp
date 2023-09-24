#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;// test cases
    cin>>t;
    while(t--){
        int n; // size of array
        cin>>n;
        vector<int> ar(n);
        for(int i=0; i<n; i++){
            cin>>ar[i];
        } // took the input of ar
        sort(ar.begin(), ar.end());
        int d = ar[1]-ar[0]; // common difference
        bool isAP = true;
        for(int i=1; i<n; i++){
            if((ar[i]-ar[i-1]) != d){
                isAP = false;
                break;
            }
        }
        if(isAP){
            cout<<"YES"<<"\n";
        }else cout<<"NO"<<"\n";
    }


    return 0;
}