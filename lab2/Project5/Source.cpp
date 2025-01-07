#include <iostream>
#include <cmath>
using namespace std;

struct Point
{
    double x, y;
};

double Side(Point a, Point b) {
    return sqrt((b.x - a.x)*(b.x - a.x) + (b.y - a.y)*(b.y - a.y));
}

int main() {

    //1 задание
    cout << "Задание 1" << endl;
    setlocale(LC_ALL, "RU");
    double a, b, c, d, e, f, dd, dx, dy, x, y;
    cout << "Введите a, b, c, d, e, f" << endl;
    cin >> a >> b >> c >> d >> e >> f;
    dd = a*d - b*c;
    dx = e*d - f*b;
    dy = a*f - c*e;

    if (dd != 0) {
        x = dx/dd;
        y = dy/dd;
        cout << "x = " << x << "; " << " y = " << y << ".";
    } else {
        if (dx == 0 && dy == 0){
            cout << "Бесконечное множество решений";
        } else {
            cout << "Нет решений";
        }
    }
    cout << endl;

    //2 задание

    double x1, y1, x2, y2, x3, y3, a1, b1, c1, m;

    cout << "Задание 2" << endl;

    cout << "Введите координаты вершин x1, y1, x2, y2, x3, y3" << endl;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

    a1 = sqrt((x2 - x1)*(x2 - x1) + (y2 - y1)*(y2 - y1));
    b1 = sqrt((x3 - x2)*(x3 - x2) + (y3 - y2)*(y3 - y2));
    c1 = sqrt((x3 - x1)*(x3 - x1) + (y3 - y1)*(y3 - y1));
    m = 0.5 * sqrt(2*a1*a1 + 2*b1*b1 - c1*c1);

    cout << "m = " << m << endl;

    //3 задание

    cout << "Задание 3" << endl;

    cout << "Введите координаты вершин x1, y1, x2, y2, x3, y3" << endl;
    Point p1, p2, p3;
    cin >> p1.x >> p1.y >> p2.x >> p2.y >> p3.x >> p3.y;

    double a2 = Side(p1, p2);
    double b2 = Side(p2, p3);
    double c2 = Side(p1, p3);
    m = 0.5 * sqrt(2*a2*a2 + 2*b2*b2 - c2*c2);
    cout << "m = " << m << endl;;

    //4 задание

    double x4, y4, a3, b3, c3, d3, e3, f3;

    cout << "Задание 4" << endl;

    cout << "Введите x, y, a, b, c, d, e, f" << endl;
    cin >> x4 >> y4 >> a3 >> b3 >> c3 >> d3 >> e3 >> f3;
    cout << "1) " << 20*sin(x4) - abs(pow(x4, 3) - pow(x4, 2)) << endl;
    cout << "2) " << abs(x4 + y4)/(x4 - y4) << endl;
    cout << "3) " << pow(2, x4 + y4)*log2(x4*y4) << endl;
    cout << "4) " << pow(a3*b3*(c3*d3 - e3*f3), 1/6) << endl;
    cout << "5) " << (x4*y4 - 4*abs(x4 + exp(x4)))/(pow(10, 6) + sqrt(log(y4))) << endl;
    cout << "6) " << 2*sin((x4 + y4)/(2 + x4))*cos((x4 - y4)/(2 - x4)) << endl;
    cout << "7) " << tan(x4/3)*atan(y4) << endl;
    cout << "8) " << asin(x4) << endl;

    //5 задание 
    
    double x5, y5, alfa;

    cout << "Задание 5" << endl;
    cout << "Введите x, y, alfa" << endl;
    cin >> x5 >> y5 >> alfa;
    cout << pow(x5, 2) + (sin(pow(y5, 2) - alfa))/(abs(pow(x5, 4) - exp(-5)))*x5 << endl;

    //6 задание

    double a4 = 6, c4 = 4;

    cout << "Задание 6" << endl;
    cout << "1) b = " << a4*2/3*c4 << endl;
    cout << "2) b = " << (a4*2)/(3*c4) << endl;

    return 0;
}

