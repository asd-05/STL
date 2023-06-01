/* Anish Deshpande */

#include <bits/stdc++.h>
using namespace std;

void printVector (vector <int> v){
    for(int i=0; i<v.size(); ++i){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

int main() {
    int n;
    cin>>n;
    vector <int> v(n);
    for(int i=0; i<n; ++i){
        cin>>v[i];
    }

    sort(v.begin(), v.end());
    cout<<"The Sorted Vector is ";
    printVector(v);

    int min = *min_element(begin(v),end(v));
    int max = *max_element(begin(v),end(v));
    cout<<"Min element is "<<min<<endl;
    cout<<"Max element is "<<max<<endl;

    int sum = accumulate(begin(v),end(v),0);  //the last value initialises the sum to Zero
    cout<<"Sum of vector is "<<sum<<endl;

    int ct = count(begin(v),end(v),9); //the last value tells ki konse element ka Count chahiye
    cout<<"Count of 9 is "<<ct<<endl;

    auto it = find(begin(v),end(v),6);
    if(it != v.end()){
        cout<<*it<<endl;
    }else{
        cout<<"element not found"<<endl;
    }
    reverse(begin(v),end(v));
    cout<<"The reversed Array is ";
    printVector(v);
    
    string s = "anish";
    reverse(s.begin(),s.end());
    cout<<"The reversed string is "<<s<<endl;
}