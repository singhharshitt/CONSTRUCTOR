#include <iostream>
#include <string>
using namespace std;

class car{
    string brand;
    string model;
    int year;
    public:
    car(){
        brand= "Unknown";
        model= "Generic";
        year=2000;
    }
    void displayCarInfo(){
        cout<<"Here, The Car Details: "<<endl;
        cout<<"Brand: "<<brand<<endl;
        cout<<"Model: "<<model<<endl;
        cout<<"Year: "<<year<<endl;
    }
};
int main(){
    car c;
    c.displayCarInfo();
    return 0;
}
