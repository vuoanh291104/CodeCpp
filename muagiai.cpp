#include<bits/stdc++.h>
using namespace std;
struct TEAM{
    string home_team;	
    string away_team;	
    int home_goals;	
    int away_goals;	
    string result;
    string season;

};

int main(int argc, char* argv[]){
    if(argc!=5){
        cout<<"input not valid"<< endl;
        exit(0);
    }
    
    string path;
    string name;
    bool co_truyen_vao_p=false, co_truyen_vao_ten= false;
    for(int i=1; i<argc; i++){
        if((string) argv[i]==string("-p")){
            path=argv[i+1];
            co_truyen_vao_p=true;
        }else if((string) argv[i]==string("-n")){
            name=argv[i+1];
            co_truyen_vao_ten=true;
        }
    }
    if(co_truyen_vao_p== false || co_truyen_vao_ten== false){
        cout<<"truyen sai"<< endl;
        exit(0);
    }
    fstream inFile;
    inFile.open(path,ios::in);
     if(!inFile.is_open()){
        cout<<"File invalid"<<endl;
        exit(0);
    }
    string line;
    getline(inFile,line);
    vector<TEAM> list_team;
    while(getline(inFile,line)){
        istringstream iss(line);
        string  token;
        TEAM x;
        getline(iss,token,',');
        x.home_team=token;
        getline(iss,token,',');
        x.away_team=token;
        getline(iss,token,',');
        x.home_goals=stoi(token);
        getline(iss,token,',');
        x.away_goals=stoi(token);
        getline(iss,token,',');
        x.result = token;
        getline(iss,token,',');
        x.season=token;
        list_team.push_back(x);
    }
    int sum_home=0; int sum_away=0; int sum=0;
    for(int i=0 ;i<list_team.size();i++){
        if(list_team[i].home_team==name){
            if(list_team[i].home_goals>list_team[i].away_goals){
                sum_home++;
            }
        }
    }
    for(int i=0 ;i<list_team.size();i++){
        if(list_team[i].away_team==name){
            if(list_team[i].away_goals>list_team[i].home_goals){
                sum_away++;
            }
        }
    }
    sum=sum_home+sum_away;
    cout<<sum;
    int tong_giai=0;
    map<string,int> pointCount;
    for(TEAM k: list_team){
        if(k.home_team==name){
            if(k.home_goals){}
        }
    }
    

}