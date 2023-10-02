// nap chong toan tu
#include<bits/stdc++.h>
using namespace std;
class SinhVien{
    private:
        string id, ten, ns;
        double gpa;
    public:
        
        friend istream& operator>> (istream &in, SinhVien&a);
        friend ostream& operator<< (ostream &out, SinhVien a);
        //bool operator< (SinhVien a);
        // XÂY DỰNG BẰNG HÀM FRIEND
        friend bool operator<(SinhVien a, SinhVien b);
};
// bool SinhVien::operator<(SinhVien a){
//     return this->gpa <a.gpa;
// }
bool operator <(SinhVien a, SinhVien b){
    return a.gpa < b.gpa;
}
istream& operator>> (istream &in, SinhVien&a){
    cout<<"Nhap id: ";
    in>>a.id;
    cout<<"Nhap ten: ";
    cin.ignore();
    getline(in,a.ten);
    cout<<"Nhap ngay sinh: "; in >> a.ns;
    cout<<"GPA: "; in>> a.gpa;
    return in;
}
ostream& operator<< (ostream& out, SinhVien a){
    cout<< a.id<<" "<<a.ten <<" "<<a.ns<<" "<<a.gpa<<endl;
    return out;
}
int main(){
    // SinhVien x,y;
    // cin >> x >>y;
    // if(x <y) cout <<"yes";
    // else cout<<"no";
    // cout<< x;
    int n; cin>>n;
    SinhVien a[n];
    for(int i=0; i<n; i++){
        cout<<" Sinh vien thu "<<i+1 <<":"<<endl;
        cin>>a[i];
    }
    sort(a, a+n); //sort theo tiêu chí của operator đã tạo vd: operator<
    for(SinhVien x:a){
        cout<<x;
    }
}