#include<bits/stdc++.h>
using namespace std;
/*set: không chứa phần tử trùng lặp**
vd: input 100 200 300 200 => set: 100 200 300
trong set có thứ tự
độ phức tạp O(logn)
vd: giải bài toán: đếm xem có bao nhiêu phần tử khác nhau trong mảng
*/

int main(){
    set< int> s;
    s.insert(100); //thêm phần tử 100 vào set
    s.insert(200);
    s.insert(300);
    cout << s.size() <<endl;
//insert vào set
    for(int i=0; i<10 ; i++){
        s.insert(i);
    }
    if(s.count(5)!=0){             //tìm xem 5 có trong set ko
        cout<< "Found" <<endl;
    }
    else{
        cout<< "Not found"<<endl;
    }
// có thể tìm kiếm bằng find
    if(s.find(5)!= s.end()){             //tìm xem 5 có trong set ko
        cout<< "Found" <<endl;
    }
    else{
        cout<< "Not found"<<endl;
    }
// xóa phần tử số 5 ra khỏi set
    s.erase(5); // xóa interator trỏ đến phần tử s.erase(s.find(5));
// dùng for each duyệt qua các phần tử của set
    for(int x:s){
        cout<< x << endl;
    }
// truy cập tới gtri đang trỏ tới: cout<< *s.begin(0)+5;
//truy cập tới gtri phần tử cuối: *s.rbegin();
//làm việc với set
// mảng 5
// 1 2 5 1 2
// áp dụng đc cho cả số âm và số long long tiện hơn mảng đánh dấu
    int n; cin>>n;
    set<int>s;
    for(int i=0; i<n; i++){
        int x; cin >>x;   // khởi tạo biến tạm
        s.insert (x);
    }
    cout<<s.size()<<endl; // output: => 1 2 5
//string:
// 4
// java
// python
// java
// lap trinh
    int n; cin>>n;
    set<string> m;
    cin.ignore(); // xóa bộ đệm
    for(int i=0; i<n ; i++){
        string str;
        getline(cin,str); // khởi tạo biến tạm
        m.insert(str);
    }
    cout<<m.size()<<endl;      //=> 3 từ khác nhau
    for(string x: m){
        cout<< x <<endl;       // int ra các phần tử của set k

    }


//multiset<int> => duy trì được các phần tử giống nhau: có thứ tự
    multiset<int> ms;
    ms.insert(100);
    ms.insert(200);
    ms.insert(300);            //=> 100 100 200 300 : có thứ tự
    ms.insert(100);
    cout<< ms.size()<<endl;
    for(int x: ms){
        cout << x << " ";
    }
    cout << ms.count(100) << endl; // tìm xem có bao nhiêu phần tử 100 trong multiset => output: 2
    ms.erase(100); // xóa hết tất cả phần tử 100 có trong multiset
// muốn xóa 1 phần tử nào đó thì thông qua interator

/* cho mảng có n phần tử và số nguyên k, đối với mỗi dãy con liên tiếp
có chiều dài k, in ra phần tử max or min trong dãy con đó
vd: 10 3
    1 2 3 1 4 5 1 8 9 10  dãy 1: 1 2 3;  dãy 2: 2 3 1
output:                   dãy 3: 3 1 4;  dãy 4:1 4 5; .......
    3 3 4 5 5 8 9 10*/
    int n, k ;
    cin >>n>>k;
    int a[n];
    for(int &x : a){
        cin >> x;
    }
    multiset<int> ms;
    for(int i=0 ; i<k; i++){
        ms.insert(a[i]);       // thêm dãy con vào ms
    //ms now: 1 2 3
    for( int i=k; i <n ; i++){
        cout<< *ms.rbegin() <<" ";//out: 3 vì có thứ tự nên phần tử cuối của 1 dãy con sẽ là max của nó
        ms.erase(ms.find(a[i-k]));// mất 1 ở a[0]: xóa đi phần tử đầu của dãy con: vì mỗi dãy con liên tiếp mới  
        //                         sẽ bỏ đi phần tử đầu tiên của dãy con trước đó
        ms.insert(a[i]); // thêm 1 ở vitri a[3] vào
        // quay lại vòng lặp tăng i lên 1: now i=4; continue như v đến khi i=9 thì dừng loop
    }
    cout<< *ms.rbegin() << endl; // out: a[9]
/*unordered_set: lưu các phần tử riêng biệt nhưng ko có thứ tự: lộn xộn
thao tác tìm kiếm O(1) or O(n)*/
    unordered_set<int> us;
    for(int i=0; i<10; i++){
        us.insert(i);        //out: => 9 1 2 7 8 3 4 6 5
    }
    for(int x: us){
        cout<< x<< " ";
    }
    return 0;


}
}
