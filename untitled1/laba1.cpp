#include <iostream>
using namespace std;
int main1() {
    int questionNumber, intNumber;
    cout << "enter de task number: ";
    cin >> questionNumber;
    if ((questionNumber < 0) || (questionNumber > 4)) {
        cout << '\n';
        cout << "u wrote de wrong task number!";
        cout << '\n';
        cout << '\n';
        cout << "enter de task number: ";
        cin >> questionNumber;
    }
    while ((questionNumber >= 1) && (questionNumber <= 4)) {
        if (questionNumber == 1) {
            cout << '\n';
            cout <<
                 "int: " << sizeof(int) << '\n' <<
                 "short int: " << sizeof(short int) << '\n' <<
                 "long int: " << sizeof(long int) << '\n' <<
                 "float: " << sizeof(float) << '\n' <<
                 "double: " << sizeof(double) << '\n' <<
                 "long double: " << sizeof(long double) << '\n' <<
                 "char: " << sizeof(char) << '\n' <<
                 "bool: " << sizeof(bool) << '\n';
            cout << '\n';
            cout << "enter de task number: ";
            cin >> questionNumber;
            if ((questionNumber < 0) || (questionNumber > 4)) {
                cout << '\n';
                cout << "u wrote de wrong task number!";
                cout << '\n';
                cout << '\n';
                cout << "enter de task number: ";
                cin >> questionNumber;
            }
        }
        if (questionNumber == 2) {
            cout << '\n';
            cout << "enter de int number: ";
            cin >> intNumber;
            cout << '\n';
            int order = sizeof(int) * 8 - 1;
            unsigned int mask = 1 << order;
            cout << intNumber << " " << &intNumber << " " << order << " " << mask << '\n'; // дополнительная информация
            cout << '\n';
            for (int i = 0; i <= order; i++) {
                cout << ((intNumber & mask) ? 1 : 0);
                mask = mask >> 1;
                if (!i) {
                    cout << " ";
                }
                if ((i + 1) % 8 == 0) {
                    cout << " ";
                }
            }
            cout << '\n';
            cout << '\n';
            cout << "enter de task number: ";
            cin >> questionNumber;
            if ((questionNumber < 0) || (questionNumber > 4)) {
                cout << '\n';
                cout << "u wrote de wrong task number!";
                cout << '\n';
                cout << '\n';
                cout << "enter de task number: ";
                cin >> questionNumber;
            }
        }
        if (questionNumber == 3) {
            union {
                int intNumber2;
                float floatNumber;
            };
            cout << '\n';
            cout << "enter de float number: ";
            cin >> floatNumber;
            cout << '\n';
            cout << "int: " << intNumber2 << " " << &intNumber2 << " " << "float: " << floatNumber << " " << &floatNumber << '\n'; // дополнительная информация
            cout << '\n';
            unsigned mask2 = 1ULL << (sizeof(float) * 8 - 1);
            for (int i = 0; i <= (sizeof(float) * 8 - 1); i++) {
                cout << ((intNumber2 & mask2) ? 1 : 0);
                mask2 = mask2 >> 1;
                if ((i == 8) || (i == 0)) {
                    cout << " ";
                }
            }
            cout << '\n';
            cout << '\n';
            cout << "enter de task number: ";
            cin >> questionNumber;
            if ((questionNumber < 0) || (questionNumber > 4)) {
                cout << '\n';
                cout << "u wrote de wrong task number!";
                cout << '\n';
                cout << '\n';
                cout << "enter de task number: ";
                cin >> questionNumber;
            }
        }
        if (questionNumber == 4){
            cout << '\n';
            cout << "ne sdelal((";
            cout << '\n';
            cout << '\n';
            cout << "enter de task number: ";
            cin >> questionNumber;
            if ((questionNumber < 0) || (questionNumber > 4)) {
                cout << '\n';
                cout << "u wrote de wrong task number";
                cout << '\n';
                cout << '\n';
                cout << "enter de task number: ";
                cin >> questionNumber;
            }
        }
    }
}
