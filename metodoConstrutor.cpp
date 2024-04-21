#include <iostream>
#include <string>

using namespace std;

class Pessoa {
    private:
        string nome;
        int idade;
    public:
    //Metodo construtor
    /*Métodos construtores devem ser públicos e sempre devem ter o mesmo nome da classe*/
    Pessoa() {
        this->nome = "Jose";
        this->idade = 74;
    }

    void setNome(String nome) {
        this->nome = nome;
    }

    void setIdade(int idade) {
        this->idade = idade;
    }

    string getNome() {
        return this->nome;
    }

    int getIdade() {
        return this->idade;
    }

    void imprimirNome() {
        cout << "Seu nome é: " << nome << endl;
    }
}