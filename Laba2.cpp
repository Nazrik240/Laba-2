#include <iostream>
#include <conio.h>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    int a;
    cout << "Введите число: ";
    cin >> a;
    cout << "Ваше число: " << " ";

    if (a < 0) {
        cout << "Отрицательное число";
    }
    switch (a / 1000)
    {
    case 1: cout << "одна тысяча "; break;
    case 2: cout << "две тысячи "; break;
    case 3: cout << "три тысячи "; break;
    case 4: cout << "четыре тысячи "; break;
    case 5: cout << "пять тысяч "; break;
    case 6: cout << "шесть тысяч "; break;
    case 7: cout << "семь тысяч "; break;
    case 8: cout << "восемь тысяч "; break;
    case 9: cout << "девять тысяч "; break;
    }

    switch ((a % 1000) / 100)
    {
    case 1: cout << "сто "; break;
    case 2: cout << "двести "; break;
    case 3: cout << "триста "; break;
    case 4: cout << "четыреста "; break;
    case 5: cout << "пятьсот "; break;
    case 6: cout << "шестьсот "; break;
    case 7: cout << "семьсот "; break;
    case 8: cout << "восемьсот "; break;
    case 9: cout << "девятьсот "; break;
    }

    switch ((a % 100) / 10)
    {
    case 2: cout << "двадцать "; break;
    case 3: cout << "тридцать "; break;
    case 4: cout << "сорок "; break;
    case 5: cout << "пятьдесят "; break;
    case 6: cout << "шестьдесят "; break;
    case 7: cout << "семьдесят "; break;
    case 8: cout << "восемьдесят "; break;
    case 9: cout << "девяносто "; break;
    }

    if (a % 100 >= 10 & a % 100 < 20) {
        switch (a % 100) {
        case 10: cout << "десять рублей"; break;
        case 11: cout << "одинадцать рублей"; break;
        case 12: cout << "двенадцать рублей"; break;
        case 13: cout << "тринадцать рублей"; break;
        case 14: cout << "четырнадцать рублей"; break;
        case 15: cout << "пятнадцать рублей"; break;
        case 16: cout << "шестнадцать рублей"; break;
        case 17: cout << "семнадцать рублей"; break;
        case 18: cout << "восемнадцать рублей"; break;
        case 19: cout << "девятнадцать рублей"; break;
        }
    }
    else {
        switch (a % 10)
        {
        case 0: cout << " рублей\n"; break;
        case 1: cout << "один рубль\n"; break;
        case 2: cout << "два рубля\n"; break;
        case 3: cout << "три рубля\n"; break;
        case 4: cout << "четыре рубля"; break;
        case 5: cout << "пять рублей"; break;
        case 6: cout << "шесть рублей"; break;
        case 7: cout << "семь рублей"; break;
        case 8: cout << "восемь рублей"; break;
        case 9: cout << "девять рублей"; break;
        }
    }
    _getch();

    return 0;
}

