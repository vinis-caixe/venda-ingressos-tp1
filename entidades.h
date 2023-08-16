#ifndef ENTIDADES_H_INCLUDED
#define ENTIDADES_H_INCLUDED
#include "dominios.h"
#include <vector>

class CartaoCredito;

class Usuario{
private:
    Cpf cpf;
    Senha senha;
    std::vector < CartaoCredito * > cartoes; // Um usuario pode possuir mais de um cartao

public:
    Usuario() { }
    Usuario(Cpf m_cpf, Senha m_senha): cpf(m_cpf), senha(m_senha){ }

    void setCpf(const Cpf &cpf){
        this->cpf = cpf;
    }
    void setSenha(const Senha &senha){
        this->senha = senha;
    }
    void adicionarCartao(CartaoCredito *cartao){
        cartoes.push_back(cartao);
    }
    void removerCartoes(){
        cartoes.clear();
    }

    Cpf getCpf() const{
        return cpf;
    }
    Senha getSenha() const{
        return senha;
    }
};

class Jogo{
private:
    CodJogo codigoJogo;
    NomeJogo nome;
    Cidade cidade;
    Estado estado;
    Tipo tipo;

public:

    void setCodJogo(const CodJogo &codigoJogo){
        this->codigoJogo = codigoJogo;
    }
    void setNomeJogo(const NomeJogo &nome){
        this->nome = nome;
    }
    void setCidade(const Cidade &cidade){
        this->cidade = cidade;
    }
    void setEstado(const Estado &estado){
        this->estado = estado;
    }
    void setTipo(const Tipo &tipo){
        this->tipo = tipo;
    }

    CodJogo getCodigoJogo() const{
        return codigoJogo;
    }
    NomeJogo getNomeJogo() const{
        return nome;
    }
    Cidade getCidade() const{
        return cidade;
    }
    Estado getEstado() const{
        return estado;
    }
    Tipo getTipo() const{
        return tipo;
    }
};

class Partida{
private:
    NumeroSala sala;
    Data data;
    Horario horario;
    Preco preco;
    Disponibilidade disponibilidade;

public:
    void setSala(const NumeroSala &sala){
        this->sala = sala;
    }
    void setData(const Data &data){
        this->data = data;
    }
    void setHorario(const Horario &horario){
        this->horario = horario;
    }
    void setPreco(const Preco &preco){
        this->preco = preco;
    }
    void setDisponibilidade(const Disponibilidade &disponibilidade){
        this->disponibilidade = disponibilidade;
    }

    NumeroSala getSala() const{
        return sala;
    }
    Data getData() const{
        return data;
    }
    Horario getHorario() const{
        return horario;
    }
    Preco getPrecco() const{
        return preco;
    }
    Disponibilidade getDisponibilidade() const{
        return disponibilidade;
    }
};

class Ingresso{
private:
    CodIngresso codigoIngresso;

public:
    void setCodigo(const CodIngresso &codigoIngresso){
        this->codigoIngresso = codigoIngresso;
    }

    CodIngresso getCodigo() const{
        return codigoIngresso;
    }
};

class CartaoCredito{
private:
    NumCartao cartao;
    CodSeguranca codigoSeguranca;
    DataValidade validade;

public:
    void setNumero(const NumCartao &cartao){
        this->cartao = cartao;
    }
    void setCodigo(const CodSeguranca &codigoSeguranca){
        this->codigoSeguranca = codigoSeguranca;
    }
    void setValidade(const DataValidade &validade){
        this->validade = validade;
    }

    NumCartao getNumero() const{
        return cartao;
    }
    CodSeguranca getCodigo() const{
        return codigoSeguranca;
    }
    DataValidade getValidade() const{
        return validade;
    }
};



#endif // ENTIDADES_H_INCLUDED
