#include<bits/stdc++.h>
using namespace std;

class student{
    string passcode;
    friend class bestfriend;
    protected:
        int age;
    public:
        string name;
        int id;

    student(){

    }

    student(int id, string name, string passcode, int age){
        this->name = name;
        this->id = id;
        this->passcode = passcode;
        this->age = age;
    }

    void into(){
        cout << name << endl;
        cout << id << endl;
        cout << age << endl;
    }

    friend void hacker(student s);

};

void hacker(student s){
    cout << s.passcode << " " << s.age << endl;
}

int main(){
    student s2(1, "Mohit", "0001", 10);
    return 0;
}