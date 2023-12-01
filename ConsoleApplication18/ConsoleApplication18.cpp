#include <iostream>
#include <cmath>
#include <locale>
#include <stdlib.h>
// Л/р 7 Одномерный массив, с использованием функций
// Вариант 21(динамический)
// Дан массив размера N. Найти номера тех элементов массива,
// которые больше своего правого соседа, и количество таких элементов.
// Найденные номера выводить в порядке их возрастания.
// Ввод значений массива производится с клавиатуры.
using namespace std;
void vvod(int mas[], int size) {
    cout << "Введите элементы массива: ";
    for (int i = 0; i < size; i++) {
        cin >> mas[i];
    }
}
void prov(int mas[], int size, int k) {
    cout << "Подходящие под условие номера элементов ";
    for (int i = 0; i < size - 1; i++) {
        if (mas[i] > mas[i + 1]) {
            cout << i << " ";
            k = k + 1;
        }
    }
    cout << endl << "количество подходящих элементов " << k;
}
void vivod(int mas[], int size) {
    cout << endl << "Вывод массива с помощью функции: ";
    for (int i = 0; i < size; i++) {
        cout << mas[i] << " ";
    }
}
int main()
{
    setlocale(LC_ALL, "ru");
    const int size = 5;
    int mas[size];
    vvod(mas, size);
    int k=0;
    prov(mas, size, k);
    vivod(mas, size);
}
