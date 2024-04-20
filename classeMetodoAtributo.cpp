#include <iostream>
#include <string>

using namespace std;

//Declaração de classe
class Pessoa {
    public:
        //Declaração de atribito
        string nome; 
        int idade;

        //Declaração de método
        void imprimirNome() {
            cout << "Seu nome é " << nome << endl;
        }    
};

int main() {
    
    /*Elementos públicos podem ser acessados diretamente por qualquer outra classe, utilizando uma seta (->) após o nome, enquanto que elementos privados e protegidos não podem ser acessados diretamente utilizando a seta.*/
    
    Pessoa *pessoa = new Pessoa();

    //Atribuindo valores aos atributos
    pessoa->idade = 18 ;
    pessoa->nome = "Cleber";

    //Acessando atributo
    cout << "Seu nome é: " << pessoa->nome << endl;
    cout << "Sua idade é: " << pessoa->idade << endl;

    //Executando um método
    pessoa->imprimirNome();

    // Liberando a memória alocada dinamicamente
    delete pessoa;

    return 0;
}