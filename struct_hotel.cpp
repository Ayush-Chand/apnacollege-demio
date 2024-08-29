#include <iostream>

using namespace std;

class hotel{
    private:
     int Rno;//room number
     string name;
     double tariff;//per day charges
     int NOD;//number of days
     double calc;//calculation
     double calc1;
      
    public: 
    
     void setRno(int room_number)
     {
        Rno = room_number;
     }

     void setName(string name1)
     {
        name = name1;
     }
     void setTariff( double perday_charges)
     {
        tariff = perday_charges;

     }
     void setNod(int no_of_days)
     {
        NOD = no_of_days;
     }
     void setCalc(int no_of_days,double perday_charges )
     {
       
        if((no_of_days*perday_charges) < 10000)
        {
            calc = no_of_days*perday_charges ;
            calc1= calc;
        }
        else{
            calc = (no_of_days*perday_charges) * 1.05 ;
            calc1 = calc;
        }
     }
     
      int getRno()
      {
        return Rno;
      }
      
      string getName()
      {
        return name;
      }
      double getTariff()
      {
        return tariff;
      }
      int getNOD()
      {
        return NOD;
      }
      int getCalc()
      {
         return calc1;
      }
};

void checkin(int room_number,string name1,double perday_charges,int no_of_days,hotel &h1)
{


   cout << "enter the name of user"<<endl;
   cin >> name1;
   h1.setName(name1);
   cout << "enter room no. :- "<<endl;
   cin >> room_number ;
   h1.setRno(room_number);
   cout << "per day charges"<<endl;
   cin >> perday_charges;
   h1.setTariff(perday_charges);
   cout << "No of days" << endl;
   cin >> no_of_days;
   h1.setNod(no_of_days);
   h1.setCalc(no_of_days,perday_charges);
}
void checkout(int room_number,string name1,double perday_charges,int no_of_days,hotel &h1)
{
   
  cout << "Room No :- " << h1.getRno() << endl ;
  cout << "costumer name :- " << h1.getName() << endl ;
  cout << "per day charges :- " << h1.getTariff() << endl ;
  cout << "no. of Days :- " << h1.getNOD() << endl ;
  cout << "total ammount  :- " << h1.getCalc() << endl ;
}

int main()
{
   hotel h1;
   string name1;
   int room_number;
   double perday_charges;
   int no_of_days;
   
   checkin(room_number,name1,perday_charges,no_of_days,h1);
   checkout(room_number,name1,perday_charges,no_of_days,h1);
   }