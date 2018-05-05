#include <iostream>
#include <list>

using namespace std;

void alimentarLista(list<int>& participantes,int qtd){
    for(int i = 0; i < qtd; i++){
        participantes.push_back(i + 1);
    }
}

void imprimirLista(list<int> lista){
    for(auto elemento : lista){
        cout << elemento;
    }
    cout << "\n";
}


int main(){

    int qtd = 0;
    int escolhido = 0;
    int salto = 0;

    cout << "Informe o numero de participantes: ";
    cin >> qtd;

    cout << "Informe o elemento inicial: ";
    cin >> escolhido;

    cout << "Informe o número de saltos: ";
    cin >> salto;

    list<int> participantes;

    alimentarLista(participantes,qtd);

    imprimirLista(participantes);


    while(participantes.front() != escolhido){

        participantes.push_back(participantes.front());
        participantes.pop_front();
    }

    while(participantes.size() > 1){
        while(salto > 0 ){
            participantes.push_back(02participantes.front());
            participantes.pop_front();
            salto--;
        }
            participantes.pop_front();
            imprimirLista(participantes);

    }

    return 0;
}
