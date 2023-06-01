#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin>>t;
    map <int,multiset<string>> m;
    for(int i=0; i<t; ++i){
        string name;
        int marks;
        cin>> name >> marks;
        m[-1*marks].insert(name);
    }
    for(auto &student_marks_pr :m){
        auto &students =student_marks_pr.second;
        int marks = student_marks_pr.first;
        for(auto student: students){
            cout<<student<<" "<<(-1*marks)<<endl;
        }
    }
}