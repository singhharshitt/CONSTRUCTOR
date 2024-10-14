// Online C++ compiler to run C++ program online
#include <iostream>
#include <string>
using namespace std;
class Student{
    string name;
    int age;
    char grade;
    public:
    Student(string naam, int a, char c){
        name= naam;
        age=a;
        grade=c;
    }
    void displayStudentInfo(){
        cout<<"Students details:--->"<<endl
        <<"Name: "<<name<<endl
        <<"Age: "<<age<<endl
        <<"Grade: "<<grade<<endl;
    }
};

int main() {
    string name;
    int age;
    char grade;
    cout<<"Enter name: ";
    getline(cin,name);
    cout<<"Enter Age: ";
    cin>>age;
    cout<<"Enter Grade: ";
    cin>>grade;
    Student s(name, age, grade);
    s.displayStudentInfo();
    return 0;
}
