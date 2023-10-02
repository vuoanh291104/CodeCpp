#include<bits/stdc++.h>
using namespace std;
struct CauThu{
    string namae;
    string kokyo;
    string chiimu;
    int score_katsu;
    int score_makeru;
};
int main(int argc, char *argv[]){
    if(argc!=2){
        cout<<"thieu"<<endl;
        exit(0);
    }
    fstream inFile;
    inFile.open(argv[1], ios::in);
    if(!inFile.is_open()){
        cout<<"file invalid"<<endl;
        exit(0);
    }
    string s;
    int t;
    while(getline(inFile,s)){
        istringstream iss(s);
        string token;
        CauThu x;
        getline(iss,token,';');
        x.namae=token;
        getline(iss,token,';');
        x.kokyo=token;
        getline(iss,token,';');
        x.chiimu=token;
        inFile >> t;
        x.score_katsu =t;
        inFile >> t;
        x.score_makeru =t;
    }
}