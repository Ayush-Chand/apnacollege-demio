#include<iostream>
using namespace std;

class Student {
    int score[5]; // Fixed size for 5 exams
public:
    void input() {
        cout << "Enter the marks of five exams: ";
        for (int i = 0; i < 5; i++) {
            cin >> score[i];
        }
    }

    int calculate_totalscore() {
        int total = 0;
        for (int i = 0; i < 5; i++) {
            total += score[i];
        }
        return total;
    }
};

int main() {
    int n;
    cout << "Enter the number of students: ";
    cin >> n;
    Student s[n];
    for (int i = 0; i < n; i++) {
        cout << "Enter scores for student " << i + 1 << ":" << endl;
        s[i].input(); // Use the correct student object
    }

    int annaScore = s[0].calculate_totalscore();
    int count = 0;
    for (int i = 1; i < n; i++) {
        if (s[i].calculate_totalscore() > annaScore) {
            count++;
        }
    }

    cout << "Number of students who scored higher than Anna: " << count << endl;
    return 0;
}
