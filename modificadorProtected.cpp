#include <iostream>
#include <string>

// Definição da classe ProtectedExample com membros protegidos
class ProtectedExample {
protected:
    // Membro protegido 'protectedValue', acessível por classes derivadas
    int protectedValue;

public:
    // Construtor da classe, inicializa o membro protegido 'protectedValue'
    ProtectedExample(int value) : protectedValue(value) {}

    // Método público para exibir o valor armazenado no membro protegido 'protectedValue'
    void display() const {
        std::cout << "Valor protegido: " << protectedValue << std::endl;
    }

    // Setter público para modificar o membro protegido 'protectedValue'
    void setProtectedValue(int value) {
        protectedValue = value;
    }
};

// Classe derivada DerivedProtectedExample que herda de ProtectedExample
class DerivedProtectedExample : public ProtectedExample {
public:
    // Construtor da classe derivada, inicializa o membro protegido da classe base
    DerivedProtectedExample(int value) : ProtectedExample(value) {}

    // Método público para exibir o valor armazenado no membro protegido da classe base
    void displayDerived() const {
        std::cout << "Valor protegido na classe derivada: " << protectedValue << std::endl;
    }
};

int main() {
    // Criando objetos das classes ProtectedExample e DerivedProtectedExample
    ProtectedExample protectedObj(42);
    DerivedProtectedExample derivedObj(100);

    // Exibindo o valor protegido da classe base
    protectedObj.display();
    derivedObj.display();

    // Modificando e exibindo o valor protegido da classe base
    protectedObj.setProtectedValue(50);
    protectedObj.display();

    // Exibindo o valor protegido da classe derivada
    derivedObj.displayDerived();

    return 0;
}
