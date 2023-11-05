#include <iostream>
#include <algorithm>

using namespace std;

typedef long long ll;

ll my_pow(int base){
    ll ans=1;
    for(int i=0;i<base;i++){
        ans*=base;
    }
    return ans;
}
int main(){
    long long b;
    cin>>b;
    int result=-1;
    for(int i=1;i<=20;i++){
        if(my_pow(i)==b){
            result=i;
            break;
        }
    }
    cout<<result<<endl;
    return 0;
}
