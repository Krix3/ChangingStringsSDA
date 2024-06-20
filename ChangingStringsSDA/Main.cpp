#include <iostream>
#include <string>
#include <windows.h>

using namespace std;

// Функция для поиска подстроки в строке от первого найденного символа до конца
string findSubstringFromChar(const string& str, char ch)
{
    size_t pos = str.find(ch);
    if (pos != string::npos)
    {
        return str.substr(pos);
    }
    return "";  // Если символ не найден, вернуть пустую строку
}

// Функция для поиска подстроки в строке от начала до первого найденного символа
string findSubstringToChar(const string& str, char ch)
{
    size_t pos = str.find(ch);
    if (pos != string::npos)
    {
        return str.substr(0, pos);
    }
    return str;  // Если символ не найден, вернуть всю строку
}

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    string str_one, str_two;
    char from_char, to_char;

    // Ввод данных пользователем
    cout << "Введите первую строку (str_one): ";
    getline(std::cin, str_one);
    cout << "Введите вторую строку (str_two): ";
    getline(std::cin, str_two);
    cout << "Введите символ в строке str_one, чтобы начать с него: ";
    cin >> from_char;
    cout << "Введите символ в str_two, который заканчивается на: ";
    cin >> to_char;

    // Поиск подстрок
    string part_one = findSubstringFromChar(str_one, from_char);
    string part_two = findSubstringToChar(str_two, to_char);

    // Объединение подстрок
    string str_three = part_two + part_one;

    // Вывод результата
    cout << "Результирующая строка (str_three): " << str_three << endl;

    return 0;
}