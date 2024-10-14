#include <iostream>
using namespace std;
class Book{
    string title;
    string author;
    float price;
    public:
    Book(){
        title="Time story";
        author = "Sam D Kenny";
        price=275.50;
    }
    void showDetails(){
        cout<<"Books Details are-->"<<endl;
        cout<<"Title: "<<title<<endl;
        cout<<"Author: "<<author<<endl;
        cout<<"Price: "<<price<<endl;
    }
    
};
int main(){
    Book b;
    b.showDetails();
    return 0;
}
