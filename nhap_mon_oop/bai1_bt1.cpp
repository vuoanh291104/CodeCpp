//class pha so in ra phan so toi gian
#include<bits/stdc++.h>
using namespace std;
//ham tim UCLL
int gcd(int a,int b){
    if(b==0) return a;
    return gcd(b, a % b);
}
class PhanSo{
    public:
        //PhanSo(int tu, int mau);
        friend istream& operator>>(istream &in, PhanSo &a);
        friend ostream& operator<<(ostream& out, PhanSo a);
        void rutgon();
    private: 
        int tu, mau;
};
istream& operator>>(istream& in, PhanSo &a){
    in>>a.tu >> a.mau;
    return in;
}
ostream& operator<<(ostream& out, PhanSo a){
    out<<a.tu<<"/"<<a.mau;
    return out;
}
// PhanSo::PhanSo(int tu, int mau){
//     this->tu=tu;
//     this->mau=mau;
// }
void PhanSo::rutgon(){
    int g=gcd(tu,mau);
    tu/=g;
    mau/=g;
} 
int main(){
    PhanSo p;
    cin>>p;
    p.rutgon();
    cout<<p;
    return 0;
}