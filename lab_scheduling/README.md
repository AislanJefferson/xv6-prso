# Projeto de SO - Lab 2

Repositório de código para disciplina Laboratório de Sistemas Operacionais da Universidade Federal de Campina Grande - UFCG

## Escalonador

A nossa nova política de escalonamento será um escalonamento por prioridades. O escalonador de processos sempre vai escolher o processo de maior prioridade para executar. Caso exista mais de um, será feito um escalonamento por chaveamento circular (round-robin) entre os maiores.
Para simplificar a implementação, reutilizaremos a própria tabela de processos como estrutura de dados de manipulação de prioridades. Irá ser feito um loop dentro da função schedule (localizada em proc.c) onde tal loop irá iterar sobre os processos da tabela de processos, achando o processo de maior prioridade. Esse processo irá mudar o estado para RUNNING e o mesmo será rodado. Quando sua fatia de tempo acabar ou se o processo não tiver morrido antes, será chamada a função yield (localizada em proc.c) que muda o estado RUNNING para RUNNABLE, e dentro dela, incrementaremos a prioridade do processo em 1 (sua prioridade irá diminuir). Essa estratégia faz com que os processos com prioridade mais baixa sejam uma hora ou outra rodados.
Para os casos de processos que utilizam IO, quando seu estado for SLEEPING em algum momento a função wakup1 (localizado em proc.c) que serve para “acordar” o processo mudando seu estado para RUNNABLE. Nesta função iremos aumentar a prioridade do processo decrementando a variável em 2.

