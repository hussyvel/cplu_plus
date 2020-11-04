#include <iostream>

using namespace std;

int main()
{
    int idade;
    float salario;
    char nome[128];

    cout << "Digite seu nome idade salario: ";
    cin >> &nome >> &idade >> &salario;
    cout << nome << ' '<< idade << ' ' << salario;
}