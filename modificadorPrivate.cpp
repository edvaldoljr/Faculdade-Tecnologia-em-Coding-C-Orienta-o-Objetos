#include <iostream>
#include <string>

// Definição da classe PrivateExample com membros privados
class PrivateExample {
private:
    // Membro privado 'secretMessage', acessível apenas dentro da classe
    std::string secretMessage;

public:
    // Construtor da classe, inicializa o membro privado 'secretMessage'
    PrivateExample(const std::string& msg) : secretMessage(msg) {}

    // Método público para exibir a mensagem armazenada no membro privado 'secretMessage'
    void display() const {
        std::cout << "Mensagem privada: " << secretMessage << std::endl;
    }

    // Setter público para modificar o membro privado 'secretMessage'
    void setSecretMessage(const std::string& msg) {
        secretMessage = msg;
    }
};

int main() {
    // Criando um objeto da classe PrivateExample com uma mensagem inicial
    PrivateExample privateObj("Segredo guardado.");
    privateObj.display();

    // Modificando e exibindo o membro privado 'secretMessage' usando o setter
    privateObj.setSecretMessage("Novo segredo guardado.");
    privateObj.display();

    // A linha abaixo não compilará, pois 'secretMessage' é um membro privado
    // std::cout << privateObj.secretMessage << std::endl;

    return 0;
}
