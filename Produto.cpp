#include <iostream>
#include <string>
#include "Produto.hh"


Produto::Produto(const char* nome, float preco) : _nome(nome), _preco(preco) {}


bool Produto::add_prod(int quantity) 
{
    if( quantity <= 0 ) { return false; }
    
    _qtd += quantity;
    return true;
}


bool Produto::rm_prod(int quantity)  
{ 
    if( quantity > _qtd ) { return false; }

    _qtd -= quantity;
    return true;
}


float Produto::valor_em_estoque(void) { return _qtd * _preco; }
std::string Produto::get_nome() { return _nome;  }
int Produto::get_qtd()          { return _qtd;   }     
float Produto::get_preco()      { return _preco; }


