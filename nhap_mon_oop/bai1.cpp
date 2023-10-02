/*class
attribute
method, behavior
object
constructor
destructor
this pointer
setter, getter
static
friend class, friend function: ko phải hàm của class hiện tại, nhưng có thể truy cập vào thông tin của class
10.forward declaration

*/
#include<bits/stdc++.h>
using namespace std;
class GiaoVien; //10
class SinhVien; //10

class SinhVien{
    friend class GiaoVien; //class giaovien la ban cua class sinhvien, co truy truy cap moi ptu trong class SinhVien

    private:
        string id, ten, ns;
        double gpa;
        static int dem;
    public:
        //constructor
        SinhVien();
        SinhVien(string, string, string, double);
        void xinchao();
        void dihoc();
        void nhap();
        void in();
        double getGPA();     //lấy giá trị
        string getID();
        string getName();
        string getNS();
        void setGPA(double);  //gán lại giá trị
        void tangDem();
        int getDem();
        friend void in_thong_tin(SinhVien);
        //viết hàm chuẩn hóa tên_ vd: NGUYEn VaN a => Nguyen Van A
        friend void chuan_hoa(SinhVien&);
        //destructor: hàm hủy
        //~SinhVien();
};
//implementation
// void SinhVien::xinchao(){
//     cout<< "Hello\n";
// }
// void SinhVien::dihoc(){
//     cout<<"di hoc\n";
// }
SinhVien::SinhVien(){
    //cout<<"ham khoi tao duoc goi\n";
}
SinhVien::SinhVien(string id, string ten, string ns, double gpa){
    //cout<<" ham khoi tao co tham so\n";
    this->id= id;
    this->ten=ten;
    this->ns= ns;
    this->gpa=gpa;
}
int SinhVien::dem=0;
void SinhVien::tangDem(){
    ++dem;
}
int SinhVien::getDem(){
    return dem;
}
void SinhVien::nhap(){
    //cout<<"nhap id:"; cin >> this->id;
    //cin.ignore();
    ++dem;
    this->id="SV" + string(3- to_string(dem).length(),'0')+to_string(dem);
    //dem= 1 =>SV001;
    cout<<"nhap ten:"; getline(cin,this->ten);
    cout<<"nhap ngay sinh: "; getline(cin,this->ns);
    cout<<"nhap diem: "; cin >> this->gpa;
    cin.ignore();
}
void SinhVien::in(){
    cout<< this->id <<" "<<this->ten <<" "<<this->ns<<" "<<fixed << setprecision(2)<< this->gpa<<endl;

}
double SinhVien::getGPA(){
    return this->gpa;
}
string SinhVien::getID(){
    return this->id;
}
//FRIEND FUNCTION: ham ban co the truy cap vao class SinhVien
void in_thong_tin(SinhVien a){
    cout<< a.id << " "<< a.ten <<endl;
}
//do thay đổi nên phải dùng &
void chuan_hoa(SinhVien &a){
    string res="";
    stringstream ss(a.ten);
    string token;
    while(ss >>token){
        res+=toupper(token[0]);
        for(int i=1; i< token.length(); i++){
            res+=tolower(token[i]);
        }
        res+=" ";
    }
    res.erase(res.length()-1);
    a.ten= res;
}
void SinhVien::setGPA(double gpa){
    this->gpa=gpa;
}
// SinhVien::~SinhVien(){
//     cout<<"doi tuong duoc huy tai day \n"; //sau khi hết SinhVien x thì bị hủy
// }
bool cmp(SinhVien a, SinhVien b){
    return a.getGPA() > b.getGPA();
}

class GiaoVien{
    private:
        string khoa;
    public: 
        void uppdate(SinhVien&);
};
void GiaoVien::uppdate(SinhVien& x){
    x.gpa= 3.20;
}
int main(){
    //SinhVien x("123","Nguyen Van A","2004/07/03", 3.5);
    //SinhVien x;
    // x.nhap();
    // x.in();
    // x.dihoc();
    // x.xinchao();
    // int n; cin>> n;
    // SinhVien a[100];
    // for(int i=0 ;i <n; i++){
    //     a[i].nhap();
    // }
    // sort(a, a+n, cmp);
    // for(int i=0 ;i <n; i++){
    //     a[i].in();
    // }
    // x.setGPA(2.18);
    // x.in();
     SinhVien x;
     GiaoVien y;

     x.nhap();
     chuan_hoa(x);
     y.uppdate(x);
     x.in();
     //in_thong_tin(x);
    // x.tangDem(); //1
    // x.tangDem(); //2
    // SinhVien y;
    // cout<< y.getDem() <<endl;
    // return 0;

}