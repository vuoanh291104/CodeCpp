#include<bits/stdc++.h>
using namespace std;
int main(){
    set<int> s;
    int n; cin>>n;
    for(int i=0; i<n; i++){
        int x; cin>>x;
        s.insert(x);
    }
    int q; cin>>q;// nhập số lượng truy vấn: q dòng; mỗi đòng q là 1 số cần kiểm tra
    while(q--){
        int x; cin>> x;
        if(s.count(x)==1){
            cout<<"Yés\n";
        }
        else cout<<"no\n";
    }

}