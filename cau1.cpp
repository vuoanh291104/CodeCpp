#include<bits/stdc++.h>
#include<sstream>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    istringstream iss(s);
    string token;
    getline(iss,token,':');
    if(stoi(token)<0 || stoi(token) >24){
        cout<<"sai format";
        exit(0);
    }
    if(token.size() !=2){
        cout<<"sai format";
        exit(0);
    }
    getline(iss,token,':');
    if(stoi(token)<0 || stoi(token) >59){
        cout<<"sai format";
        exit(0);
    }
    if(token.size() !=2){
        cout<<"sai format";
        exit(0);
    }
    getline(iss,token,':');
    if(stoi(token)<0 || stoi(token) >59){
        cout<<"sai format";
                exit(0);

    }
    else if(token.size() !=2){
        cout<<"sai format";
                exit(0);

    }
    cout<<"hai";
}