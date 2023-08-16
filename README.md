# Venda de Ingressos TP1
Trabalho da disciplina Técnicas de Programação 1 (TP1) realizado no 2° semestre de 2019 na Universidade de Brasília (UnB).
O enredo do trabalho pede para criar um sistema de venda de ingressos, porém só foi implementado as funções de criar login e adicionar cartão de crédito para o usuário. Ele foi desenvolvido em linguagem C++ em sistema operacional Windows utilizando o IDE Code::Blocks.
- Aluno: Vinícius Caixeta de Souza
- Matrícula: 180132199
- Versão do G++: 11.4.0
- Versão do C++: 11

Para compilar o código e executar o programa no Ubuntu digite no terminal:
```
g++ -std=c++11 -Wno-deprecated main.cpp servicos.cpp testes.cpp entidades.cpp dominios.cpp controladoras.cpp -o venda-ingressos
./venda-ingressos
```