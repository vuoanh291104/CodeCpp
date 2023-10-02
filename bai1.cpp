#include<bits/stdc++.h>

#include<sstream>
using namespace std;
int main(){
string s1;
string s2;
getline(cin,s1);
getline(cin,s1);
set<string> a;
set<string>b;
vector<string>u,v;

istringstream iss1(s1);
istringstream iss2(s2);
string token;
string token1;

while(iss1>>token){
    a.insert(token);
    u.push_back(token);
}
while(iss2>>token1){
    b.insert(token1);
    v.push_back(token1);
}
for(int i=0; i<v.size(); i++){
    if(a.find(v[i])!=a.end()){
        cout<< v[i]<< " ";
    }
}



}
//1 4 7 3 8 9 3
//10 2 3 5 3 2 1 9 0 3 1
