#include<bits/stdc++.h>
#include<string>
#include<sstream>
using  namespace std;
struct Company{
    int rank;
    string global_company;
    string country;
    double sales;
    double profit; 
    double assets;	
    double market_value; 
    
};
struct Company1{
    int rank1;
    string global_company1;
    string country1;
    string sales1;
    string profit1; 
    string assets1;	
    string market_value1; 
    
};
double getAmou(string s){
    string kq="";
    for(auto c:s){
        if(isdigit(c) || c=='.' || c=='-'){
            kq+=c;
        } 
    }
    if(s.back()=='B'){
        return stod(kq)*1000;
    }else return stod(kq);
}
int main(int argc, char* argv[]){
    if(argc!=9){
        cout<<"thieu dau vao";
        exit(0);
    }
    string path_in;
    string path_out;
    string name;
    double value;
    for(int i=0; i<argc; i++){
        if(string(argv[i])==string("-pi")){
            path_in=argv[i+1];
        }else if(string(argv[i])==string("-n")){
            name=argv[i+1];
        }else if(string(argv[i])==string("-x")){
            value=stod(argv[i+1]);
        }else if(string(argv[i])==string("-o")){
            path_out=argv[i+1];
    }
}
    fstream inFile,outFile;
    inFile.open(path_in,ios::in);
    outFile.open(path_out,ios::out);
    if(!inFile.is_open()){
        cout<<"File invalid"<<endl;
        exit(0);
    }
    vector <Company> list_company;
    vector<Company1> list_dau;
    string line;
    getline(inFile,line);
    while (getline(inFile,line)){
        istringstream iss(line);
        string token;
        Company x;
        Company1 y;
        getline(iss,token,',');
        x.rank=stoi(token);
        y.rank1=stoi(token);
        getline(iss,token,',');
        x.global_company=token;
        y.global_company1=token;
        getline(iss,token,',');
        x.country=token;
        y.country1=token;
        getline(iss,token,',');
        y.sales1=token;
        token.erase(token.begin());
        for(int i=0; i<token.length(); i++){
            if(token[i]=='M'){
                token.erase(token.begin()+i);
                x.sales=stod(token);
            }else if(token[i]=='B'){
                double b=1000;
                token.erase(token.begin()+i);
                x.sales=stod(token)*b;
            }
        }
        getline(iss,token,',');
        y.profit1=token;
        token.erase(token.begin());
        for(int i=0; i<token.length(); i++){
            if(token[i]=='M'){
                token.erase(token.begin()+i);
                x.profit=stod(token);
            }else if(token[i]=='B'){
                double b=1000;
                token.erase(token.begin()+i);
                x.profit=stod(token)*b;
            }
        }
        getline(iss,token,',');
        y.assets1=token;
        token.erase(token.begin());
        for(int i=0; i<token.length(); i++){
            if(token[i]=='M'){
                token.erase(token.begin()+i);
                x.assets=stod(token);
            }else if(token[i]=='B'){
                double b=1000;
                token.erase(token.begin()+i);
                x.assets=stod(token)*b;
            }
        }
        getline(iss,token,',');
        y.market_value1=token;
        token.erase(token.begin());
        for(int i=0; i<token.length(); i++){
            if(token[i]=='M'){
                token.erase(token.begin()+i);
                x.market_value=stod(token);
            }else if(token[i]=='B'){
                double b=1000;
                token.erase(token.begin()+i);
                x.market_value=stod(token)*b;
            }
        }
        list_company.push_back(x);
        list_dau.push_back(y);
    }
    for(Company1 k: list_dau){
        if(k.country1==name){
            outFile<< k.rank1<<"," <<k.global_company1<<","<<k.country1 <<","<<k.sales1 <<","<<k.profit1<<"," <<k.assets1<<"," <<k.market_value1<<endl;
           
        }
    }
    map<string,int> country_cout;
    for(Company j: list_company){
        country_cout[j.country]++;
    }
    for(auto i: country_cout){
        cout<<i.first <<" "<<i.second<<endl;
    }
    //top 10 cty
    // for(int i=0; i<list_company.size(); i++){
    //     for(int j=i+1; j<list_company.size();i++){
    //         if(list_company[i].profit <list_company[i].profit){
    //             auto tmp= list_company[i];
    //             list_company[i]=list_company[j];
    //             list_company[j]=tmp;
    //         }
    //     }
    // }
    // for(int i=0; i<10;i++){
    //     cout<<list_company[i].global_company << " "<< list_company[i].profit<<endl;
    // }


   
//or dùng multimap
// multimap<double,string> mt; // sắp xếp giảm dần theo key multimap<double,string,greater<double>> mt;

// for(Company x:list_company){
//     mt.insert(make_pair(x.profit,x.global_company));

// }
// //interator
// auto it =mt.end();   //mt.end ở sau phần tử cuối cùng nên phải --it trước;
// for(int i=0; i<10; i++){
//     it--;
//     cout<<it->first << " " <<it->second<<endl;
// }
// cout<<"In ra có bao nhiêu và tên của các công ty có profit lớn hơn value";
//     int dem=0;
//     for(Company k: list_company){
//         if(k.profit > value){
//             dem++;
//             cout<< k.global_company<<endl;
//         }
//     }
//     cout<<dem<<endl;
//     cout<< "In ra tên các công ty đang có lợi nhuận (profit) âm";
//     for(Company k: list_company){
//         if(k.profit <0){
//             cout<< k.rank<<" "<<k.global_company<<endl;
//         }
//   
 inFile.close();
 outFile.close();
}
