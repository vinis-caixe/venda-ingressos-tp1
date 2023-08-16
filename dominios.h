#ifndef DOMINIOS_H_INCLUDED
#define DOMINIOS_H_INCLUDED
#include <stdexcept>
#include <string>

enum Ano{Jan = 1, Fev, Mar, Abr, Mai, Jun, Jul, Ago, Set, Out, Nov, Dez};
enum Tipojogo{Local = 1, Estadual, Nacional, Internacional};

class CodJogo{
private:
    int codigoJogo;

    void validar(int) throw (std::invalid_argument);

public:
    CodJogo(void){ }
    CodJogo(int cod): codigoJogo(cod){}
    ~CodJogo(void){
        codigoJogo = 0;
    }

    void setCodigo(int) throw (std::invalid_argument);

    int getCodigo() const {
        return codigoJogo;
    }
};

class CodIngresso{
private:
    int codigoIngresso;

    void validar(int) throw (std::invalid_argument);

public:
    CodIngresso(void){ }
    CodIngresso(int cod): codigoIngresso(cod){}
    ~CodIngresso(void){
        codigoIngresso = 0;
    }

    void setCodigo(int) throw (std::invalid_argument);

    int getCodigo() const {
        return codigoIngresso;
    }
};

class NomeJogo{
private:
    std::string nome;

    void validar(std::string) throw (std::invalid_argument);

public:
    NomeJogo(void){ }
    NomeJogo(std::string part): nome(part) {}
    ~NomeJogo(void){
        nome = '\0';
    }

    void setNome(std::string) throw (std::invalid_argument);

    std::string getNome() const{
        return nome;
    }
};

class Data{
private:
    int m_dia, m_mes, m_ano;

    void validar(int, int, int) throw (std::invalid_argument);

public:
    Data(void){ }
    Data(int dia, int mes, int ano): m_dia(dia), m_mes(mes), m_ano(ano){}
    ~Data(void){
        m_dia = 0;
        m_mes = 0;
        m_ano = 0;
    }

    void setData(int, int, int) throw (std::invalid_argument);

    int getDia() const{
        return m_dia;
    }
    int getMes() const{
        return m_mes;
    }
    int getAno() const{
        return m_ano;
    }
};

class Horario{
private:
    int m_hora;
    int m_minuto;

    void validar(int, int) throw (std::invalid_argument);

public:
    Horario(void){ }
    Horario(int hora, int minuto): m_hora(hora), m_minuto(minuto) {}
    ~Horario(void){
        m_hora = 7;
        m_minuto = 0;
    }

    void setHorario(int, int) throw (std::invalid_argument);

    int getHora() const{
        return m_hora;
    }
    int getMinuto() const{
        return m_minuto;
    }
};

class Preco{
private:
    float preco;

    void validar(float) throw (std::invalid_argument);

public:
    Preco(void){ }
    Preco(float prec): preco(prec){}
    ~Preco(void){
        preco = 0;
    }

    void setPreco(float) throw (std::invalid_argument);

    float getPreco() const{
        return preco;
    }
};

class NumeroSala{
private:
    int sala;

    void validar(int) throw (std::invalid_argument);
public:
    NumeroSala(void){ }
    NumeroSala(int m_sala): sala(m_sala) {}
    ~NumeroSala(void){
        sala = 0;
    }

    void setSala(int) throw (std::invalid_argument);

    int getSala() const{
        return sala;
    }
};

class Cidade{
private:
    std::string cidade;

    void validar(std::string) throw (std::invalid_argument);

public:
    Cidade(void){ }
    Cidade(std::string m_cidade): cidade(m_cidade){ }
    ~Cidade(void) {
        cidade = '\0';
    }

    void setCidade(std::string) throw (std::invalid_argument);

    std::string getCidade() const{
        return cidade;
    }
};

class Estado{
private:
    std::string estadosBR[27] = {"AC", "AL", "AP", "AM", "BA", "CE", "DF", "ES", "GO", "MA", "MT", "MS", "MG", "PA", "PB", "PR", "PE",
    "PI", "RJ", "RN", "RS", "RO", "RR", "SC", "SP", "SE", "TO"};

    std::string estado;

    void validar(std::string) throw (std::invalid_argument);

public:
    Estado(void){ }
    Estado(std::string m_estado): estado(m_estado){ }
    ~Estado(void){
        estado = '\0';
    }

    void setEstado(std::string) throw (std::invalid_argument);

    std::string getEstado() const{
        return estado;
    }
};

class Disponibilidade{
private:
    int disponivel;

    void validar(int) throw (std::invalid_argument);

public:
    Disponibilidade(void){ }
    Disponibilidade(int m_disponivel): disponivel(m_disponivel){ }
    ~Disponibilidade(void){
        disponivel = 0;
    }

    void setDisponivel(int) throw (std::invalid_argument);

    int getDisponivel() const{
        return disponivel;
    }
};

class Tipo{
private:
    int tipo;

    void validar(int) throw (std::invalid_argument);

public:
    Tipo(void){ }
    Tipo(int m_tipo): tipo(m_tipo){ }
    ~Tipo(void){
        tipo = 0;
    }

    void setTipo(int) throw (std::invalid_argument);

    int getTipo() const{
        return tipo;
    }
};

class Cpf{
private:
    long long m_cpf;

    void validar(long long) throw (std::invalid_argument);

public:
    Cpf(void){ }
    Cpf(long long cpf): m_cpf(cpf) {}
    ~Cpf(void){
        m_cpf = 11111111111;
    }

    void setCpf(long long) throw (std::invalid_argument);

    long long getCpf() const{
        return m_cpf;
    }
};

class Senha{
private:
    std::string senha;

    void validar(std::string) throw (std::invalid_argument);

public:
    Senha(void){ }
    Senha(std::string m_senha): senha(m_senha){ }
    ~Senha(void){
        senha = '\0';
    }

    void setSenha(std::string) throw (std::invalid_argument);

    std::string getSenha() const{
        return senha;
    }
};

class NumCartao{
private:
    long long m_cartao;

    void validar(long long) throw (std::invalid_argument);

public:
    NumCartao(void){ }
    NumCartao(long long cartao): m_cartao(cartao) { }
    ~NumCartao(void){
        m_cartao = 0;
    }

    void setCartao(long long) throw (std::invalid_argument);

    long long getCartao() const{
        return m_cartao;
    }
};

class CodSeguranca{
private:
    int m_codigoSeguranca;

    void validar(int) throw (std::invalid_argument);

public:
    CodSeguranca(void){ }
    CodSeguranca(int codigoSeguranca): m_codigoSeguranca(codigoSeguranca) {}
    ~CodSeguranca(void){
        m_codigoSeguranca = 0;
    }

    void setCodigo(int) throw (std::invalid_argument);

    int getCodigo() const{
        return m_codigoSeguranca;
    }
};

class DataValidade{
private:
    int m_validadeMes;
    int m_validadeAno;

    void validar(int, int) throw (std::invalid_argument);

public:
    DataValidade(void){ }
    DataValidade(int validadeMes, int validadeAno): m_validadeMes(validadeMes), m_validadeAno(validadeAno) {}
    ~DataValidade(void){
        m_validadeMes = 1;
        m_validadeAno = 0;
    }

    void setValidade(int, int) throw (std::invalid_argument);

    int getValidadeMes() const{
        return m_validadeMes;
    }
    int getValidadeAno() const{
        return m_validadeAno;
    }
};

#endif // DOMINIOS_H_INCLUDED
