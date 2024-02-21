// Kontr_3_3-Cpp-ITMO.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include <cmath>
#include <iostream>
# include <windows.h>

using namespace std;

// Площадь треугольника по трём сторонам
double TriangleSquare(double a, double b, double c) {
    double p = (a + b + c) / 2;
    return sqrt(p * (p - a) * (p - b) * (p - c));
}


// Площадь треугольника которая получается если треугольник равносторонний
double Triangle(double side) {
    return TriangleSquare(side, side, side);
}

// Равносторонний треугольник
double Equilateral(double aaa) {
    wcout << L"Введите сторону треугольника: ";
    double side;
    cin >> side;

    double sqrt = Triangle(side);
    return sqrt;
}

// Разносторонний треугольник
double Versatile(double abc) {
    wcout << L"Введите стороны треугольника: " << endl;
    double a, b, c;
    wcout << L"-первая: ";
    cin >> a;
    wcout << L"-вторая: ";
    cin >> b;
    wcout << L"-третья: ";
    cin >> c;

    double sqrt = TriangleSquare(a, b, c);
    return sqrt;
}

int main() {

    setlocale(LC_CTYPE, "rus");
    wcout << L"Выберите тип треугольника (0 — равносторонний, 1 — разносторонний): ";
    int choosing;
    cin >> choosing;


    if (choosing == 0) {
        double aaa = 0;
        wcout << L"Площадь разностороннего треугольника: " << Equilateral(aaa) << endl;
    }
    else if (choosing == 1) {
        double abc=0;
        wcout << L"Площадь разностороннего треугольника: " << Versatile(abc) << endl;
    }
    else {
        wcout << L"Неправильный выбор типа треугольника" << endl;
    }

}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
