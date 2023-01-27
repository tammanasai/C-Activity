#include<bits/stdc++.h>

using namespace std;

int maxi(int n1, int n2){
    if(n1>n2) return n1;
    return n2;
}

int main(){
    cout << maxi(2,5);
    return 0;
}