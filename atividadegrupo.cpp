#include <iostream>
using namespace std;

int main() {

    int estudante;
    int opcao;
    int soma;
    int salario = 1650;
    
    cout << "1- Calcular a bonificacao, 2- Sair" << endl;
    cin >> opcao;

    while (opcao != 2){
        
            cout << "Voce e estudante? (1 para sim, 2 para nao.)" << endl;
            cin >> estudante;
            
        if (estudante != 2){

            cout << "Seu salario e: " << salario << ", Voce ganhou uma bonificacao de 1000 reais" << endl;
            soma = salario + 1000;
            cout << soma << endl;
        } 
        
        else if (estudante != 1){
        cout << "Seu salario é " << salario << endl;
        }
        
    cout << "1- Calcular a bonificacao, 2- Sair" << endl;
    cin >> opcao;
    cout << "Programa Encerrado" << endl;
    }

    return 0;
}