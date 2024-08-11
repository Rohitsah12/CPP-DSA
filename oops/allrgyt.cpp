#include<bits/stdc++.h>
using namespace std;
class Student{//Student is a new data Type
public:
    string name;
    int rno;
    float gpa;

    Student(string s,int r,float g){
        name=s;
        rno=r;
        gpa=g;
    }
};
class Car{
    public:
    string name;
    int price;
    int seats;
    int bhp; 
};
void print(Car c){
    cout<<c.name<<c.bhp<<c.seats<<c.price<<endl;
}
void change(Car& c){
    c.name="Audi A*";
}
int main(){
    Student s1("Rohit",76,8.2);
    cout<<s1.name<<" "<<s1.rno<<" "<<s1.gpa;

}