#include "Bloco.h"

using namespace std;

Bloco::Bloco(){}

Bloco::Bloco(int tamanhoX, int tamanhoY, int posicaoX, int posicaoY){
    this->tamanhoX = tamanhoX;
    this->tamanhoY = tamanhoY;
    this->posicaoX = posicaoX;
    this->posicaoY = posicaoY;
}

void Bloco::exibe(){
    cout << "Bloco na posicao (" << posicaoX << "," << posicaoY << ") de tamanhoX " << tamanhoX << endl;
}