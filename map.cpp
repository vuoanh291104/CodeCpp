#include<bits/stdc++.h>
using namespace std;
//map có thứ tự, không chứa các phần tử là cặp key: duy nhất
// nma values lặp lại đc O(logN) : dùng sắp xếp, tìm kiếm;  map lưu các pair
int main(){
    map<int, int> mp;
    mp[100]=200; // thêm cặp key value vào map (100,200)
    mp[200]=300; // thêm cặp key value vào map (200,300)
    mp.insert({300,400});  // hoặc thêm như này: 1 map là các pair
    mp.insert({400,500});
    cout<< mp.size() << endl;
    for(pair<int,int> x: mp){   //hoặc for(auto x: mp)
        cout<<x.first<< " " << x.second << endl;
    }
//tìm kiếm: thường là key  hàm count hoặc find giống set
    if(mp.count(500)!=0){
        cout<< "FOUND\n";
    }else{
        cout<<"not found\n";
    }
    mp.erase(100);  // sẽ xóa cả cặp (100, 200)
    for(auto x: mp){
        cout<< x.first << " " << x.second << endl;
    }
/*đếm số lần xuất hiện của các phần tử trong mảng, sau đó in ra kèm theo tần suất
::::=> key: phần tử ;        value:  số lần xuất hiện
vd: 8
1 1 2 1 3 5 1 -4
output:
1 4
2 1
3 1
-4 1
5 1   */   
    map<int, int> mpp;
    int n; cin>>n;
    
    for(int i=0; i<n; i++){
        int x; cin>> x;  // nhập từng phần tử của mảng như 1 key  nhập   x=1 ->  x=1
        mpp[x]++;   // x lúc này là key trong map  value sẽ là số lần ++ mpp[1]++-> mpp[1]++ ==2
        //loop lại
    }
    for(auto it: mpp){
        cout<< it.first << " " << it.second <<endl; // in từng cặp key value trong map

    }
/*in theo thứ tự xuất hiện của mảng
map<int, int> mpp;
    int n; cin>>n;
    int a[n];
    for(int i=0; i<n; i++){
        cin>> a[i];  // nhập từng phần tử của mảng như 1 key  nhập   x=1 ->  x=1
        mpp[a[i]]++;   // x lúc này là key trong map  value sẽ là số lần ++ mpp[1]++-> mpp[1]++ ==2
        //loop lại
    }
    for(int i=0; i<n; i++){
        if(mpp[a[i]]!=0){
        cout<< a[i] << " " << mpp[a[i]]  <<endl; // in từng cặp key value trong map
        mpp[a[i]]=0;  gán tần số xuất hiện bằng 0 vì a[0]=1 duyệt mảng in ra mpp[1] là 4
nếu không gán lại mpp[1] =0 thì duyệt đến a[1]= 1 thì lại in ra mpp[1] là 4
        }
    }
*/


}