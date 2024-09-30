#include<iostream>

using namespace std;

class time1{
    private:
    unsigned int hour;
    unsigned int minute;
    unsigned int second;

    public:
    time1(int hour, int minute, int second)
    {
        this -> hour  = hour;
        this -> minute = minute;
        this -> second = second; 
    }
    void settime(int hour,int minute,int second)
    {
        this -> hour  = hour;
        this -> minute = minute;
        this -> second = second; 
    }
   
    void setadd(int hour1,int minute1,int second1)
    {
        hour  += hour1;
        minute += minute1;
        second += second1; 
    }
     void setfix_value()
    {
        while( minute >= 60 || second >= 60)
        {
            if(minute >= 60)
            {
                hour +=1;
                minute -= 60;
            }
            else  {
                minute+=1;
                second-=60;
            }
        }
    }
    void display()
    {
        cout << hour << ":"<<minute <<":" << second << endl;
    }
};

int main()
{
    time1 d1(12,12,12);
    time1 d2(14,18,19);
    time1 d3();
    
    // int hour,hour1,minute,minute1,second,second1;
    // cout << "enter the no of hour"<<endl;
    // cin >> hour;
    // cout << "enter the no of minute"<<endl;
    // cin >> minute;
    // cout << "enter the no of second"<<endl;
    // cin >> second;
    // d1.settime(hour,minute,second);

    // cout << "now enter the time you want to add"<<endl;

    // cout << "enter the no of hour"<<endl;
    // cin >> hour1;
    // cout << "enter the no of minute"<<endl;
    // cin >> minute1;
    // cout << "enter the no of second"<<endl;
    // cin >> second1;

    // d1.setadd(hour1,minute1,second1);
    d3()= d1+d2;//d3.operator(d)

    d1.setfix_value();
    d1.display();
    return 0;
}
