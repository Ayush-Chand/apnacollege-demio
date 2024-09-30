#include <iostream>
#include <string>

using namespace std;

int main() {
    string str;
    cout << "Enter the value of string: ";
    getline(cin, str);

    string result;

    for (int i = 0; i < str.size(); ++i)
    {
        bool isUnique = true;

        for (int j = 0; j < str.size(); ++j) 
        {
            if (i != j && str[i] == str[j]) 
            {
                isUnique = false;
                break;
            }
        }

        if (isUnique) {
            result = str[i];
            cout << result << " ";
        }
    }

    return 0;
}
