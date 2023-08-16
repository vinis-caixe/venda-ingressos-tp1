#ifndef CONTROLADORAS_H_INCLUDED
#define CONTROLADORAS_H_INCLUDED
#include "interfaces.h"
#include "dominios.h"
#include "entidades.h"

#include <string>
#include <iostream>
#include <stdlib.h>
#include <stdexcept>

// Classe que autentica os dados para fazer login
class CriarLoginAutenticacao: public InterfaceUsuarioApresentacao{
private:

    InterfaceUsuarioServico *cntrUsuarioServico;

public:

    Usuario autenticar(int) throw(std::invalid_argument);

    void setCntrUsuarioServico(InterfaceUsuarioServico *cntrUsuarioServico){
        this->cntrUsuarioServico = cntrUsuarioServico;
    }

};

// Classe que verifica se o login esta correto
class FazerLoginAutenticacao: public InterfaceUsuarioApresentacao{
private:

    InterfaceUsuarioServico *cntrUsuarioServico;

public:

    Usuario autenticar(int) throw(std::invalid_argument);

    void setCntrUsuarioServico(InterfaceUsuarioServico *cntrUsuarioServico){
        this->cntrUsuarioServico = cntrUsuarioServico;
    }

};

//Classe que verifica os dados do cartao antes de adiciona-lo
class AdicionarCartao: public InterfaceCartaoApresentacao{
private:

    InterfaceCartaoServico *cntrCartaoServico;

public:

    CartaoCredito autenticar(Usuario&) throw(std::invalid_argument);

    void setCntrCartaoServico(InterfaceCartaoServico *cntrCartaoServico){
        this->cntrCartaoServico = cntrCartaoServico;
    }
};

#endif // CONTROLADORAS_H_INCLUDED
