#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    //1 �������

    double x1 = 829.356;
    double y1 = 128.286;

    cout << "������� 1" << endl;

    cout << "1) " << x1 << " + " << y1 << " = " << x1 + y1 << endl;
    cout << "2) " << scientific << setprecision(6) << x1 << endl;
    cout << "3) " << scientific << setprecision(2) << y1 << endl;
    cout << "4) " << setprecision(2) << fixed << x1 << endl;
    cout << "5) " << setw(13) << setprecision(3) << fixed << y1 << endl;

    //2 �������

    int x2 = 2;
    int y2 = 5;

    cout << "������� 2" << endl;

    cout << "----------------------------------" << endl;
    cout << "| � | ���������     | ��������� |" << endl;
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

    //3 �������

    double x3, y3;
    int position, sign;

    cout << "������� 3" << endl;
    cout << "������� x:" << endl;
    cin >> x3;
    cout << "������� y:" << endl;
    cin >> y3;
    cout << "������� ���������� ������� ��� ������ ��������: " << endl;
    cin >> position;
    cout << "������� ���������� ������������ ������ � ������� �����: " << endl;
    cin >> sign;
    cout.precision(sign);
    cout << fixed << setw(position) << x3 + y3 << endl;
    cout << fixed << setw(position) << x3 - y3 << endl;
    cout << fixed << setw(position) << x3 * y3 << endl;
    cout << fixed << setw(position) << x3 / y3 << endl;

    //4 �������

    string name;

    cout << "������� 4" << endl;
    cout << "������� ���� ���: ";
    cin >> name;
    cout << setw(40) << "������������, " << name;

    return 0;
}