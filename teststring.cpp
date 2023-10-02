#include<bits/stdc++.h>
#include<sstream>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    istringstream iss(s);
    string token;
    getline(iss,token,'/');
        getline(iss,token,'/');
        getline(iss,token,'/');
    istringstream iss1(token);
    string k;
    getline(iss1,k,' ');
        getline(iss,k,' ');

        getline(iss,k,' ');

    cout<<k<<" ";
   
        
    
    

}