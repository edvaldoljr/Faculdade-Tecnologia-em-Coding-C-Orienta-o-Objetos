#include <iostream>
#include <string>

using namespace std;

//Declarando a classe
class Pessoa {
    private:
    //Declarando atributos
    string nome;
    int idade;
    public:
        //Declaração de métodos gets e sets
        void setNome(string nome) {
            this->nome = nome;
        }

        void setIdade(int idade) {
            this->idade = idade;
        }

        string getNome () {
            return nome;
        }

        int getIdade() {
            return idade;
        }

        void imprimirNome() {
            cout << "Seu nome é: " << nome << endl;
        }
};

int main() {
    //Criando obj
    Pessoa *pessoa = new Pessoa();

    pessoa->setIdade(18); //ATRIBUINDO VALOR 
    pessoa->setNome("joao");

    cout << "Seu nome é: " << pessoa->getNome() << endl;
    cout << "Sua idade é: " << pessoa->getIdade() << endl;

    pessoa->imprimirNome();

    delete pessoa; //Libera a memoria alocada
    return 0;
}
