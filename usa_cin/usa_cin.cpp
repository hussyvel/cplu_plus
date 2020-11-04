#include  <iostream>

using namespace std;

int main (void)
{
    int idade;
    float salario;
    char nome[128];

    cout << "Digite seu nome, idade e salário: ";
    cin >> nome >> idade >> salario;
    cout << nome << ' ' << idade << ' ' << salario;
}