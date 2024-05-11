#include<bits/stdc++.h>
using namespace std;
class Student{
    private:
    string name;
    int age,roll_number;
    string grade;
    //Function Getter  and Setter
    public:
    void setname(string s){
        name=s;
    }
    void setage(int a){
        age=a;
    }
    void setroll_number(int r){
        roll_number=r;
    }
    void setgrade(string g){
        grade=g;
    }
    
};
int main(){
    Student S1;
    S1.setname("Rohit");
    S1.setage(10);
    S1.setroll_number(21);
    S1.setgrade("A+");

}