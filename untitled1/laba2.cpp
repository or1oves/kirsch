#include <iostream>
#include <chrono>
#include <ctime>
#include <cstdlib>
#include <math.h>
using namespace std;
int main2() {
    setlocale(LC_ALL, "ru");
    srand(time(NULL));
    constexpr int N = 100;
    int arr[N] = {};
    bool task = true;
    int taskNumber, maxOfNotSort, minOfNotSort, a, b, numberOfIndex, \
    firstIndex, secondIndex, maxOfSort, minOfSort, sumOfi, sum, numberOfIndex2, sumOfi2, zamenMinus, k, kOf;
    auto start = chrono::high_resolution_clock::now();
    auto end = chrono::high_resolution_clock::now();
    chrono::duration<float> durationTime = end - start;
    do {
        cout << "enter de task number: ";
        cin >> taskNumber;
        if(taskNumber == 0) task = false;
        switch (taskNumber) {

            case (1):
                cout << '\n' << "de resulting array: ";
                for (int i = 0; i < N; i++) {
                    arr[i] = rand() % 199 - 99;
                    cout << arr[i] << " ";
                }
                cout << '\n' << '\n';
                break;

            case (2):
                cout << '\n';
                start = chrono::high_resolution_clock::now();
                for (int i = 0; i < N; i++) {
                    for (int j = 0; j < N - 1 - i; j++) {
                        if (arr[j] > arr[j + 1]) {
                            int arr1 = arr[j];
                            arr[j] = arr[j + 1];
                            arr[j + 1] = arr1;
                        }
                    }
                }
                end = chrono::high_resolution_clock::now();
                durationTime = end - start;
                cout << "de resulting array: ";
                for (int i = 0; i < N; i++) {
                    cout << arr[i] << " ";
                }
                cout << '\n' << '\n' << "spent time: " << durationTime.count() << " seconds" << '\n' << '\n';
                break;

            case (3):
                maxOfNotSort = arr[0];
                minOfNotSort = arr[0];
                start = chrono::high_resolution_clock::now();
                for (int i = 1; i < N; ++i) {
                    if (arr[i] > maxOfNotSort) {
                        maxOfNotSort = arr[i];
                    }
                    if (arr[i] < minOfNotSort) {
                        minOfNotSort = arr[i];
                    }
                }
                end = chrono::high_resolution_clock::now();
                durationTime = end - start;
                cout << '\n' << "UNSORTED ARRAY: " << '\n' << '\n' << "minimal number: " \
                << minOfNotSort << '\n' << "maximum number: " << maxOfNotSort << '\n' \
                << "search time: " << durationTime.count() << " seconds" << '\n';
                cout << "de resulting array: ";
                for (int i = 0; i < N; i++) {
                    cout << arr[i] << " ";
                }
                cout << '\n' << '\n';
                for (int i = 0; i < N; i++) {
                    for (int j = 0; j < N - 1; j++) {
                        if (arr[j] > arr[j + 1]) {
                            int arr2 = arr[j];
                            arr[j] = arr[j + 1];
                            arr[j + 1] = arr2;
                        }
                    }
                }
                start = chrono::high_resolution_clock::now();
                maxOfSort = arr[99];
                minOfSort = arr[0];
                end = chrono::high_resolution_clock::now();
                durationTime = end - start;
                cout << "SORTED ARRAY: " << '\n' << '\n' << "minimal number: " \
                << minOfSort << '\n' << "maximum number: " << maxOfSort << '\n' \
                << "search time: " << durationTime.count() << " seconds" << '\n';
                cout << "de resulting array: ";
                for (int i = 0; i < N; i++) {
                    cout << arr[i] << " ";
                }
                cout << '\n' << '\n';
                break;

            case(4):
                sum = 0;
                sumOfi2 = 0;
                sumOfi = 0;
                maxOfNotSort = arr[0];
                minOfNotSort = arr[0];
                for(int i = 0; i < N; ++i){
                    if (arr[i] > maxOfNotSort){
                        maxOfNotSort = arr[i];
                    }
                    if (arr[i] < minOfNotSort){
                        minOfNotSort = arr[i];
                    }
                }
                for (int i = 0; i < N; i++) {
                    for(int j = 0; j < N - 1; j++) {
                        if(arr[j] > arr[j+1]) {
                            int arr3 = arr[j];
                            arr[j] = arr[j+1];
                            arr[j+1] = arr3;
                        }
                    }
                }
                sum = ( (maxOfNotSort + minOfNotSort) / 2);
                cout << '\n' << "average value: " << sum << '\n';
                start = chrono::high_resolution_clock::now();
                for(int i = 0; i < N; i++){
                    if(arr[i] == sum) {
                        sumOfi += 1;
                        cout << i << " " << sumOfi; // неверно выводятся индексы, если их больше 1
                        }
                    else{
                        sumOfi2 += 1;
                        if(sumOfi2 == 100){
                            cout << "no index" << '\n';
                        }
                    }
                    }
                end = chrono::high_resolution_clock::now();
                durationTime = end - start;
                cout << "spent time: " << durationTime.count() << " seconds" << '\n' << '\n';
                break;

            case(5):
                for (int i = 0; i < N; i++) {
                    for (int j = 0; j < N - 1; j++) {
                        if (arr[j] > arr[j + 1]) {
                            int arr4 = arr[j];
                            arr[j] = arr[j + 1];
                            arr[j + 1] = arr4;
                        }
                    }
                }
                cout << '\n' << "enter de number: ";
                cin >> a;
                numberOfIndex = 0;
                while(arr[numberOfIndex] < a) {
                    numberOfIndex += 1;
                }
                cout << '\n' << "number of elements: " << numberOfIndex << '\n' << '\n';
                break;

            case(6):
                for (int i = 0; i < N; i++) {
                    for (int j = 0; j < N - 1; j++) {
                        if (arr[j] > arr[j + 1]) {
                            int arr4 = arr[j];
                            arr[j] = arr[j + 1];
                            arr[j + 1] = arr4;
                        }
                    }
                }
                cout << '\n' <<  "enter de number: ";
                cin >> b;
                numberOfIndex2 = 99;
                while(arr[numberOfIndex2] > b){
                    numberOfIndex2 -= 1;
                }
                cout << "number of elements: " << 99 - numberOfIndex2 << '\n' << '\n';
                break;

            case(8):
                cout << '\n' << "enter de first index: ";
                cin >> firstIndex;
                cout << '\n' << "enter de second index: ";
                cin >> secondIndex;
                for (int i = 0; i < N; i++) {
                    for (int j = 0; j < N - 1; j++) {
                        if (arr[j] > arr[j + 1]) {
                            int arr4 = arr[j];
                            arr[j] = arr[j + 1];
                            arr[j + 1] = arr4;
                        }
                    }
                }
                start = chrono::high_resolution_clock::now();
                swap(arr[firstIndex], arr[secondIndex]);
                end = chrono::high_resolution_clock::now();
                durationTime = end - start;
                cout << '\n' << "spent time: " << durationTime.count() << " seconds" << '\n';
                cout << '\n' << "de resulting array: ";
                for(int i = 0; i < N; i++){
                    cout << arr[i] << " ";
                }
                cout << '\n';
                break;

            case(9):
                k = 0;
                cout << '\n' << "enter de number: ";
                cin >> zamenMinus;
                cout << '\n';
                for(int i = 0; i < N; i++) {
                    if (arr[i] % 2 == 0) {
                        arr[i] = arr[i] - zamenMinus;
                        arr[i] = arr[i] * (rand() % 9 + 1);
                        k += 1;
                    }
                    cout << arr[i] << " ";
                }
                    cout << '\n' << "total even elements: " << k << '\n' << "total odd elements: " << 100-k << '\n';
                    int kOf = 0;
                    for (int j = 1; j < 10; ++j) {
                        for (int i = 0; i < N; ++i) {
                            if (arr[i] % j == 0) {
                                kOf++;
                            }
                        }
                        cout << kOf << " elements, multiples " << j << '\n';
                        kOf = 0;
                    }
                    cout << '\n';
                break;
        }
    }
    while(task);
}