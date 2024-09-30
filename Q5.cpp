#include <iostream>
using namespace std;

class AbstractionExample {
private:
    int a, b; 

public:
   
    void setValues(int x, int y) {
        a = x;
        b = y;
    }

    void displayValues() {
        cout << "a = " << a << endl;
        cout << "b = " << b << endl;
    }
};

int main() {
    AbstractionExample obj;
    obj.setValues(10, 20); 
    obj.displayValues();   

    return 0;
}
