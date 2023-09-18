#include <iostream>
#include <math.h>

using namespace std;
int main()
{
    cout << "Hello Negrs\n";
    int liczba1 = 2;
    int liczba2 = 4;
    int dodawanie = liczba1 + liczba2;
    int odejmowanie = liczba1 - liczba2;
    int mnozenie = liczba1 * liczba2;
    float dzielenie = (float)liczba1 / (float)liczba2;
    float potegowanie = pow(liczba1, liczba2);
    double pierwiastekliczba1 = sqrt(liczba2);
    double pierwiastekliczba2 = sqrt(liczba1);

    cout << "Dodawanie =" << dodawanie << endl;
    cout << "Odejmowanie =" << odejmowanie << endl;
    cout << "Dzielenie =" << dzielenie << endl;
    cout << "Mnozenie =" << mnozenie << endl;
    cout << "Potegowanie =" << potegowanie << endl;
    cout << "Pierwiastek pierwszej liczby =" << pierwiastekliczba1 << endl;
    cout << "Pierwiastek drugiej liczby =" << pierwiastekliczba2 << endl;

    system("pause");

    return: 0;
}
