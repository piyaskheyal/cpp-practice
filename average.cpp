#include<bits/stdc++.h>
using namespace std;

int main(){
    while(1){
        int student, count = 1;
        cout<<"How many students in the class (0 to end)? ";
        cin>>student;
        if(student == 0) break;
        int subject;
        cout<<"How many test scores do you have to enter for each student? ";
        cin>>subject;
        cout<<fixed<<setprecision(1);
        for(int i=0; i<student; i++){
            float total = 0;
            cout<<"Enter the "<<subject<<" test scores for student "<<count<<"\n";
            for(int i=0; i<subject; i++){
                float number;
                cin>>number;
                total+=number;
            }
            float avg = total/subject;
            cout<<"Average for student"<<count<<" is "<<avg<<"\n";
            ++count;
        }
    }

    return 0;
}
