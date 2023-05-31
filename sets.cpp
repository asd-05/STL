/* Anish Deshpande */

#include <bits/stdc++.h>
using namespace std;

void printSet(set<int> &s){
    for(auto &value: s){
        cout<<value<<" ";
    }
}

int main() {
    set<int> s;
    int n;
    cout<<"How many elements in set?"<<endl;
    cin>>n;
    cout<<"Enter the set elements"<<endl;
    for(int i=0; i<n; ++i){
        int x;
        cin>>x;
        s.insert(x);
    }
    cout<<"The set is:"<<endl;
    printSet(s);
    cout<<endl;

    auto it = s.find(3);
    if (it != s.end()) cout<<(*it);
}