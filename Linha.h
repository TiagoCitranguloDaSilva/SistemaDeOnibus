#pragma once

#include <iostream>
#include <list>
#include "Ponto.h"

using namespace std;

class Linha {
    private:
        list<Ponto> pontos;
        string nome;

    public:
        Linha(string nome){
            this->nome = nome;
        }

        string getNome(){
            return this->nome;
        }

        void addPonto(Ponto& ponto, int pos){
            if(pos >= pontos.size()){
                pontos.push_back(ponto);
                return;
            }

            if(pos < 1){
                return;
            }

            auto comeco = pontos.begin();
            advance(comeco, pos - 1);
            pontos.insert(comeco, ponto);
        }

        void removePonto(Ponto& ponto){
            pontos.remove(ponto);
        }

        void listarPontos(){
            cout << "Pontos de: " << nome << endl;
            for(Ponto ponto : pontos){
                cout << "   - " << ponto.getNome() << endl;
            }
            cout << endl;
        }

        void procurarPonto(string nomePonto){
            for(Ponto ponto : pontos){
                if(ponto.getNome() == nomePonto){
                    cout << "Ponto \"" << nomePonto << "\" encontrado na linha: " << nome << endl;
                    return;
                }

            }
        }

};