#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    set<string> se;
    stringstream ss(s);
    string word;
    while(ss >>word){
        se.insert(word);
    }
    cout<<se.size()<<endl;
}