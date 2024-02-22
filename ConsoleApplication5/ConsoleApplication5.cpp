#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "ru");
    double matrix[3][5];

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 5; j++) {
            cout << "Введите элемент массива [" << i << "][" << j << "]: ";
            cin >> matrix[i][j];
        }
    }

    for (int i = 0; i < 3; i++) {
        double sum = 0;
        for (int j = 0; j < 5; j++) {
            sum += matrix[i][j];
        }
        double average = sum / 5;
        cout << "Среднее арифметическое элементов строки " << i << ": " << average << endl;
    }

    return 0;
}