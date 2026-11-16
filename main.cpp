#include <iostream>
#include "Linha.h"
#include "GerenciarLinhas.h"
#include <vector>

using namespace std;

vector<Linha> linhas;
    
int main (){

    // Apenas dados de teste

    Linha linha1 = Linha("Linha amarela");
    Linha linha2 = Linha("Linha laranja");
    Linha linha3 = Linha("Linha azul");
    Ponto ponto1 = Ponto("Ponto 1");
    Ponto ponto2 = Ponto("Ponto 2");
    Ponto ponto3 = Ponto("Ponto 3");
    Ponto ponto4 = Ponto("Ponto 4");
    Ponto ponto5 = Ponto("Ponto 5");
    Ponto ponto6 = Ponto("Ponto 6");
    Ponto ponto7 = Ponto("Ponto 7");
    Ponto ponto8 = Ponto("Ponto 8");

    cout << linhas.size() << endl;

    GerenciarLinhas::addLinha(linhas, linha1);

    cout << linhas.size() << endl;

    GerenciarLinhas::removeLinha(linhas, linha1.getNome());

    cout << linhas.size() << endl;

    GerenciarLinhas::addPonto(linha1, ponto1, 1);
    GerenciarLinhas::addPonto(linha1, ponto2, 2);

    GerenciarLinhas::listarPontos(linha1);

    GerenciarLinhas::removePonto(linha1, ponto1);

    GerenciarLinhas::listarPontos(linha1);
    
    cout << linhas.size() << endl;

    GerenciarLinhas::addLinha(linhas, linha2);
    GerenciarLinhas::addLinha(linhas, linha3);

    GerenciarLinhas::addPonto(linhas[1], ponto3, 10);
    GerenciarLinhas::addPonto(linhas[0], ponto4, 10);
    GerenciarLinhas::addPonto(linhas[1], ponto5, 10);
    GerenciarLinhas::addPonto(linhas[0], ponto6, 10);
    GerenciarLinhas::addPonto(linhas[0], ponto7, 10);
    GerenciarLinhas::addPonto(linhas[1], ponto8, 10);

    cout << linhas.size() << endl;

    GerenciarLinhas::procurarPonto(linhas, ponto5.getNome());

    return 0;

}

