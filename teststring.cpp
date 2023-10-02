#include<bits/stdc++.h>
#include<sstream>
using namespace std;
int main(){
    string s;
    getline(cin,s);
 
 
    //  s.erase(s.begin());
    // for(int i=0; i<s.size();i++){
           

    //     if(s[i]=='s') 
    //     {
    //         s.erase(s.begin()+i);
    //         }
    // }
    // istringstream   iss(s);
    // string token;
    // int j=0;
    //     while(j<s.size()){
    //         if(s[j]=='$' && s[j-1]==','){
    //             getline(iss,token,s[j-1]);
    //             break;
    //         }
    //         j++;
        
    // } 
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