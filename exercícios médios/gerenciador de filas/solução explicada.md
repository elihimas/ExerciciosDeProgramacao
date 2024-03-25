# Enunciado
Faça um gerenciador de filas. Este programa deve ter 3 opções:

1. gerar ficha
2. atender
3. encerrar

- Caso a opção `atender` seja selecionada e a fila estiver vazia, devemos informar um erro
- Caso a opção `encerrar` seja selecionada e existir paciente esperando, devemos informar um erro

## Ponderações iniciais sobre variáveis do programa

### Sobre a geração de ficha
A geração de fichas deve seguir a sequência:

`1 2 3 4 5...`

Para gerenciarmos a sequência, precisamos de uma variável que possibilite a geração da senha. Esta variável deve guardar ou a `última senha gerada` ou a `próxima senha disponível`.

Caso optemos por `última senha gerada`, seu valor inicial deve ser `0`.

Caso optemos por `próxima senha disponível`, seu valor inicial deve ser `1`.

Ambas as opções são válidas, porém a geração de senhas baseada na `última senha gerada` deve considerar este valor e incremetar em 1, portanto, `próxima senha disponível` facilita a geração de senhas.

### Sobre a ação de atender

Vamos considerar que `5` pessoas entraram na fila e `3` pessoas já foram atendidas. Nesse caso, temos a fila na seguinte condição:

`4 5`

A **próxima** ficha a ser gerada será a ficha `6` e a **última** ficha atendida foi a `3`.

Logo, precisamos de uma variável para indicar qual foi a `última ficha atendida`. É importante notarmos que, no começo da execução do programa, a primeira ficha gerada será a ficha `1`, então a `última ficha atendida` seria "nenhuma", que numericamente podemos representar como `0`. Também podemos modelar a variável como sendo `próxima ficha a ser atendida`, que deve começar com o valor `1`.

Para evitarmos o uso de duas variáveis com o nome `próxima`, optamos por usar `proximaFichaDisponivel` e `ultimaFichaAtendida`. Nomes parecidos podem ser confundidos e, caso isso acontença, isso é uma fonte de erros.

## Ponderações sobre as ações em si

### Sobre a geração de ficha

1. Sempre é possível se gerar uma ficha
2. Quando uma ficha é gerada, a variável que mantém a próxima ficha deve ser alterada

### Sobre a ação de atender

1. Só é possível se atender uma pessoa caso exista alguém na fila
2. Quando uma pessoa for atendida, precisamos atualizar a última ficha atendida

Exemplos:
```
proximaFichaDisponivel = 10
ultimaFichaAtendida = 6
```
Neste caso, um atendimento é possível

```
proximaFichaDisponivel = 1
ultimaFichaAtendida = 0
```
Este é o estado inicial do programa e, nesse caso, um atendimento **não** é possível.

Considerando as variáveis `proximaFichaDisponivel` e `ultimaFichaAtendida`, a verificação e execução deve ser feita da seguinte forma:

```
fichaASerAtendida = ultimaFichaAtendida + 1
ultimaFichaGerada = proximaFichaDisponivel - 1

if (fichaASerAtendida <= ultimaFichaGerada) {
    println("Atendendo ficha $fichaASerAtendida")
    ultimaFichaAtendida++
} else {
    println("Erro! Fila vazia!")
}
```

Observe que as variáveis `fichaASerAtendida` e `ultimaFichaGerada` devem *não* existir durante toda execução do programa, são variáveis locais, não são variáveis globais. Estas variáveis são úteis porque elas tornam mais natural a leitura do if.

### Sobre a ação de encerrar

Para encerrarmos, precisamos verificar se a fila está vazia. Precisamos verificar esta situação verificando as variáveis que indicam o estado geral do programa.

Considerando as variáveis `proximaFichaDisponivel` e `ultimaFichaAtendida`, a verificação deve ser feita da seguinte forma:

```
ultimaFichaGerada = proximaFichaDisponivel - 1

podeEncerrar = ultimaFichaGerada == ultimaFichaAtendida
```

Caso `podeEncerrar` seja verdadeiro, devemos "dar tchau" e  o programa pode encerrar. Caso contrário, devemos informar um erro.

## Outra ponderação sobre variáveis do programa

Para que o programa encerre, duas condições devem ser satisfeitas:

1. O usuário deve selecionar a opção de encerrar
2. A fila de pacientes deve estar vazia

Uma forma de controlar o loop do programa é através de uma variável `podeEncerrar`. Nesta solução, estamos usando uma abordagem com variáveis globais, então precisaremos destas três variáveis (com seus valores iniciais):

```
proximaFichaDisponivel = 1
ultimaFichaAtendida = 0
podeEncerrar = false
```

O programa vai rodar enquanto não pode encerrar

```
while (!podeEncerrar) {
    ...
}
```

Observe que a variável `podeEncerrar` começa como `false` e deve ser alterada para `true` quando as duas condições anteriores forem satisfeitas (o usuário pediu pra encerrar e não há paciente aguardando atendimento). Assim, o programa começa sem poder encerrar, opera indefinidas vezes e então encerra, quando todas as pessoas forem atendidas e a opção de encerrar seja selecionada.

##### Soluções: [Kotlin](https://github.com/elihimas/ExerciciosDeProgramacao/blob/main/exerc%C3%ADcios%20m%C3%A9dios/gerenciador%20de%20filas/MainGerenciadorDeFilas.kt) [C](https://github.com/elihimas/ExerciciosDeProgramacao/blob/main/exerc%C3%ADcios%20m%C3%A9dios/gerenciador%20de%20filas/main_gerenciador_de_filas.c) [Python](https://github.com/elihimas/ExerciciosDeProgramacao/blob/main/exerc%C3%ADcios%20m%C3%A9dios/gerenciador%20de%20filas/main_gerenciador_de_filas.py)
