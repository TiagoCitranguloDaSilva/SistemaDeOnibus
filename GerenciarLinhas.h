#pragma once

#include <iostream>
#include <vector>
#include "Linha.h"


using namespace std;

class GerenciarLinhas {
    public:

        // Adiciona uma linha nova na lista de linhas
        static void addLinha(vector<Linha>& linhas, Linha& novaLinha){
            linhas.push_back(novaLinha);
        }

        // Remove uma linha da lista de linhas
        static void removeLinha(vector<Linha>& linhas, string nomeLinha){
            for(int c = 0; c < linhas.size(); c++){
                if(linhas[c].getNome() == nomeLinha){
                    linhas.erase(linhas.begin() + c);
                    return;
                }
            }
        }

        // Adiciona um novo ponto naquela linha
        // Obs: Se a posição for maior que a qtde de itens, ele adiciona em último
        static void addPonto(Linha& linha, Ponto& ponto, int pos){
            linha.addPonto(ponto, pos);
        }

        // Remove o ponto de uma linha
        static void removePonto(Linha& linha, Ponto& ponto){
            linha.removePonto(ponto);
        }

        // Lista todos os pontos de uma linha
        static void listarPontos(Linha& linha){
            linha.listarPontos();
        }

        // Procura um ponto especifico em todas as linhas
        static void procurarPonto(vector<Linha>& linhas, string nomePonto){

            for(Linha& linha: linhas){
                linha.procurarPonto(nomePonto);
            }

        }

};