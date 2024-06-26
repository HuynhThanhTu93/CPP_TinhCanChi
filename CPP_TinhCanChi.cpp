// CPP_TinhCanChi.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
string TinhCanChi(int year)
{
    string Can[10] = { "Canh", "Tan", "Nham", "Quy", "Giap", "At", "Binh", "Dinh", "Mau", "Ky" };
    string Chi[12] = { "Than","Dau","Tuat","Hoi","Ty","Suu","Dan","Mao","Thin","Ty","Ngo","Mui" };
    string trave = Can[year % 10] + " " + Chi[year % 12];
    return trave;
}
int main()
{
    cout << "TinhCanChi\n";
    string Can[10] = { "Canh", "Tan", "Nham", "Quy", "Giap", "At", "Binh", "Dinh", "Mau", "Ky" };
    string Chi[12] = { "Than","Dau","Tuat","Hoi","Ty","Suu","Dan","Mao","Thin","Ty","Ngo","Mui" };
    cout << "Nhap nam: ";
    int nam; cin >> nam;
    cout << nam <<": "<< Can[nam % 10] << " " << Chi[nam % 12];
    cout <<"\n" << nam <<": "<< TinhCanChi(nam) << " \n";
    cout << "Nhap nam tiep theo: ";
    int namtt; cin >> namtt;
    for (int i = nam; i < namtt; i++)
    {
        cout << "\n" << nam << ": " << TinhCanChi(nam) << " \n";
        cout << "\n" << namtt << ": " << TinhCanChi(namtt) << " \n";
    }
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
