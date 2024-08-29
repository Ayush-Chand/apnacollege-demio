#include<iostream>
#include<string>

using namespace std;

class employee{
 private :
 int id;
 string name;
 double salary;
 string employerCompanyName;

 public:
void setId(int x)
{
    id =  x;
}


void setSalary( int y)
{
    salary = y ;
}
void setCompanyName(string name1)
{
    name = name1 ;
}

 void setemployerCompanyName(string em)
{
    employerCompanyName = em ;
}

int getId()
{
    return id;
}

double getSalary()
{
    return salary ;
}
string getCompanyName()
{
    return name;
}
string getemployerCompanyName()
{
    return employerCompanyName;
}

};

int main()
{
    employee e1;
    e1.setId(1345);
    e1.setSalary(50000);
    e1.setCompanyName("tcs");
    e1.setemployerCompanyName("raman");
    int x;
    int y;
    string name1;
    string em;



    cout << "DETAILS ARE  " << endl;
    name1 = e1.getCompanyName();
    cout << name1 << endl;
    x=  e1.getId();
    cout << x << endl;
    em = e1.getemployerCompanyName();
    cout << em <<  endl;
    y = e1.getSalary();
    cout << y << endl;
    
    


}




