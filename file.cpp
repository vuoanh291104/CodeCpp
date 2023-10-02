#include<bits/stdc++.h>
using namespace std;
struct ThongTin{
    string ten;
    string que;
    string team;
    int score_katsu;
    int score_makeru;
};
//khai báo cấu  trúc danh sách player
struct danhsach{
    ThongTin *ds;// khai báo con trỏ để quản lí mảng động
    int n; //số lượng hiện có
};
//hàm đọc file-> đọc thông tin 1 người từ file
void read_thong_tin(fstream &inFile, ThongTin &player){
    getline(inFile, player.ten,';');
    getline(inFile,player.que,';');
    getline(inFile,player.team,';');
    inFile>>player.score_katsu;
    inFile>>player.score_makeru;
}
void doc_danhsach_player(fstream &inFile, ThongTin &player){
    
}

int main(int argc, char* argv[]){
    fstream inFile;
    inFile.open(argv[1],ios::in);
    if(!inFile.is_open()){
        cout<<"File invalid"<<endl;
        exit(0);
    }
    ThongTin x;
    string s;
    int dem=0;
    while(getline(inFile,s)){
        dem++;
    }
   
    
    

    inFile.close();
    return 0;
}