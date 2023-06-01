/* Anish Deshpande */

#include <bits/stdc++.h>
using namespace std;

int main() {

    map <pair<string,string>, vector<int>> m;
    int n;
    cin>>n;
    for(int i=0; i<n; ++i){
        string fn,ln;
        int subjects;
        cin>>fn>>ln>>subjects;
        for(int j=0; j<subjects; ++j){
            int marks;
            cin>>marks;
            m[{fn,ln}].push_back(marks);
        }
    }
    for(auto &pr: m){
        cout<<pr.first.first<<" "<<pr.first.second<<endl;
        cout<<pr.second.size()<<endl;
        for(auto &element: pr.second){
            cout<<element<<" ";
        }
        cout<<endl;
    }
    return 0;
}
/* OUTPUT
3
a b 4
1 2 3 4
c d 2
1 2
e f 3
1 5 6
*/
