#include<bits/stdc++.h>
using namespace std;
//khoảng cách nhỏ nhất: cho mảng A chỉ số i # j tìm max(a[i],a[j])- min(a[i],a[j]) nhỏ nhất
int cmp(const void *a, const void *b){
    const int *x= (int*)a;
    const int *y= (int*)b;
    if(*x >* y) {
        return 1;
    }else return -1;
    return 0;
}
int main(){
    int n; cin>>n;
    int a[10000];
    for(int &x: a){
        cin >>x;
    }
    qsort(a,n,sizeof(int),cmp);
    int res=INT_MAX;
    for(int i=1; i<n; i++){
        res=min(res,a[i]-a[i-1]);

    }
    cout<< res <<endl;
    return 0;

}