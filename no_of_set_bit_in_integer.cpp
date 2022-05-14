/*
1) __builtin_popcount()-->gives no of set bits in integer
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    cout<<__builtin_popcount(n)<<"";//for integer
    //__builtin_popcountl()-->for long data type
    //__buitlin_popcountll()-->for long long data type
    
    return 0;
}