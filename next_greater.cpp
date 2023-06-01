#include <iostream>
#include <bits/stdc++.h>
using namespace std;

vector<int> NGE(vector<int> &v){
	int n = v.size();
	vector<int> nge(n);
	stack<int> st;
	for(int i=0; i<n; ++i){
		while(!st.empty() && v[i]>v[st.top()]){
			nge[st.top()] = i;
			st.pop();
		}
		st.push(i);
	}
	while(!st.empty()){
		nge[st.top()]=-1;
		st.pop();
	}
	return nge;
}
int main() {
	int num;
	cin >> num;    //Reading input from STDIN
	vector <int> v(num);
	for(int i=0; i<num; ++i){
		cin>>v[i];
	}
	vector <int> nge = NGE(v);
	for(int i=0; i<num; ++i){
		cout<<(nge[i] == -1 ? -1 : v[nge[i]])<<" ";
	}
}