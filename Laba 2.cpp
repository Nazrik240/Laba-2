#include <iostream>
#include<math.h>
#include <string>
#include <conio.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");

	int i;
	string a, b, c, s;
	a = "рубль";
	b = "рубля";
	c = "рублей";
	s = ' ';

	cout << "Введите число в диапазоне от 1 до 9999 включительно\n\n";
	cin >> i;

	while (i < 1 || i>9999)

	{
		cout << "Ваши введённые данные не соответствуют условию: число принадлежит диапозону (0; 9999)." << endl;
		break;
	}

	while (i > 0 && i < 10000)
	{
		if (i % 1000 % 100 % 10 < 10) // Подсчёт единиц
		{
			switch (i % 1000 % 100 % 10)
			{
			case 0: s = " " + c;
				break;
			case 1: s = "один " + a;
				break;
			case 2: s = "два " + b;
				break;
			case 3: s = "три " + b;
				break;
			case 4: s = "четыре " + b;
				break;
			case 5: s = "пять " + c;
				break;
			case 6: s = "шесть " + c;
				break;
			case 7: s = "семь " + c;
				break;
			case 8: s = "восемь " + c;
				break;
			case 9: s = "девять " + c;
				break;
			}
		}
		if (9 < i % 1000 % 100 < 20) // Подсчёт от 10 до 20
		{
			switch (i % 1000 % 100)
			{
			case 10: s = "десять " + c;
				break;
			case 11: s = "одиннадцать " + c;
				break;
			case 12: s = "двенадцать " + c;
				break;
			case 13: s = "тринадцать " + c;
				break;
			case 14: s = "четырнадцать  " + c;
				break;
			case 15: s = "пятнадцать  " + c;
				break;
			case 16: s = "шестнадцать " + c;
				break;
			case 17: s = "семнадцать " + c;
				break;
			case 18: s = "восемнадцать " + c;
				break;
			case 19: s = "девятнадцать " + c;
				break;
			}
		}

		if (10 < i % 1000 % 100 < 100) // Подсчёт десятков
		{

			switch (((i % 1000) % 100) / 10)
			{
			case 2: s = "двадцать " + s;
				break;
			case 3: s = "тридцать " + s;
				break;
			case 4: s = "сорок  " + s;
				break;
			case 5: s = "пятьдесят  " + s;
				break;
			case 6: s = "шестьдесят " + s;
				break;
			case 7: s = "семьдесят " + s;
				break;
			case 8: s = "восемьдесят " + s;
				break;
			case 9: s = "девяносто " + s;
				break;
			}
		}

		if (99 < i % 1000 < 1000) // Подсчёт сотен
		{

			switch ((i % 1000) / 100)
			{
			case 1: s = "сто " + s;
				break;
			case 2: s = "двести " + s;
				break;
			case 3: s = "триста " + s;
				break;
			case 4: s = "четыреста  " + s;
				break;
			case 5: s = "пятьсот  " + s;
				break;
			case 6: s = "шестьсот " + s;
				break;
			case 7: s = "семьсот " + s;
				break;
			case 8: s = "восемьсот " + s;
				break;
			case 9: s = "девятьсот " + s;
				break;
			}
		}

		if (0 < i / 1000 < 10) // Подсчёт тысяч
		{

			switch (i / 1000)
			{
			case 1: s = "одна тысяча " + s;
				break;
			case 2: s = "две тысячи " + s;
				break;
			case 3: s = "три тысячи " + s;
				break;
			case 4: s = "четыре тысячи  " + s;
				break;
			case 5: s = "пять тысяч  " + s;
				break;
			case 6: s = "шесть тысяч " + s;
				break;
			case 7: s = "семь тысяч " + s;
				break;
			case 8: s = "восемь тысяч " + s;
				break;
			case 9: s = "девять тысяч " + s;
				break;
			}
		}
		cout << "\n" << s;
		_getch();
		return 0;
	}
}