/* Anish Deshpande */

#include <bits/stdc++.h>
using namespace std;

int main() {

    vector<int> v = {2, 3, 8, 7, 9};
    for(int i=0; i<v.size(); ++i){
        cout<<v[i]<<" ";
    }
    cout<<endl;

    vector <int> ::iterator it;
    for(it=v.begin(); it !=v.end(); it++){
        cout<<(*it)<<" ";
    }
    cout<<endl;

    vector<pair<int,int> > v_p ={{1,2},{3,4},{5,6},{7,8}};
    vector< pair<int,int>>:: iterator itp;
    for(itp=v_p.begin(); itp != v_p.end(); itp++){
        cout<<(*itp).first<<" "<<(*itp).second<<endl; 
        //This is for using iterators for Pairs
        // There are two methods to do so itp->first or (*itp).first for printing
        // cout<<itp->first<<" "<<itp->second<<endl;
    }
    return 0;
}