#include<iostream>
using namespace std;

class sum1{
    int n;
    public:
    sum1(){}
    sum1(int n)
    {
        this -> n = n;
    }
    sum1 operator-()
    {
        sum1 c3;
        return c3 = -1 *n;

    }
    sum1 show()
    {
        cout << n << endl;
    }
    friend sum1 operator++(sum1&c);
    friend sum1 operator++(sum1&c,int);
    friend sum1 operator--(sum1&c);
    friend sum1 operator--(sum1&c,int);
};
sum1  operator++(sum1&c)
{   
    c.n++;
}
sum1 operator++(sum1&c , int )
{
    ++c.n;  
}
sum1 operator--(sum1&c,int)
{
    c.n--;
}
sum1 operator--(sum1&c)
{
    --c.n;
}

int main()
{
    sum1 c1(1);
    sum1 c3 =-c1;

    cout << "unary : ";
    c3.show();

    cout << "preincrementS :  ";
    ++c1;
    c1.show();

    cout << "post-increment : ";
    c1++;
    c1.show();

    cout << "predecrement : ";
    --c1; 
    c1.show();

    cout << "postdecrement : ";
    c1--; 
    c1.show();
}