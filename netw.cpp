#include<bits/stdc++.h>
#include<sstream>
using namespace std;

struct toado{
    int diemi;
    int diemj;
    double wei;
};
int main(int argc, char *argv[]){
    if(argc!=7){
        cout<<"thieu dau vao";
        exit(0);
    }
    string path;
    int nodeid;
    double w;
    for(int i=0; i<argc; i++){
        if(string(argv[i])==string("-p")){
            path=argv[i+1];
        }
        if(string(argv[i])==string("-n")){
            nodeid=stoi(argv[i+1]);
        }
        if(string(argv[i])==string("-w")){
            w=stod(argv[i+1]);
        }
    }
    fstream inFile, outFile;
    inFile.open(path,ios::in);
    outFile.open("outputt.txt",ios::out);
    if(!inFile.is_open()){ 
        cout<<"File invaid";
        exit(0);
    }
    string line;
    getline(inFile,line);
    vector<toado> list_toado;
    while (getline(inFile,line))
    {
        istringstream iss(line);
        string token;
        toado a;
        getline(iss,token,',');
        a.diemi=stoi(token);
        getline(iss,token,',');
        a.diemj=stoi(token);
        getline(iss,token,',');
        a.wei=stod(token);
        list_toado.push_back(a);
    }
//2. In ra điểm i nối trực tiếp từ điểm nodeID có trọng số cạnh (nodeID,i) > w (tham số đã truyền vào).
int dem=0;
    for(toado o: list_toado){
        if(o.diemj == nodeid && o.wei >w){
            dem++;
                outFile<< o.diemi <<endl;
            
        }
    }
    if(dem==0) outFile<<"khong thay";

    inFile.close();
    outFile.close();
return 0;




}
