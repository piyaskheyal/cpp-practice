#include<bits/stdc++.h>
using namespace std;

int main() {
    string str, z="", o="";
    cin>>str;
    for(auto &ch: str){
        switch(ch) {
            case 'z':
                z += ch;
                break;
            case 'o':
                o += ch;
                break;
        }
    }
    if(2*z.size() == o.size()){
        cout<<"Yes";
    }else {
        cout<<"No";
    }


    return 0;
}