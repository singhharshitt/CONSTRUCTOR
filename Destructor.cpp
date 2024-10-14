#include <iostream>
using namespace std;
int count = 0;
class Demo{
    public:
    Demo(){
        count++;
        cout<<"Number of Object created: "<<count<<endl;
    }
    ~Demo(){
        count--;
        cout<<"Number of object deleted: "<<count<<endl;
    }
    
};

int main() {
    Demo aa, bb, cc, dd;
    {
        Demo ee; 
    }
    return 0;

}
