#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int num,temp,rem=0,count=0,status=0;
        cin>>num;
        temp=num;
        while(temp>0){
            if(temp%10==0){
                rem=temp/10;
                status=1;
            }
            else{
                rem=temp%10;
                status=0;
            }
            if(num%rem==0 && rem!=0 && status==0){
                count++;
            }
            temp=temp/10;
        }
        cout<<count<<endl;

    }
     return 0;
}