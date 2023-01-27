#include<bits/stdc++.h>
using namespace std;
class student{
    string passcode;
    public:
        string name;
        int id;
    student(){

    }

    student(string pss, string n, int i){
        name = n;
        i = id;
        passcode = pss;
    }

    void into(){
        cout << name << endl;
        cout << id << endl;
        cout << passcode << endl;
    }

    void setPass(string s){
        passcode = s;
    }
};

int main(){
    student s1;
    student s2("10", "Mohit", 1);

    int a = 10;
    int*ptri = &a;
    student*ptrs = &s2;

    if(sizeof(ptri) == sizeof(ptrs))
        cout << "true" << endl;
    else
        cout << "false" << endl;
    return 0;
}