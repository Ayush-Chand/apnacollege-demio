#include <iostream>
using namespace std;

class sum1 {
    int n;
public:
    sum1() : n(0) {}
    sum1(int n) : n(n) {}

    sum1 operator-() {
        return sum1(-n);
    }

    void show() const {
        cout << n << endl;
    }

    // Pre-increment
    sum1& operator++() {
        ++n;
        return *this;
    }

    // Post-increment
    sum1 operator++(int) {
        sum1 temp = *this;
        ++n;
        return temp;
    }

    // Pre-decrement
    sum1& operator--() {
        --n;
        return *this;
    }

    // Post-decrement
    sum1 operator--(int) {
        sum1 temp = *this;
        --n;
        return temp;
    }
};

int main() {
    sum1 c1(1);
    sum1 c3 = -c1;

    cout << "Unary minus: ";
    c3.show();

    cout << "Pre-increment: ";
    ++c1;
    c1.show();

    cout << "Post-increment: ";
    c1++;
    c1.show();

    cout << "Pre-decrement: ";
    --c1;
    c1.show();

    cout << "Post-decrement: ";
    c1--;
    c1.show();

    return 0;
}
