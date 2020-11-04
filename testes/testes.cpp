#include <iostream>


using namespace std;

int main (){
    cout << "***************************" << endl;//A mensagem impressa é a que está entre aspas
    cout << "***Seja Bem vindo *********" << endl;
    cout << "***************************" << endl;

    cout <<"Escolha seu nivel de dificuldade " << endl;
    cout <<"Facil (F), Médio (M) ou Difícil (D) " << endl;

    char dificuldade;
    cin >> dificuldade;

    int numero_de_tentativas;

    if(numero_de_tentativas == 'F'){
        numero_de_tentativas = 15;
    } else if(numero_de_tentativas == 'M'){
        numero_de_tentativas == 10;
    }else{
        numero_de_tentativas == 5;
    }

    const int NUMERO_SECRETO = 42;
    int tentativas = 0;
    bool nao_acertou = true;

    double pontos = 1000.0;
    
    for(tentativas = 1; tentativas <= numero_de_tentativas; tentativas++) {
        int chute;

        cout << "Tentativa " << tentativas << endl;
        cout << "Qual o seu chute? ";
        cin >> chute;
        
        double pontos_perdidos = abs(chute - NUMERO_SECRETO)/2.0;
        pontos = pontos - pontos_perdidos;

        cout << "O valor de seu chute é " << chute << endl;
        
        bool acertou = NUMERO_SECRETO == chute;
        bool maior = NUMERO_SECRETO > chute;



        if (acertou) {
            cout<< "Parabens, você acertou o numero secreto " <<endl;
            nao_acertou = false;
            break;
        }else if (maior) {
            cout << "Desculpe, o numero_secreto é maior " << maior << endl;
        } else {
            cout << "Desculpe o numero_secreto é menor que " << endl;
        }
    
    }
    
        cout << "Fim do jogo" << endl;
        if (nao_acertou){
        cout << "Você perdeu!!! Tente novamente "<< endl;
        } else {
            cout <<"Você acertou o numero_secreto em " << tentativas << " Tentativas "<< endl;
            cout.precision(2);
            cout << fixed;
            cout << "Sua pontuação foi de " << pontos << " pontos. " << endl;   
        }
    }
    