#include<bits/stdc++.h>

using namespace std;
int main(){
    set<int> s;
    int n; cin>>n;
    int a[n];
    for(int &x:a){
        cin>>x;
    }
    for(int i=0; i<n; i++){
        s.insert(a[i]);
    }
    cout<<s.size()<<endl;
}