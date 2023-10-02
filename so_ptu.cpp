/*liệt kê số phần tử thuộc mảng 1 mà ko thuộc mảng 2*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    set<int>s;
    int n, m; cin>>n>>m;
    int a[n], b[m];
    for(int &x:a){
        cin>>x;
    }
    for(int i=0; i<m; i++){
        int x; cin>>x;
        s.insert(x);
    }
    bool ok=false;
    for(int x:a){
        if(s.find(x)==s.end()){ 
            cout<<x<<" ";
            ok=true; //tìm thấy
        }
    }
    if(!ok) cout<<"not found\n";
    else cout<<endl;
}