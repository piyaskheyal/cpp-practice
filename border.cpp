#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; // test cases
    cin>>t;
    while(t--){
        int r,c;
        cin>>r>>c;
        vector<string> table;
        for(int i=0; i<r; i++){
            string s;
            cin>>s;
            table.push_back(s);
        }
        int max=0;
        for(int i=0; i<r; i++){
            int tempMax=0;
            for(auto &ch: table[i]){
                if(ch=='#') ++tempMax;
            }
            if(tempMax>max) max = tempMax;
        }
        cout<<max<<"\n";
    }

    return 0;
}