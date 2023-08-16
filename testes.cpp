#include "testes.h"

void TUCodJogo::setUp(){
    codigo = new CodJogo();
    estado = SUCESSO;
}

void TUCodJogo::tearDown(){
    delete codigo;
}

void TUCodJogo::testarCenarioSucesso(){
    try{
        codigo->setCodigo(VALOR_VALIDO);
        if (codigo->getCodigo() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(std::invalid_argument excecao){
        estado = FALHA;
    }
}

void TUCodJogo::testarCenarioFalha(){
    try{
        codigo->setCodigo(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(std::invalid_argument excecao){
        return;
    }
}

int TUCodJogo::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

void TUCodIngresso::setUp(){
    codigo = new CodIngresso();
    estado = SUCESSO;
}

void TUCodIngresso::tearDown(){
    delete codigo;
}

void TUCodIngresso::testarCenarioSucesso(){
    try{
        codigo->setCodigo(VALOR_VALIDO);
        if (codigo->getCodigo() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(std::invalid_argument excecao){
        estado = FALHA;
    }
}

void TUCodIngresso::testarCenarioFalha(){
    try{
        codigo->setCodigo(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(std::invalid_argument excecao){
        return;
    }
}

int TUCodIngresso::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

/*void TUNomeJogo::setUp(){
    nomeDoJogo = new NomeJogo();
    estado = SUCESSO;
}

void TUNomeJogo::tearDown(){
    delete nomeDoJogo;
}

void TUNomeJogo::testarCenarioSucesso(){
    try{
        nomeDoJogo->setNome(VALOR_VALIDO);
        if (nomeDoJogo->getNome() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(std::invalid_argument excecao){
        estado = FALHA;
    }
}

void TUNomeJogo::testarCenarioFalha(){
    try{
        nomeDoJogo->setNome(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(std::invalid_argument excecao){
        return;
    }
}

int TUNomeJogo::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
} */

void TUData::setUp(){
    data = new Data(1, 1, 1);
    estado = SUCESSO;
}

void TUData::tearDown(){
    delete data;
}

void TUData::testarCenarioSucesso(){
    try{
        data->setData(VALOR_VALIDO1, VALOR_VALIDO2, VALOR_VALIDO3);
        if (data->getDia() != VALOR_VALIDO1)
            estado = FALHA;
        if(data->getMes() != VALOR_VALIDO2)
            estado = FALHA;
        if(data->getAno() != VALOR_VALIDO3)
            estado = FALHA;
    }
    catch(std::invalid_argument excecao){
        estado = FALHA;
    }
}

void TUData::testarCenarioFalha(){
    try{
        data->setData(VALOR_INVALIDO1, VALOR_INVALIDO2, VALOR_INVALIDO3);
        estado = FALHA;
    }
    catch(std::invalid_argument excecao){
        return;
    }
}

int TUData::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

void TUHorario::setUp(){
    horario = new Horario(7, 0);
    estado = SUCESSO;
}

void TUHorario::tearDown(){
    delete horario;
}

void TUHorario::testarCenarioSucesso(){
    try{
        horario->setHorario(VALOR_VALIDO1, VALOR_VALIDO2);
        if (horario->getHora() != VALOR_VALIDO1)
            estado = FALHA;
        if(horario->getMinuto() != VALOR_VALIDO2)
            estado = FALHA;
    }
    catch(std::invalid_argument excecao){
        estado = FALHA;
    }
}

void TUHorario::testarCenarioFalha(){
    try{
        horario->setHorario(VALOR_INVALIDO1, VALOR_INVALIDO2);
        estado = FALHA;
    }
    catch(std::invalid_argument excecao){
        return;
    }
}

int TUHorario::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

/* void TUPreco::setUp(){
    preco = new Preco();
    estado = SUCESSO;
}

void TUPreco::tearDown(){
    delete preco;
}

void TUPreco::testarCenarioSucesso(){
    try{
        preco->setPreco(VALOR_VALIDO);
        if (preco->getPreco() != VALOR_VALIDO)
            estado = FALHA;

    }
    catch(std::invalid_argument excecao){
        estado = FALHA;
    }
}

void TUPreco::testarCenarioFalha(){
    try{
        preco->setPreco(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(std::invalid_argument excecao){
        return;
    }
}

int TUPreco::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
} */

void TUNumeroSala::setUp(){
    sala = new NumeroSala();
    estado = SUCESSO;
}

void TUNumeroSala::tearDown(){
    delete sala;
}

void TUNumeroSala::testarCenarioSucesso(){
    try{
        sala->setSala(VALOR_VALIDO);
        if (sala->getSala() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(std::invalid_argument excecao){
        estado = FALHA;
    }
}

void TUNumeroSala::testarCenarioFalha(){
    try{
        sala->setSala(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(std::invalid_argument excecao){
        return;
    }
}

int TUNumeroSala::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

void TUTipo::setUp(){
    tipo = new Tipo();
    estado = SUCESSO;
}

void TUTipo::tearDown(){
    delete tipo;
}

void TUTipo::testarCenarioSucesso(){
    try{
        tipo->setTipo(VALOR_VALIDO);
        if (tipo->getTipo() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(std::invalid_argument excecao){
        estado = FALHA;
    }
}

void TUTipo::testarCenarioFalha(){
    try{
        tipo->setTipo(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(std::invalid_argument excecao){
        return;
    }
}

int TUTipo::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

void TUCodSeguranca::setUp(){
    codigo = new CodSeguranca(123);
    estado = SUCESSO;
}

void TUCodSeguranca::tearDown(){
    delete codigo;
}

void TUCodSeguranca::testarCenarioSucesso(){
    try{
        codigo->setCodigo(VALOR_VALIDO);
        if (codigo->getCodigo() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(std::invalid_argument excecao){
        estado = FALHA;
    }
}

void TUCodSeguranca::testarCenarioFalha(){
    try{
        codigo->setCodigo(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(std::invalid_argument excecao){
        return;
    }
}

int TUCodSeguranca::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

void TUDataValidade::setUp(){
    data = new DataValidade(1, 1);
    estado = SUCESSO;
}

void TUDataValidade::tearDown(){
    delete data;
}

void TUDataValidade::testarCenarioSucesso(){
    try{
        data->setValidade(VALOR_VALIDO1, VALOR_VALIDO2);
        if (data->getValidadeMes() != VALOR_VALIDO1)
            estado = FALHA;
        if(data->getValidadeAno() != VALOR_VALIDO2)
            estado = FALHA;
    }
    catch(std::invalid_argument excecao){
        estado = FALHA;
    }
}

void TUDataValidade::testarCenarioFalha(){
    try{
        data->setValidade(VALOR_INVALIDO1, VALOR_INVALIDO2);
        estado = FALHA;
    }
    catch(std::invalid_argument excecao){
        return;
    }
}

int TUDataValidade::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

