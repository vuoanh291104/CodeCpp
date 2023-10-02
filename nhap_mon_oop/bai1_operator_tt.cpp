#include<bits/stdc++.h>
using namespace std;
class SoPhuc{
    private:
        int thuc,ao;
    public:
        friend istream& operator>>(istream& in, SoPhuc&a);
        friend ostream& operator<<(ostream& out,SoPhuc a);
        // SoPhuc operator + (SoPhuc another);
        // SoPhuc operator- (SoPhuc another);
        friend SoPhuc operator + (SoPhuc a, SoPhuc b);
        //so sanh
        friend bool operator == (SoPhuc a, SoPhuc b);
};
istream& operator>>(istream& in, SoPhuc &a){
    in>>a.thuc>>a.ao;
    return in;
}
ostream& operator<<(ostream& out, SoPhuc a){
    out<< a.thuc <<" "<< a.ao;
    return out;
}
// SoPhuc SoPhuc::operator+(SoPhuc another){
//     SoPhuc tong;
//     tong.thuc = this->thuc + another.thuc;
//     tong.ao= this->ao +another.ao;
//     return tong;
// }
// SoPhuc SoPhuc::operator-(SoPhuc another){
//     SoPhuc hieu;
//     hieu.thuc = this->thuc - another.thuc;
//     hieu.ao= this->ao -another.ao;
//     return hieu;
// }
SoPhuc operator + ( SoPhuc a, SoPhuc b){
    SoPhuc tong;
    tong.thuc =a.thuc + b.thuc;
    tong.ao= a.ao + b.ao;
    return tong;
}
bool operator ==(SoPhuc a, SoPhuc b){
    return a.thuc == b.thuc && a.ao == b.ao;
}
int main(){
    SoPhuc a,b;
    cin>> a >> b;
    SoPhuc tong= a+b;
    cout<<tong<<endl;
    // SoPhuc hieu= a-b;
    // cout<< tong<<"\n" <<hieu<<endl;
    if( a==b) cout<<"yes";
    else cout<< "no";
}