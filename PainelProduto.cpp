#include <iostream>
#include "PainelProduto.hh"
#include "msg.hh"

void exibirPainel(Produto& p)
{
    std::cout   << "Produto: "   << p.get_nome()  << '\n'
                << "Valor: "     << p.get_preco() << '\n'
                << "qtd disp: "  << p.get_qtd()   << '\n'
                << "\n"
                << "1 - Add produto\n2 - RM produto\n3 - Exibir valor do estoque\n\n0 - sair\n"
    << std::endl;
}


void esperar() 
{ 
    std::cout << "\nprecione qualquer tecla para continuar..." << std::endl;
    std::cin.ignore();
    std::getchar();
}


int receberValor() 
{ 
    int valor;
    std::cin>> valor;
    return valor;
}


bool interface(Produto& p)
{
    std::system("clear");
    exibirPainel(p);


    switch( receberValor() )
    {

        case 1:
            msg_solicitarValor();
                
            p.add_prod( receberValor() ) ? msg_sucesso() : msg_falha();

            esperar();
            break;

        case 2:

            msg_solicitarValor();

            p.rm_prod( receberValor() )  ? msg_sucesso() : msg_falha();

            esperar();
            break;

        case 3:

            std::cout<< "total: R$ " << p.valor_em_estoque() <<std::endl;
            esperar();
            break;

        case 0:
            return false;
        
        default:
            msg_opc_invalida(); 
            esperar(); 

    } // switch end

    return true;
}
