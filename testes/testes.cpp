#include <iostream>
#include <stdlib.h>

using namespace std;

int main (){
    cout << "***************************" << endl;//A mensagem impressa é a que está entre aspas
    cout << "***Seja Bem vindo *********" << endl;
    cout << "***************************" << endl;

    const int NUMERO_SECRETO = 42;
      
    bool nao_acertou = true;
    
    while(nao_acertou) {
        int chute;
        cout << "Qual o seu chute? ";
        cin >> chute;
        cout << "O valor de seu chute é " << chute << endl;
        bool acertou = NUMERO_SECRETO == chute;
        bool maior = NUMERO_SECRETO > chute;



        if (acertou) {
            cout<< "Parabens, você acertou o numero secreto " <<endl;
            nao_acertou = false;
        
        }else if (maior) {
            cout << "Desculpe, o numero_secreto é maior " << maior << endl;
        } else {
            cout << "Desculpe o numero_secreto é menor que " << endl;
        }
    }
    cout << "Fim do jogo" << endl;
}
