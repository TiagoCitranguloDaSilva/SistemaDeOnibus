#pragma once

#include <iostream>


using namespace std;

class Ponto {
    private:
        string nome;

    public:
        Ponto(string nome){
            this->nome = nome;
        }

        string getNome() const{
            return this->nome;
        }

        bool operator== (const Ponto& outro) const {
            return nome == outro.getNome();
        }

};