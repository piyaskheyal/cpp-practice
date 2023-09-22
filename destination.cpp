#include<bits/stdc++.h>
using namespace std;

int main() {
    string cmd;
    cin>>cmd;
    pair<int, int> position = {0, 0};
    for(auto &ch: cmd) {
        switch(ch) {
            case 'L':
                position.first -= 1;
                break;
            case 'R':
                position.first += 1;
                break;
            case 'U':
                position.second += 1;
                break;
            case 'D':
                position.second -= 1;
                break;
        }
    }
    cout<<position.first<<" "<<position.second;

    return 0;
}