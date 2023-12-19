#include <iostream>
#include "msg.hh"

void msg_sucesso() { std::cout<< "opercao realizada com sucesso!" <<std::endl; }
void msg_falha()   { std::cout<< "opercao falhou!" <<std::endl; }
void msg_opc_invalida() { std::cout<< "opcao invalida!" <<std::endl; }
void msg_solicitarValor() { std::cout<< "digite o valor desejado: " <<std::endl; }