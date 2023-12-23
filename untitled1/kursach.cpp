#include <iostream>
#include "laba1.cpp"
#include "laba2.cpp"
#include "laba3.cpp"
#include "laba4.cpp"

using namespace std;

void Menu1(){

    cout << "Laboratory work No. 1 DATA TYPES AND THEIR INTERNAL REPRESENTATION IN MEMORY" << '\n';
    cout << "Laboratory work No. 2 ONE-DIMENSIONAL STATIC ARRAYS" << '\n';
    cout << "Laboratory work No. 3 TWO-DIMENSIONAL STATIC ARRAYS. POINTERS" << '\n';
    cout << "Laboratory work No. 4 TEXT STRINGS AS ARRAYS OF CHARACTERS" << '\n';

}

int main(){

    setlocale(0,"");
    int laba;
    Menu1();
    cout << '\n';
    cout << "enter de number of de laboratory work (if you want to exit de program or laboratory work, enter 0): ";
    cin >> laba;
    cout << '\n';
    switch (laba){
        case 1:
            main1();
            main();
            break;
        case 2:
            main2();
            main();
            break;
        case 3:
            main3();
            main();
            break;
        case 4:
            main4();
            main();
            break;
        case 0:
            exit(0);
        default:
            cout << "there is no such laboratory work" << '\n';
            main();
            break;
    }
    return 0;
}