//tính tổng phân số p, q và đưa kết quả về phân số tối giản
#include<bits/stdc++.h>
using namespace std;
int gcd(int a, int b){
    if(b==0) return a;
    return gcd(b, a%b);
}
int lcm( int a, int b){
    return a/gcd(a,b)*b;
}
class PhanSo{
    public:
        // PhanSo();
        // PhanSo(int,int);
        friend istream& operator>>(istream& in, PhanSo &a);
        friend ostream& operator<<(ostream& out, PhanSo a);
        friend PhanSo operator+(PhanSo a, PhanSo b);
    private:
        int tu,mau;
};
// PhanSo::PhanSo(){

// }
// PhanSo::PhanSo(int tu, int mau){
//     this->tu =tu;
//     this->mau =mau;
// }
istream& operator>>(istream& in, PhanSo &a){
    in >> a.tu >> a.mau;
    return in;
}
ostream& operator<<(ostream& out, PhanSo a){
    out<< a.tu <<"/"<<a.mau<< endl;
    return out;
}

PhanSo operator+(PhanSo a, PhanSo b){
    PhanSo tong;
    int mauchung= lcm(a.mau, b.mau);
    tong.tu= (mauchung/ a.mau) *a.tu + (mauchung/ b.mau) *b.tu;
    tong.mau= mauchung;
    int g= gcd(tong.tu, tong.mau);
    tong.tu/=g; tong.mau/=g;
    return tong;
}
int main(){
    PhanSo a,b;
    cin >> a >>b;
    cout<< a+b;
    return 0;
}
