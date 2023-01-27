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
    return 0;
}