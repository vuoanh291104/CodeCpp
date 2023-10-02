#include<bits/stdc++.h>
using namespace std;
//pair có thể là vecto or set....: tạo, nhóm cặp dữ liệu
// pair<datatype1, datatype2> v;
//pair giống struct
// v.first
// v.second
// struct pair{
//     int first;
//     int second;
// }
/*tuple nhóm nhiều các cặp dữ liệu
tuple<int, int, int> t{1,2,3};
truy cập vào từng phần tử:
    cout << get<0>(t) << endl;
    cout << get<1>(t) << endl;
*/
/*hoặc
    tuple<string, int, string> t=make_tuple("java", 100, "python");
    cout<< get<0>(t) <<endl;
    cout<< get<1>(t) <<endl;
*/
int main(){
    pair<int,int> v =make_pair(100,200); //khởi tạo phần tử cho pair
    //HOẶC pair<int,int> v ={100,200};
    cout<< v.first<<endl;
    cout<<v.second<<endl;
    return 0;

}