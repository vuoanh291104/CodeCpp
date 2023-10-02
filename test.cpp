#include<iostream>
#include<fstream>
using namespace std;
int main(int agrc, char* argv[]){
    ifstream inFile;
    inFile.open(argv[1]);// nhập đường dẫn vào cmd line
    if(!inFile.is_open()){
        cout<<"File invalid"<<endl;
        exit(0);
    }
    cout<<"file load"<<endl;
    string line;
    int dem=0;
    while(getline(inFile,line)){
        dem++;
    }
    cout<<dem;
    return 0;
}