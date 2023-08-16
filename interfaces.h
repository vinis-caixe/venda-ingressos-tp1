#ifndef INTERFACES_H_INCLUDED
#define INTERFACES_H_INCLUDED

#include "dominios.h"
#include "entidades.h"

#include <stdexcept>
#include <vector>

class InterfaceUsuarioServico;
class InterfaceCartaoServico;

// Classe de interface de usuario para a camada de apresentacao
class InterfaceUsuarioApresentacao{
public:
    virtual Usuario autenticar(int) throw(std::invalid_argument)= 0;

    virtual void setCntrUsuarioServico(InterfaceUsuarioServico *) = 0;

    virtual ~InterfaceUsuarioApresentacao(){ }

};

// Classe de interface de cartao para a camada de apresentacao
class InterfaceCartaoApresentacao{
public:
    virtual CartaoCredito autenticar(Usuario&) throw(std::invalid_argument) = 0;

    virtual void setCntrCartaoServico(InterfaceCartaoServico *) = 0;

    virtual ~InterfaceCartaoApresentacao() { }
};

// Classe de interface de usuario para a camada de servico
class InterfaceUsuarioServico{
private:
    // Usuarios do sistema
    std::vector < class Usuario * > usuarios;

public:
    virtual Usuario autenticar(const Cpf&, const Senha&, int) = 0;

    virtual ~InterfaceUsuarioServico(){
        unsigned int i;
        for(i=0; i<usuarios.size(); i++){
            usuarios[i]->removerCartoes();
        }
        usuarios.clear();
    }

    // Armazena usuarios no sistema
    void attach(Usuario *novo){ usuarios.push_back(novo); }

    // Retorna lista de usuarios no sistema
    std::vector < class Usuario * > listaUsuarios() { return this->usuarios; }

};

// Classe de interface de cartao para a camada de servico
class InterfaceCartaoServico{
public:
    virtual CartaoCredito adicionarCartao(const NumCartao&, const CodSeguranca&, const DataValidade&, Usuario&) = 0;

    virtual ~InterfaceCartaoServico() { }
};

#endif // INTERFACES_H_INCLUDED
