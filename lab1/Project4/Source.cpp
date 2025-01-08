#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    //1 задание

    double x1 = 829.356;
    double y1 = 128.286;

    cout << "Задание 1" << endl;

    cout << "1) " << x1 << " + " << y1 << " = " << x1 + y1 << endl;
    cout << "2) " << scientific << setprecision(6) << x1 << endl;
    cout << "3) " << scientific << setprecision(2) << y1 << endl;
    cout << "4) " << setprecision(2) << fixed << x1 << endl;
    cout << "5) " << setw(13) << setprecision(3) << fixed << y1 << endl;

    //2 задание

    int x2 = 2;
    int y2 = 5;

    cout << "Задание 2" << endl;

    cout << "----------------------------------" << endl;
    cout << "| № | Выражение     | Результат |" << endl;
    cout << "----------------------------------" << endl;
    cout << "| 1. | z=2/5         | " << setw(9) << 2 / 5 << " |" << endl;
    cout << "| 2. | z=2./5        | " << setw(9) << 2. / 5 << " |" << endl;
    cout << "| 3. | z=2/5.        | " << setw(9) << 2 / 5. << " |" << endl;
    cout << "| 4. | z=x/5         | " << setw(9) << x2 / 5 << " |" << endl;
    cout << "| 5. | z=x/5.        | " << setw(9) << x2 / 5. << " |" << endl;
    cout << "| 6. | z=x/y         | " << setw(9) << x2 / y2 << " |" << endl;
    cout << "| 7. | z=double(x)/5 | " << setw(9) << double(x2) / 5 << " |" << endl;
    cout << "| 8. | z=x/double(y) | " << setw(9) << x2 / double(y2) << " |" << endl;
    cout << "| 9. | z=2%5         | " << setw(9) << 2 % 5 << " |" << endl;
    cout << "| 10 | z=y%x         | " << setw(9) << y2 % x2 << " |" << endl;
    cout << "----------------------------------" << endl;

    //3 задание

    double x3, y3;
    int position, sign;

    cout << "Задание 3" << endl;
    cout << "Введите x:" << endl;
    cin >> x3;
    cout << "Введите y:" << endl;
    cin >> y3;
    cout << "Введите количество позиций для вывода значения: " << endl;
    cin >> position;
    cout << "Введите количество отображаемых знаков в дробной части: " << endl;
    cin >> sign;
    cout.precision(sign);
    cout << fixed << setw(position) << x3 + y3 << endl;
    cout << fixed << setw(position) << x3 - y3 << endl;
    cout << fixed << setw(position) << x3 * y3 << endl;
    cout << fixed << setw(position) << x3 / y3 << endl;

    //4 задание

    string name;

    cout << "Задание 4" << endl;
    cout << "Введите свое имя: ";
    cin >> name;
    cout << setw(40) << "Здравствуйте, " << name;

    return 0;
}