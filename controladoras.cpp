#include "controladoras.h"

Usuario CriarLoginAutenticacao::autenticar(int opcao) throw(std::invalid_argument){
    Usuario resultado;
    Cpf cpf;
    Senha senha;
    long long entrada1;
    std::string entrada2;

    std::vector < class Usuario * > usuariosCadastrados = cntrUsuarioServico->listaUsuarios();

    // Verifica os dados de entrada
    while(true){
        try{
            std::cout << "Digite seu CPF: ";
            std::cin >> entrada1;
            cpf.setCpf(entrada1);
            std::cout << "Crie uma senha: ";
            std::cin >> entrada2;
            senha.setSenha(entrada2);
            break;
        }
        catch(const std::invalid_argument &exp){
            std::cout << "Dado em formato incorreto.\n\n";
        }
    }

    unsigned int i;

    // Verifica se ja existe um usuario com o mesmo cpf
    for(i=0; i<usuariosCadastrados.size(); i++){
        if(usuariosCadastrados[i]->getCpf().getCpf() == cpf.getCpf()){
            throw std::invalid_argument("Usuario ja foi cadastrado.");
        }
    }

    // Coloca os dados na camada de servico
    resultado = cntrUsuarioServico->autenticar(cpf, senha, opcao);

    return resultado;

}

Usuario FazerLoginAutenticacao::autenticar(int opcao) throw(std::invalid_argument){
    Usuario resultado;
    long long cpf;
    std::string senha;

    std::vector < class Usuario * > usuariosCadastrados = cntrUsuarioServico->listaUsuarios();

    std::cout << "Digite seu CPF: ";
    std::cin >> cpf;
    std::cout << "Digite sua senha: ";
    std::cin >> senha;

    unsigned int i;

    // Verifica se o cpf e senha estao no sistema
    for(i=0; i<usuariosCadastrados.size(); i++){
        if(usuariosCadastrados[i]->getCpf().getCpf() == cpf){
            if(usuariosCadastrados[i]->getSenha().getSenha() == senha){
                resultado = cntrUsuarioServico->autenticar(cpf, senha, opcao);
                return resultado;
            }
        }
    }

    // Se nao retorna argumento invalido
    throw std::invalid_argument("CPF ou senha incorretos.");
}

CartaoCredito AdicionarCartao::autenticar(Usuario &usuario) throw(std::invalid_argument){
    CartaoCredito resultado;
    NumCartao cartao;
    CodSeguranca codigoSeguranca;
    DataValidade validade;
    long long entrada1;
    int entrada2, entrada3;

    // Verifica os dados de entrada
    while(true){
        try{
            std::cout << "Digite o numero do seu cartao: ";
            std::cin >> entrada1;
            cartao.setCartao(entrada1);
            std::cout << "Digite o seu codigo de seguranca: ";
            std::cin >> entrada2;
            codigoSeguranca.setCodigo(entrada2);
            std::cout << "Digite o mes e ano de validade do cartao(MM AA): ";
            std::cin >> entrada2;
            std::cin >> entrada3;
            validade.setValidade(entrada2, entrada3);
            break;
        }
        catch(const std::invalid_argument &exp){
            std::cout << "Dado em formato incorreto.\n\n";
        }
    }

    // Coloca os dados na camada de servico
    resultado = cntrCartaoServico->adicionarCartao(cartao, codigoSeguranca, validade, usuario);

    return resultado;
}
