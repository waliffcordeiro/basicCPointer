# Exemplo básico de ponteiro em C

## O que exemplifica?
Para exemplificar, foi criado uma variável do tipo inteiro e um ponteiro para inteiro.

- **inputInteger** 
- **inputPointer**

Existe a demonstração de um possível modelo de modularização, dividindo os arquivos em diretórios source e include.

Utiliza-se o conceito de Makefile através de um arquivo bem simples e intuitivo a fim de exemplificação.

___
## Funções
Foi criada a função **sumTwo** que recebe um ponteiro de inteiro, a **sumThree** que recebe um inteiro e a **sumOne** que recebe um endereço de inteiro. Para cada função tem-se o exemplo de como seria sua respectiva chamada a partir de uma variável do tipo inteiro e uma ponteiro para inteiro.
___
## Como utilizar o Makefile proposto?
No diretório raíz do projeto:

~~~
Para compilar:
$ make
~~~

~~~
Para compilar e executar:
$ make run
~~~

~~~
Para apagar os arquivos executáveis:
$ make clean
~~~
____