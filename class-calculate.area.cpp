#include<iostream>

using namespace std;

class area
{
    private:
    int breadth;
    int length;
    int radius;

    public:
    double calculateArea(int size)
    {
        return size * size; 
        
    }
    double calculateArea(double length,double breadth)
    {        
        return (breadth*length)/2;
    }
    double calculateArea(double length,float breadth)
    {
        return length * breadth;
    }
};

int main()
{
    area a1;
    cout << "area of square " << a1.calculateArea(10)<< endl;
    cout << " area of triangle "<< a1.calculateArea(2.00,2.00)<< endl;
    cout << "area of rectangle " << a1.calculateArea(100,25.0f);
}