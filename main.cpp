/*
Aluno: Vinicius Caixeta de Souza
Matricula: 180132199
Materia: Tecnicas de Programacao 1
Professor: Washington Almeida
*/

#ifdef _WIN32
    #define CLEAR "cls"
#else
    #define CLEAR "clear"
#endif

#include "dominios.h"
#include "entidades.h"
#include "testes.h"
#include "controladoras.h"
#include "servicos.h"
#include "interfaces.h"

#include <stdexcept>
#include <iostream>
#include <stdlib.h>

using namespace std;

bool login(Usuario&, InterfaceUsuarioApresentacao*, InterfaceUsuarioApresentacao*);

void mainMenu(Usuario&, InterfaceCartaoApresentacao*, CartaoCredito&);

int main(){
    // Criam as classes de apresentacao para login
    InterfaceUsuarioApresentacao *criarLoginAutenticacao = new CriarLoginAutenticacao();
    InterfaceUsuarioApresentacao *fazerLoginAutenticacao = new FazerLoginAutenticacao();

    // Cria a classe de servico para login
    InterfaceUsuarioServico *usuarioServicoAutenticacao = UsuarioServicoAutenticacao::getInstance();

    // Ambas as classes de apresentacao criam um link com a camada de servico
    criarLoginAutenticacao->setCntrUsuarioServico(usuarioServicoAutenticacao);
    fazerLoginAutenticacao->setCntrUsuarioServico(usuarioServicoAutenticacao);


    // Cria a classe de apresentacao para o cartao
    InterfaceCartaoApresentacao *adicionarCartao = new AdicionarCartao();

    // Cria a classe de servico para o cartao
    InterfaceCartaoServico *cartaoServicoAutenticacao = new CartaoServicoAutenticacao();

    // Cria um link entre a camada de apresentacao e servico
    adicionarCartao->setCntrCartaoServico(cartaoServicoAutenticacao);

    Usuario usuario;
    CartaoCredito cartao;

    bool continuar = login(usuario, criarLoginAutenticacao, fazerLoginAutenticacao);

    while(continuar == true){
        system(CLEAR);
        mainMenu(usuario, adicionarCartao, cartao);

        continuar = login(usuario, criarLoginAutenticacao, fazerLoginAutenticacao);
    }



    delete fazerLoginAutenticacao;
    delete criarLoginAutenticacao;
    delete usuarioServicoAutenticacao;

    delete adicionarCartao;
    delete cartaoServicoAutenticacao;

    return 0;
}

bool login(Usuario &usuario, InterfaceUsuarioApresentacao *criarLoginAutenticacao, InterfaceUsuarioApresentacao *fazerLoginAutenticacao){
    int opcao = 1;

    while(opcao != 0){

        cout << "1.Fazer Login\n" << "2.Criar Conta\n" << "0.Sair\n" << "Digite uma opcao: ";
        cin >> opcao;
        cout << "\n\n";

        if(opcao > 2 || opcao < 0){
            system(CLEAR);
            cout << "Opcao invalida, tente novamente!\n\n";
        }
        else if(opcao == 1){

            try{
                usuario = fazerLoginAutenticacao->autenticar(opcao);
                return true;
            }
            catch(const invalid_argument &exp){
                system(CLEAR);
                cout << "CPF ou senha incorretos.\n\n";
            }

            cout << endl;
        }
        else if(opcao == 2){

            while(true){
                try{
                    usuario = criarLoginAutenticacao->autenticar(opcao);
                    break;
                }
                catch(const invalid_argument &exp){
                    cout << "CPF ja foi cadastrado.\n\n";
                }
            }

            system(CLEAR);
        }
        else{
            cout << "Finalizando programa...\n\n";

            return false;
        }
    }

    return true;
}

void mainMenu(Usuario &usuario, InterfaceCartaoApresentacao *adicionarCartao, CartaoCredito &cartao){
    int opcao = 1;

    while(opcao != 0){

        cout << "1. Adicionar cartao de credito.\n";
        cout << "0. Voltar.\n";
        cout << "Digite uma opcao: ";
        cin >> opcao;

        if(opcao > 1 || opcao < 0){
            system(CLEAR);
            cout << "Opcao invalida, tente novamente!\n\n";
        }
        else if(opcao == 1){
            cartao = adicionarCartao->autenticar(usuario);
            system(CLEAR);
        }
        else{
            system(CLEAR);
            cout << "Voltando para tela de Login...\n\n";
        }
    }
}
