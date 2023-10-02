#include<bits/stdc++.h>
#include<sstream>
using namespace std;
struct RichPerson{
    string personName;
    int finalWorth;
    string category;
    string countryOfCitizenship ;
    string organization ;
    string birthDate ;
    int year;

};

int main(int argc, char*argv[]){
    if(argc!=5){
        cout<<"thieu";
        exit(0);
    }
    string path;
    int yearold;
    for(int i=0; i<argc; i++){
        if(string(argv[i])==string("-p")){
            path=argv[i+1];
        }
        if(string(argv[i])==string("-y")){
            yearold =stoi(argv[i+1]);
        }
    }
    fstream infile, outfile;
    infile.open(path,ios::in);
    outfile.open("output.txt",ios::out);
    vector<RichPerson> List_per;

    string line;
    getline(infile,line);
    while(getline(infile,line)){
        string token;
        istringstream iss(line);
        RichPerson a;
        getline(iss,token,',');
        a.personName= token;
        getline(iss,token,',');
        a.finalWorth = stoi(token);
        getline(iss,token,',');
        a.category=token;
        getline(iss,token,',');
        a.countryOfCitizenship =token;
        getline(iss,token,',');
        a.organization =token;
        getline(iss,token,',');
        istringstream iss(token);
        string s;

        while(getline(infile,token)){
              getline(iss,s,'/');
              getline(iss,s,'/');
            getline(iss,s,'/');
               a.year=stoi(s);
        }
        a.birthDate=token;
        List_per.push_back(a);

    }
    for(RichPerson x: List_per){
        if(x.category == "Technology"){
            cout<<x.personName<<" "<<x.finalWorth <<" " << x.category <<" "<< x.countryOfCitizenship<<" "<<x.organization<<" "<<x.birthDate<<endl;
        }
    }
    map<string, int> mp;

    for(RichPerson y: List_per){
        mp[y.countryOfCitizenship]++;
    }
    int dem=1;
    for(auto m:mp){
        cout<< m.first <<" "<<m.second;
        dem++;
        if(dem==5) break;
    }
    for(RichPerson x: List_per){
        if(2023-x.year <yearold){
            outfile<<x.personName<<" "<<x.finalWorth <<" " << x.category <<" "<< x.countryOfCitizenship<<" "<<x.organization<<" "<<x.birthDate<<endl;
        }
    }





    infile.close();
    outfile.close();
}
