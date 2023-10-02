// tìm hiệu lớn nhất của các cặp phần tử
#include<bits/stdc++.h>
using namespace std;
int main(int argc, char* argv[]){
    int n; cin >> n;
    int a[n];
    for(int &x:a){
        cin>>x;
    }
    int min_val= a[0], res= INT_MIN;
    for(int i=0; i<n; i++){
        if(a[i] > min_val){
            res= max(res, a[i]-min_val);
        }
        min_val=min(a[i],min_val);


    }
    if(res== INT_MIN) cout<<"mang giam dan";
    else cout<< res<< endl;
    
}