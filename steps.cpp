#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    vector<int> A, B;
    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        A.push_back(x);
    }
    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        B.push_back(x);
    }
    auto minIt = min_element(A.begin(), A.end());
    int minValue = *minIt;
    int i=0, steps = 0;
    while(i<n){
        while(A[i]>minValue){
            A[i] -= B[i];
            ++steps;
        }
        if(A[i]<minValue){
            minValue = A[i];
            if(i == n-1){
                steps = -1;
                break;
            }
        }else if(A[i]<0){
            steps = -1;
            break;
        }else i++;
    }
    cout<<steps<<"\n";


    return 0;
}