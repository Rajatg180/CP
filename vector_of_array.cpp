#include<bits/stdc++.h>
using namespace std;
void printVector(vector<int> v){
    cout<<"SIZE:"<<v.size()<<endl;
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" "<<endl;
    }
}
int main(){
    int N;
    cout<<"Enter size of array "<<endl;
    cin>>N;
    vector<int> v[N];
    for(int i=0;i<N;i++){
        int n;
        cout<<"Enter Size of vector : "<<endl;
        cin>>n;
        for(int j=0;j<n;j++){
            int x;
            cout<<"Enter element for vector :"<<endl;
            cin>>x;
            v[i].push_back(x);
        }
    }
    for(int i=0;i<N;i++){
        printVector(v[i]);
    }
    return 0;
}