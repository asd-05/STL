/* Anish Deshpande */

#include <bits/stdc++.h>
using namespace std;

int main() {

    vector <int> v = {1,2,3,4,5};
    vector <pair<int,int>> v_p = {{1,2},{2,3},{3,4}};

    auto a = 1;
    cout<<a<<endl;

    for(pair<int,int> &value: v_p){
        cout<<value.first<<" "<<value.second<<endl;
    }
    for(auto &value : v_p){
        cout<<value.first<<" "<<value.second<<endl;
    }

    for(auto it=v.begin(); it !=v.end(); ++it){
        cout<<(*it)<<" ";
    }
    cout<<endl;

    for(int &value: v){         // Like value in range of len(of V)
        cout<<value<<" ";
    }

    return 0;
}