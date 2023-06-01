/* Anish Deshpande */

#include <bits/stdc++.h>
using namespace std;

int main() {

    queue <string> q;
    q.push("asd");
    q.push("bsd");
    q.push("csd");
    q.push("dsd");
    q.push("esd");
    while(!q.empty()){
        cout<<q.front()<<endl;
        q.pop();
    }
    return 0;
}