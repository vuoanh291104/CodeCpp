//day con trung binh max
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k ; cin>> n >> k;
    int a[n];
    for(int &x: a){
        cin>>x;
    }
    int sum=0;
    for(int i=0; i<k; i++){  //k phan tu dau tien
        sum+=a[i];
    }
    int res= sum, idx=0;
    for(int i=k; i<n; i++){
        sum= sum- a[i-k] + a[i];
        if(sum > res){
            res= sum;
            idx= i-k +1;
        }
    }
    for( int i=0 ;i<k; i++){
        cout<< a[idx+ i]<<" ";
    }
    cout<< endl;
}
// ki thuat cua so truot