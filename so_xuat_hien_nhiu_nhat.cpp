#include<bits/stdc++.h>
using namespace std;
// cùng tần suất thì lấy nhỏ hơn
int main(){
    int n; cin>>n;
    map<long long, int>m;
    for(int i=0; i<n;i++){
        long long x; cin>>x;
        m[x]++;
    }
    long long res, fre=INT_MIN;
    for(auto it:m){
        if(it.second >fre){
            fre=it.second;
            res=it.first;
        }
    }
    cout<<res<<" "<<fre<<endl;

    


//kí tự xuất hiện  nhiều nhất và thứ tự từ điển nhỏ nhất
    int t; cin>>t;
    cin.ignore();
    string s;
    getline(cin,s);
    map<char, int> mp;
    for(char x:s){
        mp[x]++;
    }
    char res; int pre=0;
    for(auto it: mp){
        if(it.second>fre){
            fre=it.second;
            res=it.first;
        }
    }
    cout<< res<< " "<<pre<<endl;







}