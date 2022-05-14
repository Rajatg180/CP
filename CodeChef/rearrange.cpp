#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int d;
        cin>>d;
        string num;
        cin>>num;
        bool flag=false;
        for(int i=0;i<d;i++){
            if(num[i]=='0' || num[i]=='5'){
                flag=true;
            }
        }
        if(flag==false){
            cout<<"no"<<endl;
        }
        else{
            cout<<"yes"<<endl;
        }
    }
}

