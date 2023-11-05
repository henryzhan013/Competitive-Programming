#include <iostream>
#include <algorithm>

using namespace std;

typedef long long ll;
int a[10][10];

bool check33(int x,int y){
    int aa[10];
    int cnt=1;
    for(int i=x;i<=x+2;i++){
        for(int j=y;j<=y+2;j++){
            aa[cnt]=a[i][j];
            cnt++;
        }
    }

    for(int i=1;i<=9;i++){
        for(int j=i+1;j<=9;j++){
            if(aa[i]==aa[j]){
                return false;
            }
        }
    }
    return true;
}
bool solve(){
    for(int i=1;i<=9;i++){
        for(int j=1;j<=9;j++){
            cin>>a[i][j];
        }
    }
    for(int i=1;i<=9;i++){
        for(int j=1;j<=9;j++){
            for(int k=j+1;k<=9;k++){
                if(a[i][j]==a[i][k]){
                    return false;
                }
            }
        }
    }
    for(int i=1;i<=9;i++){
        for(int j=1;j<=9;j++){
            for(int k=j+1;k<=9;k++){
                if(a[j][i]==a[k][i]){
                    return false;
                }
            }
        }
    }
    for(int i=1;i<=9;i+=3){
        for(int j=1;j<=9;j+=3){
            if(!check33(i,j)){
                return false;
            }
        }
    }

    return true;
}

int main(){
    bool good=solve();
    if(good){
        cout<<"Yes"<<endl;
    }else{
        cout<<"No"<<endl;
    }
    return 0;
}
