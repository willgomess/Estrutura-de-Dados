#include <iostream>

using namespace std;

struct Vetor{
    int * _data;//bloco de dados
    int _capacidade;//tamanho maximo do vetor
    int _size; //quantos elementos estao inseridos

    Vetor(int capacidade){
        this->_capacidade = capacidade;
        this->_size = 0;
//        this->data = (int*) malloc(capacidade * 4);//retorno lixo
        this->_data = new int[capacidade];//retorno zerado
    }
    void push_back(int value){
        if(this->_size == this->_capacidade)
            return;
            //this->reserve(2 * _capacitade);
        this->_data[this->_size] = value;
        this->_size += 1;
    }
    void pop_back(){
        if(this->_size == 0)
            return;
        this->_data[_size] = 0;
        this->_size -= 1;
    }

    //retornar a refencia à variavel dessa posicao
    int& at(int indice){
        return this->_data[indice];
    }
    int& front(){
        return this->_data[0];
    }
    int& back(){
        return this->_data[this->_size - 1];
    }
    int * begin(){
        return &this->_data[0];
    }
    int * end(){
        return &this->_data[this->_size];
    }
    int size(){
        return this->_size;
    }
    int capacity(){
        return this->_capacidade;
    }

    void reserve(int newcapacity){
        if(this->_capacidade < newcapacity)
            return;

        int * newElements = new int[this->_size * 2];
        for(int i = 0; i < this->_size; i++){
            newElements[i] = this->_data[i];
        }

        this->_data = newElements;
    }
};

#include <vector>
int main()
{

    Vetor pivet(5);

    pivet.push_back(4);
    pivet.push_back(2);
    pivet.push_back(7);

    for(auto p : pivet){
        cout << p << " ";
    }
    cout << endl;

    cout << "O elemento do índice[2] é: " << pivet.at(2);
    cout << endl;
    pivet.at(2) = 9;

    cout << "capacidade: " << pivet.capacity();
    cout << endl;
    cout << " size: " << pivet.size();
    cout << endl;
    for(auto p : pivet){
        cout << p << " ";
    }
    cout << endl;

    pivet.reserve(100);

    cout << "Nova capacidade: " << pivet.capacity() << endl;

    return 0;
}
