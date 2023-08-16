#include "servicos.h"

UsuarioServicoAutenticacao* UsuarioServicoAutenticacao::instance = 0;

UsuarioServicoAutenticacao* UsuarioServicoAutenticacao::getInstance(){
    if(instance == 0){
        instance = new UsuarioServicoAutenticacao();
    }

    return instance;
}

Usuario UsuarioServicoAutenticacao::autenticar(const Cpf &cpf, const Senha &senha, int opcao){
    Usuario resultado;
    Usuario *novo = new Usuario();

    resultado.setCpf(cpf);
    resultado.setSenha(senha);

    // opcao 2 eh criar nova conta, portanto ira inserir os dados no sistema
    if(opcao == 2){
        novo->setCpf(cpf);
        novo->setSenha(senha);

        attach(novo);
    }

    return resultado;
}

CartaoCredito CartaoServicoAutenticacao::adicionarCartao(const NumCartao &numero, const CodSeguranca &codigo, const DataValidade &data, Usuario &usuario){
    CartaoCredito resultado;
    CartaoCredito *novo = new CartaoCredito();

    resultado.setNumero(numero);
    resultado.setCodigo(codigo);
    resultado.setValidade(data);

    novo->setNumero(numero);
    novo->setCodigo(codigo);
    novo->setValidade(data);

    // Adiciona o cartao para o usuario
    usuario.adicionarCartao(novo);

    return resultado;
}
