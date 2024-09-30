#include<iostream>
#include<string>

using namespace std;

int main()
{
    string str;
    char ch;

    cout <<"enter the value of string" << endl;
    getline(cin , str);

    cout << "enter the character you want to delete"<<endl;
    cin >> ch;

    // int n = str.size();

    string result;

    for (char c : str) {
        if (c != ch) {
            result += c; 
        }
    }
    cout << result;
}