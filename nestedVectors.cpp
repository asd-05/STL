/* Anish Deshpande */

#include <bits/stdc++.h>
using namespace std;

void printVector(vector<int> v){
    // cout<<"Size: "<<v.size()<<endl;
    for(int i=0;i<v.size();++i){
        cout<<v[i]<<" ";
    }cout<<endl;
}

int main() {
    vector<vector<int>> v;
    int N;
    cout<<"Enter the number of Vectors to input"<<endl;
    cin>>N;
    for(int i=0; i<N; ++i){
        int n;
        cin>>n;
        vector <int> temp;
        for(int j=0; j<n; ++j){
            int x;
            cin>>x;
            temp.push_back(x);
        }
        v.push_back(temp);
    }
    cout<<"The Final 2D Vector Array is: "<<endl;
    for(int i=0; i<N; ++i){
        printVector(v[i]);
    }
    // cout<<"The Second element of first vector is: "<<v[0][1];
    return 0;
}