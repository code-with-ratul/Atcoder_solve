//problem link: https://atcoder.jp/contests/abc233/tasks/abc233_b
#include <iostream>
#include<string>
using namespace std;
int main()
{
    int l,r;std::cin >>l>>r;
    string a;cin>>a;
    
    for(int i=0;i<l-1;i++){
        cout<<a[i];
    }
    for(int i=r-1;i>=l-1;i--){
        cout<<a[i];
    }
    for(int i=r;i<a.length();i++){
        cout<<a[i];
    }cout<<endl;
    return 0;
}
