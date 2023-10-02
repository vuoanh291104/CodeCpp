// vector giống mảng động: có thể truy cập chỉ số như mảng
// thay đổi được kích thước, tự động tăng kích thước khi thêm phần tử
#include<bits/stdc++.h>
#include<vector>
using namespace std;
// vector <kieu dư lieu> ten vecto
//size(): kich thuoc vecto
int main(){
    vector<int> v; //khai báo vecto có sẵn n phần tử vector<int> v(n);
// cho phép đẩy 1 phần tử vào vecto: push_back 
    v.push_back(20);              //như 1 mảng: 20 10 30
    v.push_back(10);
    v.push_back(30);
    cout<< v.size()<<endl;
    cout<<"phan tu dau tien trong vecto:" <<v[0] << endl; // truy cập phần tử đầu tiên trong vecto
    cout<<" phan tu cuoi cung trong vector:"<<v[v.size()-1]<< endl;
    cout<<" phan tu cuoi cung trong vector:"<<v.back() << endl;
//duyệt qua các phần tử của vecto
// or
//     for(int x:v){
//         cout<<x;
//     }
    for(int i=0; i<v.size(); i++){
        cout<<v[i];
    }
/*hoặc cách khác duyệt vecto
for(vector<int>::iterator it=v.begin(); it!= v.end(); ++it){
    cout<< *it<< endl;
or: for(auto it= v.begin(); it!= v.end(); ++it){
    cout<< *it<< endl;
}
}*/
// v[2] tương đương *(v.begin(0)+2);

    return 0;

}