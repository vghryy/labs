#include <iostream>
#include <string>
#include <cmath>
#include <cctype>   
#include <clocale>  
using namespace std;

int main() {

    setlocale(LC_ALL, "Russian");

    //1 задание

    double a, b, c;

    cout << "Задание 1" << endl;
    cout << "Введите 3 числа" << endl;
    cin >> a >> b >> c;
    if (a >= 0 && b >= 0 && c >= 0) {
        cout << "Все числа положительные" << endl;
    } else if (a < 0 && b < 0 && c < 0) {
        cout << "Все числа отрицательные" << endl;
    } else {
        cout << "Не все числа положительные" << endl;
    }

    //2 задание

    double a1, b1, c1;

    cout << "Задание 2" << endl;
    cout << "Введите 3 стороны" << endl;
    cin >> a1 >> b1 >> c1;
    if (a1 + b1 > c1 && a1 + c1 > b1 && b1 + c1 > a1) {
        cout << "Треугольник существует" << endl;
    } else {
        cout << "Треугольник не существует" << endl;
    }

    //3 задание

    double x1, y1, x2, y2, x3, y3, a2, b2, c2;

    cout << "Задание 3" << endl;
    cout << "Введите координаты" << endl;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
    a2 = sqrt((x2 - x1)*(x2 - x1) + (y2 - y1)*(y2 - y1));
    b2 = sqrt((x2 - x3)*(x2 - x3) + (y2 - y3)*(y2 - y3));
    c2 = sqrt((x3 - x1)*(x3 - x1) + (y3 - y1)*(y3 - y1));
    if (a2 + b2 > c2 && a2 + c2 > b2 && b2 + c2 > a2) {
        a2 = a2*a2;
        b2 = b2*b2;
        c2 = c2*c2;
        if (a2 + b2 == c2 || a2 + c2 == b2 || b2 + c2 == a2) {
            cout << "Треугольник прямоугольный" << endl;
        } else if (a2 + b2 < c2 || a2 + c2 < b2 || b2 + c2 < a2) {
            cout << "Треугольник тупоугольный" << endl;
        } else {
            cout << "Треугольник остроугольный" << endl;
        }
    } else {
        cout << "Треугольник не существует" << endl;
    }

    //4 задание

    double S;
    int q, n, i = 1, b5 = 2, b12 = 2, b22 = 6;

    cout << "Задание 4" << endl;
    cout << "Введите количество членов последовательности ";
    cin >> n;
    q = b22/b12;
    while (i < n) {
        i++;
        b5 *= q;
    }
    S = (b5*q - b12)/(q - 1);
    cout << "Сумма первых " << n << " членов геометрической прогрессии равна " << S << endl;

    //5 задание

    int n1, j;
    double S1 = 0.0;

    cout << "Задание 5" << endl;
    cout << "Введите n" << endl;
    cin >> n1;
    while (n1 <= 1 || n1 % 2 == 0) {
        cout << "Введите верное n (нечетное и больше 1)" << endl;
        cin >> n1;
    }

    for (j = 1; j < n1; j += 2) {
        S1 += 1/(sqrt((j + 2)*j));
    }
    cout << "S = " << S1 << endl;

    //6 задание

    unsigned char ch;

    cout << "Задание 6" << endl;
    cout << "Введите символ: ";
    cin >> ch;

    if ((ch > 64 && ch < 91)||(ch > 96 && ch < 123)) {
        cout << "Латинская буква" << endl;
    } else if ((ch > 47)&&(ch < 58)) {
        cout << "Цифра" << endl;
    } else if ((ch > 31)&&(ch < 48)) {
        cout << "Знак препинания" << endl;
    } else if (((ch >= 0xC0)&&(ch <= 0xDF))||((ch >= 0xE0)&&(ch <= 0xFF))) {
        cout << "Русская буква" << endl;
    } else {
        cout << "Прочий символ" << endl;
    }

    // 7 задание

    int  n2, k;
    string name, greeting;

    cout << "Задание 7" << endl;
    cout << "Введите имя" << endl;
    cin >> name;
    greeting = "Good afternoon, " + name + "!";
    n2 = size(greeting) + 4;
    for (int k = 0; k < n2; ++k) {
        cout << "*";
    }
    cout << endl;
    cout << "* " << greeting << " *" << endl;
    for (int k = 0; k < n2; ++k) {
        cout << "*";
    }

    return 0;
}