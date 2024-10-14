#include <iostream>
#include <string>
using namespace std;

class Rectangle {
    int length;
    int width;

public:

    Rectangle(int l, int w) : length(l), width(w) {}

    Rectangle(const Rectangle &cp) {
        length = cp.length;
        width = cp.width;
    }

    int calculateArea() {
        return length * width;
    }

    void displayArea() {
        cout << calculateArea() << endl;  
    }
};

int main() {
    int len, wid;
    cout << "Enter length: ";
    cin >> len;
    cout << "Enter width: ";
    cin >> wid;

    Rectangle r(len, wid);

    Rectangle k = r;

    cout << "Area: ";
    r.displayArea(); 

    cout << "Area by copy constructor: ";
    k.displayArea();  

    return 0;
}
