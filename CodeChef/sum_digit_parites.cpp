#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define REP(i,a,b) for (int i=a,i<b;i++)
ll sumofdigit(ll n){
    ll r=0;
    ll s=0;
    while(n!=0){
        r=n%10;
        n=n/10;
        s+=r;
    }
    return s;

}
int main(){
int t;
cin>>t;
while(t--){
    ll n;
    cin>>n;
    int ans=sumofdigit(n);
    ll ans1=sumofdigit(n+1);
    if(ans%2==0 && ans1%2!=0 ||ans%2!=0 && ans1%2==0){
        cout<<n+1<<endl;
    }
    else{
        cout<<n+2<<endl;
    }
    
}
return 0;
}