#include<bits/stdc++.h>

using namespace std;

int maxi(int n1, int n2){
    if(n1>n2) return n1;
    return n2;
}

int maxi3(int n1, int n2, int n3){
    if(n1>n2){
        if(n1>n3) return n1;
        return n3;
    }
    else{
        if(n2>n3) return n2;
        return n3;
    }
}

int main(){
    cout << maxi(2,5);
    cout << maxi3(2,5,3);
    return 0;
}