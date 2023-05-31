/* Anish Deshpande */

#include <bits/stdc++.h>
using namespace std;

int main() {

    map <int, string> m;

    m[1] = "abc";
    m[2] = "lbc";
    m[3] = "ybk";
    m.insert({5,"dfg"});

    map<int,string> :: iterator it;
    for(it=m.begin();it!=m.end();++it){
        cout<<(*it).first<<" "<<(*it).second<<" ";
        // cout<<it->first<<" "<<it->second<<endl;
    }
    cout<<endl;
    for(auto it= m.begin(); it!=m.end(); ++it){         // way to print map
        cout<<(*it).first<<" "<<(*it).second<<" ";
    }
    cout<<endl;
    for(auto &pr: m){                                    // Easy way to print map
        cout<<pr.first<<" "<<pr.second<<" ";
    }
    cout<<endl;
    return 0;
}