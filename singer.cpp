// find the hight frequency number from an array

#include<bits/stdc++.h>
using namespace std;

int main() {
    int n; // size of array
    cin>>n;
    vector<long> A;
    for(int i=0; i<n; i++) {
        long k;
        cin>>k;
        A.push_back(k);
    }// took input of the array

    unordered_map<long, int> freq;
    for(long &val: A) {
        ++freq[val];
    }

    int maxFrequency = 0;
    for(const auto &pr: freq) {
        if(pr.second > maxFrequency){
            maxFrequency = pr.second;
        }
    }
    long singers = 0;
    for(const auto &pr: freq){
        if(pr.second == maxFrequency) {
            ++singers;
        }
    }
    cout<<singers;

    return 0;
}