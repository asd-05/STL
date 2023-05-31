/* Anish Deshpande */

#include <bits/stdc++.h>
using namespace std;

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

    int q;
    cin>>q;
    int find;
    for(int i=0; i<q; ++i){
        cin>>find;
        if(s.find(find)==s.end()){
            cout<<"Not Present\n";
        }
        else{
            cout<<"Yes\n";   
        }
    }
    return 0;
}
