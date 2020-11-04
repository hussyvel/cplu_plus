#include <iostream>

using namespace std;

int main (){

    
    double nota1, nota2, nota3, nota4;
    cout << "A primeira nota do aluno >>>";
    cin >> nota1;
    cout << "A segundo nota do aluno >>>" ;
    cin >> nota2;
    cout << "A terceira nota do aluno >>>";
    cin >> nota3;
    cout << "A quarta nota do aluno >>>"  ;
    cin >> nota4;


    double soma = nota1 + nota2 + nota3 + nota4;
    soma = soma / 4;
    cout << "A média final do aluno é:" <<soma <<"\n"; 

}