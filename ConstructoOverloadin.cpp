#include <iostream>
#include <string>
using namespace std;
class Box{
    int length;
    int width;
    int height;
    public:
    //default constructor--
    Box(){
        length= 10;
        width= 20;
        height= 30;
    }
    //Parameterized
    Box(int l, int w, int h){
        length=l;
        width = w;
        height= h;
    }
    
    //Copy constructor
    Box(Box &cp){
        length= cp.length;
        width = cp.width;
        height= cp.height;
    }
    void vol(){
        cout<< "Volume: "<< length * width * height<<endl;
    } 
    void display(){
        cout<<"Length: "<<length<<endl<<"Width: "<<width<<endl<<"Height: "<<height<<endl;
    }

};

int main(){
    int len,wid, hit;
    cout<<"By default constructor: ";
    Box b;
    b.vol();
    b.display();
    cout<<"Enter length: ";
    cin>>len;
    cout<<"Enter Width: ";
    cin>>wid;
    cout<<"Enter Height: ";
    cin>>hit;
    Box b2(len, wid, hit);
    cout<<"By Parameterized constructor: ";
    b2.vol();
    b2.display();
    Box b3=b2;
    cout<<"By Copy constructor: ";
    b3.vol();
    b3.display();
    return 0;
}
