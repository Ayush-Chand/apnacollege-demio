#include<iostream>

using namespace std;

class invoice{
    private:
    string partNumber;
    string partDescription;
    int quantity;
    double price_per_item;

    public:
    invoice(string partNumber,string partDescription,int quantity,double price_per_item)
    {
        this -> partNumber = partNumber;
        this -> partDescription = partDescription;
        this -> quantity = quantity;
        this -> price_per_item = price_per_item;
    }

    void setPartnumber(string partnumber)
    {
        this -> partNumber = partNumber;
    }
    void setPartDescription(string partDescription)
    {
        this -> partDescription = partDescription;
    }
    int setQuantity(int  quantity)
    {
       
        if( quantity < 0){
           this -> quantity = 0;
        }
        else{
        this -> quantity = quantity;
        }
    }
    void setPrice_per_item(double price_per_item)
    {
        

        if(price_per_item < 0){
           this -> price_per_item = 0;
        }
        else{
            this -> price_per_item = price_per_item;
        }
    }
    string getPartnumber()
    {
        return partNumber;
    }
    string getPartDescription()
    {
        return partDescription;
    }
    int getQuantity()
    {
        return quantity;
    }
    double getPrice_per_item()
    {
        return price_per_item;
    }
    double getinvoiceAmmount()
    {   
       return  quantity * price_per_item;
    }
};

int main()
{
    invoice a1("12","mechanical engineering",50,100);

    cout << " total Ammount :- " << a1.getinvoiceAmmount() << endl;

    string partnumber;
    cout << "enter partnumber ";
    cin >> partnumber;
    a1.setPartnumber(partnumber);

    string partDescription;
    cout << " enter the part discription ";
    cin >> partDescription;
    a1.setPartDescription(partDescription);

    int quantity;
    cout << " enter the quantity of product ";
    cin >>  quantity;
    a1.setQuantity(quantity);
    quantity = a1.getQuantity();

    double price_per_item;
    cout << " enter the price of product ";
    cin >> price_per_item;
    a1.setPrice_per_item(price_per_item);
    price_per_item  = a1.getPrice_per_item();

    double total_price;
    cout << " total Ammount :- " << a1.getinvoiceAmmount();
}