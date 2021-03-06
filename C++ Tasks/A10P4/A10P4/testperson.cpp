/*
CH-230-A
a10 p4.[c or cpp or h]
Jose Biehl
j.biehl@jacobs-university.de
*/
#include "Person.h"
#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    bool depression;
    int age;
    double height;
    string name;
    cout<<"enter name ";
    getline(cin, name);
    cout<<"enter age ";
    cin>>age;
    cin.ignore();
    cout<<"enter height ";
    cin>>height;
    cout<<"am I depressed: 1 is yes, 0 is no ";
    cin>>depression;

    Person p;
    p.setAge(age);
    p.setName(name);
    p.setDepressed(depression);
    p.setHeight(height);

    std::cout << "Hello, my name is "<<p.getName()<<", I am "<<p.getAge();
    cout<<" years old, I am " <<p.getHeight()<<" meters tall, and I am ";
    cout<<(p.getDepressed() == 1? "" : "not")<<" depressed."<<endl;
    return 0;
}
