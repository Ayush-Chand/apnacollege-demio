#include<iostream>

using namespace std;

class complex{
    
    public:
    int real;
    int img;
    complex(int r =0 , int i = 0): real(r),img(i){}
    complex operator +(const complex& other)
    {
        return complex(real + other.real, img + other.img);
        
    }
    complex operator-(const complex& other)
    {
        return complex(real - other.real, img - other.img);
    }
    bool operator==(const complex& other)
    {
        return (real == other.real, img == other.img);
    }

    void show()
    {
        cout << real << '+' << img << 'i' <<endl;
    }
};
int main()
{
    complex c1(2,5),c2(2,5);

    complex c3 = c1 + c2;//c3 = c1.operator+(c2)
    complex c4 = c1 - c2;

    cout << "c1 : ";
    c1.show();
    cout << "c2 : ";
    c2.show();
    cout << "c1 + c2: ";
    c3.show();
    cout << "c1 - c2: ";
    c4.show();

    if(c1 == c2)
    {
        cout << "both are equal to each other";
    }
    else{
        cout << "both are not equal to each other";
    }
    
}