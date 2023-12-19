#ifndef PRODUTO_HH
#define PRODUTO_HH


class Produto
{
    private:
        std::string _nome;
        float _preco;
        int _qtd;

    public:
        Produto(const char* nome, float preco);

        float valor_em_estoque(void);
        bool add_prod(int quantity);
        bool rm_prod(int quantity);
        std::string get_nome();
        int get_qtd();
        float get_preco();
};



#endif //PRODUTO_HH