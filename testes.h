#ifndef TESTES_H_INCLUDED
#define TESTES_H_INCLUDED
#include "dominios.h"

class TUCodJogo{
private:
    const static int VALOR_VALIDO = 789;
    const static int VALOR_INVALIDO = 1234;

    CodJogo *codigo;

    int estado;

    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:
    const static int SUCESSO = 0;
    const static int FALHA = -1;

    int run();
};

class TUCodIngresso{
private:
    const static int VALOR_VALIDO = 54321;
    const static int VALOR_INVALIDO = -4;

    CodIngresso *codigo;

    int estado;

    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:
    const static int SUCESSO = 0;
    const static int FALHA = -1;

    int run();
};

/*class TUNomeJogo{
private:
    string VALOR_VALIDO = "Vasco X Gremio";
    string VALOR_INVALIDO = "1234    22";

    NomeJogo *nomeDoJogo;

    int estado;

    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:
    const static int SUCESSO = 0;
    const static int FALHA = -1;

    int run();
}; */

class TUData{
private:
    const static int VALOR_VALIDO1 = 20;
    const static int VALOR_VALIDO2 = 2;
    const static int VALOR_VALIDO3 = 89;
    const static int VALOR_INVALIDO1 = 54321;
    const static int VALOR_INVALIDO2 = 1000;
    const static int VALOR_INVALIDO3 = 1234;

    Data *data;

    int estado;

    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:
    const static int SUCESSO = 0;
    const static int FALHA = -1;

    int run();
};

class TUHorario{
private:
    const static int VALOR_VALIDO1 = 20;
    const static int VALOR_VALIDO2 = 15;
    const static int VALOR_INVALIDO1 = 23;
    const static int VALOR_INVALIDO2 = 14;

    Horario *horario;

    int estado;

    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:
    const static int SUCESSO = 0;
    const static int FALHA = -1;

    int run();
};

/* class TUPreco{
private:
    float VALOR_VALIDO = 242;
    float VALOR_INVALIDO = 4234.33;

    Preco *preco;

    int estado;

    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:
    const static int SUCESSO = 0;
    const static int FALHA = -1;

    int run();
}; */

class TUNumeroSala{
private:
    const static int VALOR_VALIDO = 7;
    const static int VALOR_INVALIDO = 12;

    NumeroSala *sala;

    int estado;

    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:
    const static int SUCESSO = 0;
    const static int FALHA = -1;

    int run();
};

class TUTipo{
private:
    const static int VALOR_VALIDO = 3;
    const static int VALOR_INVALIDO = 12;

    Tipo *tipo;

    int estado;

    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:
    const static int SUCESSO = 0;
    const static int FALHA = -1;

    int run();
};

class TUCodSeguranca{
private:
    const static int VALOR_VALIDO = 344;
    const static int VALOR_INVALIDO = -32;

    CodSeguranca *codigo;

    int estado;

    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:
    const static int SUCESSO = 0;
    const static int FALHA = -1;

    int run();
};

class TUDataValidade{
private:
    const static int VALOR_VALIDO1 = 11;
    const static int VALOR_VALIDO2 = 2;
    const static int VALOR_INVALIDO1 = 13;
    const static int VALOR_INVALIDO2 = 198;

    DataValidade *data;

    int estado;

    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:
    const static int SUCESSO = 0;
    const static int FALHA = -1;

    int run();
};

/*
    TUCodJogo teste1;
    TUCodIngresso teste2;
    // TUNomeJogo teste3;
    TUData teste4;
    TUHorario teste5;
    // TUPreco teste6;
    TUNumeroSala teste7;
    TUTipo teste8;
    TUCodSeguranca teste9;
    TUDataValidade teste10;

    switch(teste1.run()){
        case TUCodJogo::SUCESSO: cout << "SUCESSO\n";
                                break;
        case TUCodJogo::FALHA  : cout << "FALHA\n";
                                break;
    }

    switch(teste2.run()){
        case TUCodIngresso::SUCESSO: cout << "SUCESSO\n";
                                break;
        case TUCodIngresso::FALHA  : cout << "FALHA\n";
                                break;
    }

    switch(teste3.run()){
        case TUNomeJogo::SUCESSO: cout << "SUCESSO\n";
                                break;
        case TUNomeJogo::FALHA  : cout << "FALHA\n";
                                break;
    }

    switch(teste4.run()){
        case TUData::SUCESSO: cout << "SUCESSO\n";
                                break;
        case TUData::FALHA  : cout << "FALHA\n";
                                break;
    }

    switch(teste5.run()){
        case TUHorario::SUCESSO: cout << "SUCESSO\n";
                                break;
        case TUHorario::FALHA  : cout << "FALHA\n";
                                break;
    }

    switch(teste6.run()){
        case TUPreco::SUCESSO: cout << "SUCESSO\n";
                                break;
        case TUPreco::FALHA  : cout << "FALHA\n";
                                break;
    }

    switch(teste7.run()){
        case TUNumeroSala::SUCESSO: cout << "SUCESSO\n";
                                break;
        case TUNumeroSala::FALHA  : cout << "FALHA\n";
                                break;
    }

    switch(teste8.run()){
        case TUTipo::SUCESSO: cout << "SUCESSO\n";
                                break;
        case TUTipo::FALHA  : cout << "FALHA\n";
                                break;
    }

    switch(teste9.run()){
        case TUCodSeguranca::SUCESSO: cout << "SUCESSO\n";
                                break;
        case TUCodSeguranca::FALHA  : cout << "FALHA\n";
                                break;
    }

    switch(teste10.run()){
        case TUDataValidade::SUCESSO: cout << "SUCESSO\n";
                                break;
        case TUDataValidade::FALHA  : cout << "FALHA\n";
                                break;
    }
    */

#endif // TESTES_H_INCLUDED
