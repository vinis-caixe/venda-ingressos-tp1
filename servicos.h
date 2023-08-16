#ifndef SERVICOS_H_INCLUDED
#define SERVICOS_H_INCLUDED

#include "interfaces.h"

#include <stdexcept>
#include <iostream>

// Classe que insere os dados no sistema
class UsuarioServicoAutenticacao: public InterfaceUsuarioServico{
private:
    // Esta classe possui padrao Singleton
    static UsuarioServicoAutenticacao* instance;

public:
    // Funcao relacionada ao padrao Singleton
    static UsuarioServicoAutenticacao* getInstance();

    Usuario autenticar(const Cpf&, const Senha&, int);

};

// Classe que adiciona o cartao na classe usuario
class CartaoServicoAutenticacao: public InterfaceCartaoServico{
public:
    CartaoCredito adicionarCartao(const NumCartao&, const CodSeguranca&, const DataValidade&, Usuario&);
};

#endif // SERVICOS_H_INCLUDED
