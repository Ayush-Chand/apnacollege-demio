#include <iostream>
 
 using namespace std;

 class ebill{
    private:

   string name;
   int unit;
   double total_amount;

   public:
   void setName(string name1)
   {
    name = name1;
   }
   void setUnit(int value)
   {
    unit = value;
   }
   void setTotalAmount(int value )
   {

    double sum = 0.00;
    int v0=100,v1=100,v2=200,v3;
    if(value <= 100)
    {
        v0 = value;
        sum += (v0 * .60) + 50;
        
    }
    else if((value - 101) >  100 && value < 300 )
    {
    sum += (v0 * .60);
    
    sum += (v2 * .80) + 50 ;
    }
    else{
        v3 = value - 300;
        sum += ((v0 * .60)+(v2 * .80)+ (v3*.90)+ 50);
        sum+=  ((sum/10) + (sum/20));
        
    }
    total_amount = sum; 
   }
   string getName()
   {
    return name;
   }
   int getUnit()
   {
    return unit;
   }
   double getTotalAmount()
   {
    return total_amount;
   }

};

int main()
{
    ebill e1;
    string name1;
    cout << "enter the name of user"<<endl;
    cin >> name1;
    e1.setName(name1);
    int value ;
    cout << " enter the no. of unit consumed by the user " << endl;
    cin >> value;
    e1.setUnit(value);
    e1.setTotalAmount(value);
     
    cout << "total ammount " << e1.getTotalAmount() << endl;
}
