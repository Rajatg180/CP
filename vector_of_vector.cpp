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
    cout<<"Enter size of outer vector "<<endl;
    cin>>N;
    vector<vector<int>> v;
    for(int i=0;i<N;i++){
        int n;
        cout<<"Enter Size inner of vector : "<<endl;
        cin>>n;
        vector<int> temp;
        for(int j=0;j<n;j++){
            int x;
            cout<<"Enter element for inner vector :"<<endl;
            cin>>x;
            temp.push_back(x);
        }
        v.push_back(temp);
    }
    for(int i=0;i<v.size();i++){
        printVector(v[i]);
    }
    return 0;
}