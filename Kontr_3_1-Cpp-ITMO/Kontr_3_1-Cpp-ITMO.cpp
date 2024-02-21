// Kontr_3_1-Cpp-ITMO.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//


#include <iostream>
#include <string>
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>


using namespace std;

string snils(string str2)
{
	string str = str2;
	string strA = "00000000000000000000";
	string strB;
	int i;
	int q = 0;
	for (i = 0; i < str.size(); i++) {

		strB = str[i];
		if (strB == "0" || strB == "1" || strB == "2" || strB == "3" || strB == "4" || strB == "5" || strB == "6" || strB == "7" || strB == "8" || strB == "9")
		{
			strA[q] = str[i];
			q = q + 1;
		}
		else if (strB == " " || strB == "^") {
			q = q;

		}
		else
		{
			strA[0] = 0;
			strA[1] = 0;
			strA[2] = 0;
			strA[3] = 0;
			strA[4] = 0;
			strA[5] = 0;
			strA[6] = 0;
			strA[7] = 0;
			strA[8] = 0;
			strA = "000000000";
			strB = "000000000";
			break;
		}

	}
	return strA;
}


int main()
{
	string str;
	string strA = "00000000000000000000";
	string control;
	wcout << L"Enter SNILS(9*n)" << endl;

	getline(cin, str);
	wcout << str.size() << endl;

	int cont = 0;

	int summ101, num9, num8, num7, num6, num5, num4, num3, num2, num1;
	int summ;
	string str1, str2, str3, str4, str5, str6, str7, str8, str9, strB;

	strA = snils(str);

	str1 = strA[0];
	str2 = strA[1];
	str3 = strA[2];
	str4 = strA[3];
	str5 = strA[4];
	str6 = strA[5];
	str7 = strA[6];
	str8 = strA[7];
	str9 = strA[8];
	cout << str1;
	cout << str2;
	cout << str3;
	cout << str4;
	cout << str5;
	cout << str6;
	cout << str7;
	cout << str8;
	cout << str9;

	num9 = stoi(str1);

	num8 = stoi(str2);

	num7 = stoi(str3);

	num6 = stoi(str4);

	num5 = stoi(str5);

	num4 = stoi(str6);

	num3 = stoi(str7);

	num2 = stoi(str8);

	num1 = stoi(str9);;

	summ = (num9 * 9) + (num8 * 8) + (num7 * 7) + (num6 * 6) + (num5 * 5) + (num4 * 4) + (num5 * 5) + (num3 * 3) + (num2 * 2) + (num1 * 1);



	if (num9 == num8 || num8 == num7 || num7 == num6 || num6 == num5 || num5 == num4 || num4 == num3 || num3 == num2 || num2 == num1) {
		cont = 0;
		cout << "\nContr number is Not walid(||cont = 0) - " << cont << endl;
	}
	else if (summ > 101) {
		wcout.precision(2);
		summ101 = summ % 101;

		if (summ101 < 100) {
			cont = summ101;
			cout << "\nContr number is walid(cont = summ101) - " << cont << endl;
		}
		else if (summ101 == 100) {
			cont = 0;
			cout << "\nContr number is NOT walid(cont = 0) - " << cont << endl;
		}
	}
	else if (summ < 100) {
		cont = summ;
		cout << "\nContr number is walid(cont = summ) - " << cont << endl;
	}
	else if (summ == 100 || summ == 101) {
		cont = 0;
		cout << "\nContr number is walid(cont = 0) - " << cont << endl;
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
