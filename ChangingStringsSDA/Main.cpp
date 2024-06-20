#include <iostream>
#include <string>
#include <windows.h>

using namespace std;

// ������� ��� ������ ��������� � ������ �� ������� ���������� ������� �� �����
string findSubstringFromChar(const string& str, char ch)
{
    size_t pos = str.find(ch);
    if (pos != string::npos)
    {
        return str.substr(pos);
    }
    return "";  // ���� ������ �� ������, ������� ������ ������
}

// ������� ��� ������ ��������� � ������ �� ������ �� ������� ���������� �������
string findSubstringToChar(const string& str, char ch)
{
    size_t pos = str.find(ch);
    if (pos != string::npos)
    {
        return str.substr(0, pos);
    }
    return str;  // ���� ������ �� ������, ������� ��� ������
}

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    string str_one, str_two;
    char from_char, to_char;

    // ���� ������ �������������
    cout << "������� ������ ������ (str_one): ";
    getline(std::cin, str_one);
    cout << "������� ������ ������ (str_two): ";
    getline(std::cin, str_two);
    cout << "������� ������ � ������ str_one, ����� ������ � ����: ";
    cin >> from_char;
    cout << "������� ������ � str_two, ������� ������������� ��: ";
    cin >> to_char;

    // ����� ��������
    string part_one = findSubstringFromChar(str_one, from_char);
    string part_two = findSubstringToChar(str_two, to_char);

    // ����������� ��������
    string str_three = part_two + part_one;

    // ����� ����������
    cout << "�������������� ������ (str_three): " << str_three << endl;

    return 0;
}