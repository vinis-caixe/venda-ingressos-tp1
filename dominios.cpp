#include "dominios.h"

void CodJogo::validar(int codigoJogo) throw (std::invalid_argument){

    if(codigoJogo >= 1000 || codigoJogo < 0)
        throw std::invalid_argument("Erro parametro.");

}

void CodJogo::setCodigo(int codigoJogo) throw (std::invalid_argument){
    validar(codigoJogo);
    this->codigoJogo = codigoJogo;
}

void CodIngresso::validar(int codigoIngresso) throw (std::invalid_argument){

    if(codigoIngresso >= 1000000 || codigoIngresso < 0)
        throw std::invalid_argument("Erro parametro.");
}

void CodIngresso::setCodigo(int codigoIngresso) throw (std::invalid_argument){
    validar(codigoIngresso);
    this->codigoIngresso = codigoIngresso;
}

void NomeJogo::validar(std::string nome) throw (std::invalid_argument){
    unsigned int tamanhoString = nome.length();
    unsigned int cont = 0, i;

    if(tamanhoString > 20){
        throw std::invalid_argument("Erro parametro.");
    }

    for(i=0; i<tamanhoString; i++){
        if((nome[i] >= 'a' && nome[i] <= 'z') || (nome[i] >= 'A' && nome[i] <= 'Z')){
            cont = 1;
        }
        if(nome[i] == ' '){
            if(i+1 != tamanhoString){
                if(nome[i+1] == ' '){
                    throw std::invalid_argument("Erro parametro.");
                }
            }
        }
    }

    if(cont == 0){
        throw std::invalid_argument("Erro parametro.");
    }
}

void NomeJogo::setNome(std::string nome) throw (std::invalid_argument){
    validar(nome);
    this->nome = nome;
}

void Data::validar(int m_dia, int m_mes, int m_ano) throw (std::invalid_argument){

    if(m_mes > Dez || m_ano > 99){
        throw std::invalid_argument("Erro parametro.");
    }
    else if(m_dia < 1 || m_mes < Jan || m_ano < 0){
        throw std::invalid_argument("Erro parametro.");
    }
    else if((m_mes == Jan || m_mes == Mar || m_mes == Mai || m_mes == Jul || m_mes == Ago || m_mes == Out || m_mes == Dez) && (m_dia > 31)){
        throw std::invalid_argument("Erro parametro.");
    }
    else if((m_mes == Abr || m_mes == Jun || m_mes == Set || m_mes == Nov) && (m_dia > 30)){
        throw std::invalid_argument("Erro parametro.");
    }
    else{
        if(m_ano % 4 == 0){
            if(m_dia > 29){
                throw std::invalid_argument("Erro parametro.");
            }
        }
        else{
            if(m_dia > 28){
                throw std::invalid_argument("Erro parametro.");
            }
        }
    }
}

void Data::setData(int m_dia, int m_mes, int m_ano) throw (std::invalid_argument){
    validar(m_dia, m_mes, m_ano);
    this->m_dia = m_dia;
    this->m_mes = m_mes;
    this->m_ano = m_ano;
}

void Horario::validar(int m_hora, int m_minuto) throw (std::invalid_argument){
    if(m_hora > 22 || m_hora < 7){
        throw std::invalid_argument("Erro parametro.");
    }
    if(m_minuto >= 60 || ((m_minuto % 15) != 0)){
        throw std::invalid_argument("Erro parametro.");
    }
}

void Horario::setHorario(int m_hora, int m_minuto) throw (std::invalid_argument){
    validar(m_hora, m_minuto);
    this->m_hora = m_hora;
    this->m_minuto = m_minuto;
}

void Preco::validar(float preco) throw (std::invalid_argument){
    if(preco > 1000 || preco < 0)
        throw std::invalid_argument("Erro parametro");
}

void Preco::setPreco(float preco) throw (std::invalid_argument){
    validar(preco);
    this->preco = preco;
}

void NumeroSala::validar(int sala) throw (std::invalid_argument){
    if(sala > 10 || sala < 1){
        throw std::invalid_argument("Erro parametro");
    }
}

void NumeroSala::setSala(int sala) throw (std::invalid_argument){
    validar(sala);
    this->sala = sala;
}

void Cidade::validar(std::string cidade) throw (std::invalid_argument){
    unsigned int tamanhoString = cidade.length();
    unsigned int cont = 0, i;

    if(tamanhoString > 15){
        throw std::invalid_argument("Erro parametro.");
    }

    for(i=0; i<tamanhoString; i++){
        if((cidade[i] >= 'a' && cidade[i] <= 'z') || (cidade[i] >= 'A' && cidade[i] <= 'Z')){
            cont = 1;
        }
        if(cidade[i] == ' '){
            if(i+1 != tamanhoString){
                if(cidade[i+1] == ' '){
                    throw std::invalid_argument("Erro parametro.");
                }
            }
        }
        if(cidade[i] == '.'){
            if(i+1 != tamanhoString){
                if(!((cidade[i] >= 'a' && cidade[i] <= 'z') || (cidade[i] >= 'A' && cidade[i] <= 'Z'))){
                    throw std::invalid_argument("Erro parametro.");
                }
            }
        }
    }

    if(cont == 0){
        throw std::invalid_argument("Erro parametro.");
    }
}

void Cidade::setCidade(std::string cidade) throw (std::invalid_argument){
    validar(cidade);
    this->cidade = cidade;
}

void Estado::validar(std::string estado) throw (std::invalid_argument){
    int i, continuar = 0;

    for(i=0; i<27; i++){
        if(estado == estadosBR[i]){
            continuar = 1;
        }
    }

    if(continuar == 0){
        throw std::invalid_argument("Erro parametro.");
    }
}

void Estado::setEstado(std::string estado) throw (std::invalid_argument){
    validar(estado);
    this->estado = estado;
}

void Disponibilidade::validar(int disponivel) throw (std::invalid_argument){
    if(disponivel > 250 || disponivel < 0){
        throw std::invalid_argument("Erro parametro.");
    }
}

void Disponibilidade::setDisponivel(int disponivel) throw (std::invalid_argument){
    validar(disponivel);
    this->disponivel = disponivel;
}

void Tipo::validar(int tipo) throw (std::invalid_argument){
    if(tipo > Internacional || tipo < Local){
        throw std::invalid_argument("Erro parametro");
    }
}

void Tipo::setTipo(int tipo) throw (std::invalid_argument){
    validar(tipo);
    this->tipo = tipo;
}

void Cpf::validar(long long m_cpf) throw (std::invalid_argument){
    int aux[11], i, n = 2;
    int primdig = 0, segdig = 0;

    for(i=0; i<11; i++){
        aux[i] = m_cpf % 10;
        m_cpf = m_cpf / 10;
    }

    for(i=2; i<11; i++){
        primdig = primdig + (aux[i] * n);
        n++;
    }

    primdig = primdig % 11;

    if(primdig < 2){
        primdig = 0;
    }
    else{
        primdig = 11 - primdig;
    }

    if(primdig != aux[1]){
        throw std::invalid_argument("Erro parametro.");
    }

    n = 2;

    for(i=1; i<11; i++){
        segdig = segdig + (aux[i] * n);
        n++;
    }

    segdig = segdig % 11;

    if(segdig < 2){
        segdig = 0;
    }
    else{
        segdig = 11 - segdig;
    }

    if(segdig != aux[0]){
        throw std::invalid_argument("Erro parametro.");
    }
}

void Cpf::setCpf(long long m_cpf) throw (std::invalid_argument){
    validar(m_cpf);
    this->m_cpf = m_cpf;
}

void Senha::validar(std::string senha) throw (std::invalid_argument){
    unsigned int tamanhoString = senha.length();
    unsigned int i, j, maiuscula = 0, minuscula = 0, digito = 0;

    if(tamanhoString > 6){
        throw std::invalid_argument("Erro parametro.");
    }

    for(i=0; i<tamanhoString; i++){
        for(j=i+1; j<tamanhoString; j++){
            if(senha[i] == senha[j]){
                throw std::invalid_argument("Erro parametro.");
            }
        }

        if(senha[i] >= 'a' && senha[i] <= 'z'){
            minuscula = 1;
        }
        if(senha[i] >= 'A' && senha[i] <= 'Z'){
            maiuscula = 1;
        }
        if(senha[i] >= '0' && senha[i] <= '9'){
            digito = 1;
        }
    }

    if(minuscula != 1 || maiuscula != 1 || digito != 1){
        throw std::invalid_argument("Erro parametro.");
    }
}

void Senha::setSenha(std::string senha) throw (std::invalid_argument){
    validar(senha);
    this->senha = senha;
}

void NumCartao::validar(long long m_cartao) throw (std::invalid_argument){
    int aux[16], i, verificador = 0;

    for(i=0; i<16; i++){
        aux[i] = m_cartao % 10;
        m_cartao = m_cartao / 10;
    }

    for(i=1; i<16; i++){
        if((i % 2 != 0) && (aux[i] * 2 > 9)){
            verificador = verificador + ((aux[i] * 2) - 9);
        }
        else if((i % 2 != 0) && (aux[i] * 2 < 10)){
            verificador = verificador + (aux[i] * 2);
        }
        else{
            verificador = verificador + aux[i];
        }
    }

    verificador = (verificador * 9) % 10;

    if(verificador != aux[0]){
        throw std::invalid_argument("Erro parametro.");
    }
}

void NumCartao::setCartao(long long m_cartao) throw (std::invalid_argument){
    validar(m_cartao);
    this->m_cartao = m_cartao;
}

void CodSeguranca::validar(int m_codigoSeguranca) throw (std::invalid_argument){
    if(m_codigoSeguranca >= 1000 || m_codigoSeguranca < 0){
        throw std::invalid_argument("Erro parametro");
    }
}

void CodSeguranca::setCodigo(int m_codigoSeguranca) throw (std::invalid_argument){
    validar(m_codigoSeguranca);
    this->m_codigoSeguranca = m_codigoSeguranca;
}

void DataValidade::validar(int m_validadeMes, int m_validadeAno) throw (std::invalid_argument){
    if(m_validadeMes > 12 || m_validadeMes < 1){
        throw std::invalid_argument("Erro parametro.");
    }
    if(m_validadeAno >= 100 || m_validadeAno < 0){
        throw std::invalid_argument("Erro parametro.");
    }
}

void DataValidade::setValidade(int m_validadeMes, int m_validadeAno) throw (std::invalid_argument){
    validar(m_validadeMes, m_validadeAno);
    this->m_validadeMes = m_validadeMes;
    this->m_validadeAno = m_validadeAno;
}

