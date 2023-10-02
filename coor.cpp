#include<bits/stdc++.h>
#include<sstream>
using namespace std;
struct ToaDo{
    int id;
    double x;
    double y;
};
int main(int argc, char* argv[]){
    if(argc!=5){
        cout<<"input not valid"<< endl;
        exit(0);
    }
    
    string path;
    int n;
    bool co_truyen_vao_p=false, co_truyen_vao_n= false;
    for(int i=1; i<argc; i++){
        if(string(argv[i])==string("-n")){
            n=stoi(argv[i+1]);
            co_truyen_vao_n=true;
        }else if((string) argv[i]==string("-p")){
            path=argv[i+1];
            co_truyen_vao_p=true;
        }
    }
    if(co_truyen_vao_n== false || co_truyen_vao_p== false){
        cout<<"truyen sai"<< endl;
        exit(0);
    }
    fstream inFile;
    inFile.open(path,ios::in);
     if(!inFile.is_open()){
        cout<<"File invalid"<<endl;
        exit(0);
    }
    vector<ToaDo> nodes;
    string line;
    getline(inFile,line);
    while(getline(inFile,line)){
        istringstream iss(line);
        string token;
        ToaDo k;
        getline(iss,token,',');
        k.id=stoi(token);
        getline(iss,token,',');
        k.x= stod(token);
        getline(iss,token,',');
        k.y= stod(token);
        nodes.push_back(k);

    }
    map<double,int> mp;
    for(int i=0; i<nodes.size();i++){
        double kc =  sqrt(pow((nodes[n].x - nodes[i].x),2 ) + pow((nodes[n].y - nodes[i].y),2 ));
        mp[kc]+=nodes[i].id;
    }
    cout<<" 5 diem gan nhat:"<<" ";
    int dem=1;
    for(auto x: mp){
        cout<<x.first <<  x.second << " ";
        dem++;
        if(dem==5) break;
    }
    cout<<"\n";

    //tinh tong khoang cach duong di
    vector<int> duongdi ={0,1,3,7,6,0}; //vector chua cac id:   phan biet i la thu tu phan tu vector vs id
    double tong=0;
    for(int i=0; i<duongdi.size()-1; i++){
        tong+= sqrt(pow((nodes[duongdi[i]].x - nodes[duongdi[i+1]].x),2 ) + pow((nodes[duongdi[i]].y - nodes[duongdi[i+1]].y),2 ));

    }
    cout<<"tong la:" << tong << endl;

    
}