#include <iostream>
#include <string>

class PublicEx {
    public:
    //Construtor da classe, inicializa o membro público 'message'
    PublicEx(const std::string& msg) : message(msg) {}

    //Metodo publico para exibir a mensagem armazenada no membro publico 'message'
    void display() const {
        std::cout << "Mensagem pública: " << message << std::endl;
    }

    public:
    //Membro público 'message', que pode ser acessado e modificado diretamente
    std::string message ;

};

int main() {
    //Criando um obj da classe com uma mensagem inicial
    PublicEx obj("Olá Mundo!");
    obj.display();

    //Modificando e exibindo a membro publico 'message'
    obj.message  = "Olá, programador!";
    obj.display();

    return 0;
}