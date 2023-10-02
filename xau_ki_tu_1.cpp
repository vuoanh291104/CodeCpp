#include<iostream>
#include<math.h>
using namespace std;
int main(){
    string s;
    int n; cin>> n;
    cin.ignore();
// cin>>s; có dấu cách thì ko hoạt động vd: lap trinh => out: lap
// getline: đọc xâu có dấu cách  ; có thể bị trôi lệnh
// getline đọc phím enter trong bộ đệm do cin>>n để lại 
// => sd cin.ignore(1); (1):cần xóa 1 ktu: xóa kí tự enter do bộ đệm để lại
    getline(cin,s);
    cout<<s;
    // nối xâu bằng +
    // string a="python";
    // string b= "java";
    // string c= a+b; hoặc a+=b
    // cout << c<< endl; hoặc  cout<< a<<endl;


// a==b : so sáng xem hai xâu có bằng nhau ko
// cắt chuỗi
// string a="abcdef";
// string b=a.substr(vị trí bắt đầu cắt, số kí tự cần cắt) vd: a.substr(2,3)=> out:cde
/* chuyển kí tự thành số 
    vd: string a="123456"   đây là kí tự dạng số
    int x= stoi(a)
    cout<< x <<endl ====> out: 123456:   đây là 1 số nguyên*/

/*chuyển số thành xâu
   int n=123456
   string s= to_string(n) =====>out: 123456 :   đây là xâu kí tự
   cout<< s; */
/*tách từng từ trong xâu  ra
#include<bits/stdc++.h>
vd: string s= " java   python      c  c++" 
    stringstream   ss(s);
    string tmp;
    int cnt =0;
    while( ss >> tmp){
        cout<< tmp << endl;
        cnt++;
    }                     output: java        python   c++    c  
    cout<< cnt;                   5                               */
/*vd tách từ như chuỗi sau
string s=" java.pyhthon.c.oanh"
stringstream   ss(s);
    string tmp;
    while( getline(ss,tmp,'.')){             output: kéo theo dấu chấm
        cout<< tmp << endl;                          java.
*/
    return 0;

}