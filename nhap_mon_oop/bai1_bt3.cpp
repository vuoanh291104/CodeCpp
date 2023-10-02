//class SinhVien
/*ho ten ko qua 30 chu cai
lop theo dung dinh dang thuong dung o PTIT
ngay sinh co du 3  thanh phan dd/mm/yyyy
MSV dc gan la B20DCCN001*/
#include<bits/stdc++.h>
using namespace std;
class SinhVien{
    public:
        // SinhVien();
        // SinhVien(string, string, string, string, float);
        friend istream& operator>>(istream& in, SinhVien&a);
        friend ostream& operator <<( ostream& out, SinhVien a);

    private:
        string MSV, ho_ten, lop, ngaysinh;
        float gpa;
};
// SinhVien::SinhVien(){}
// SinhVien::SinhVien(string MSV, string ho_ten,string lop,string ngaysinh, float gpa){
//     this->MSV =MSV;
//     this->ho_ten=ho_ten;
//     this->lop =lop;
//     this->ngaysinh=ngaysinh;
//     this->gpa=gpa;
// }
istream& operator >>(istream& in, SinhVien&a){
    a.MSV="B20DCCN001";
    cin.ignore();
    getline(in,a.ho_ten);
    getline(in,a.ngaysinh);
    if(a.ngaysinh[2]!='/'){
        a.ngaysinh="0"+a.ngaysinh;
    }
    if(a.ngaysinh[5]!='/'){
        a.ngaysinh.insert(3,"0");
    }
    in>>a.lop>> a.gpa;
    return in;
}
ostream& operator <<(ostream& out, SinhVien a){
    out<< a.MSV <<" "<<a.ho_ten <<" "<<a.ngaysinh <<" "<<a.lop<<" "<<fixed<<setprecision(2)<<a.gpa<<endl;
    return out;

}
int main(){
    int n; cin>>n;
    SinhVien a[n];
    for(int i=0 ;i<n; i++){
        cin>>a[i];
    }
    for(int i=0; i<n; i++){
        cout<< a[i];
    }
    return 0;
    
}

