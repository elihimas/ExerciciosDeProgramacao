# Modelagem e arquitetura

#### 1) Cálculo de idade II

Crie um programa que calcula a idade do usuário. Este programa deve ler o nome, ano de nascimento, ano atual e se o o usuário já fez aniversário este ano.

Além de calcular a idade, o programa deve informar se o usuário é criança (0-12 anos), adolescente (13-17 anos) ou adulto(a) (18 anos ou mais).

<details>
    <summary>Aprofundamento</summary>
Para esta implementação, crie uma entidade chamada `Entrada`, que guarde os dados de entrada e outra entidade, chamada `Resultados`, que guarde o resultado, ou seja, a idade e classificaçao (criança, adolescente ou adulto(a))

Crie três funções para implementar sua solução:
- `lerDados()` -> faz a leitura da `Entrada`
- `analizar(entrada)` -> dada uma `Entrada`, retorna o `Resultados` esperado
- `exibirResultados(resultados)` -> que exibe os resultados do programa.

A partir destes funções, seu código principal deve ter apenas 3 linhas.
</details>

#### 2) Classificação de candidatos

Faça um programa que lê os dados de duas candidaturas e informa qual candidato tem a maior pontuação.

Cada candidatura tem as seguintes informações:

```
- Nome
- Nível de habilidade -> iniciante, intermediário ou avançado
- Habilidades -> algoritmos, modelagem, orientação a objetos, Kotlin, C, Java ou Python 
- Habilidades interpessoais -> boa comunicação, capacidade de mediação, escuta ativa, autonomia ou proatividade
- Anos de experiência
```

O cálculo de pontuação se dá da seguinte forma:

```
iniciante                   10 pontos
intermediário               30 pontos
avançado                    80 pontos
habilidade                  20 pontos
habilidade interpessoal     25 pontos
experiência                 10 pontos
```

<details>
    <summary>Aprofundamento</summary>
É possível que uma candidatura seja preenchida de forma inválida. Caso o nome não seja preenchido ou o nível de habilidade não seja identico aos níveis listados, a candidatura deve ser invalidada.

Para resolver este problema, crie uma entidade chamada `Candidatura`, com os dados citados acima e uma entidade chamada `ResultadoDaCandidatura`, que tem dentro de si uma candidatura e a pontuação daquela candidatura. Caso a pontuação seja 0, isto indica que a candidatura é inválida. 

Crie também uma entidade `ResultadoDaSelecao`. Esta entidade tem duas informações: uma mensagem de erro e a candidatura vencedora. Existem alguns casos possíveis de resultado da seleção:

```
Duas candidaturas  inválidas -> o erro deve ser preenchido e a candidatura vencedora será nula

Ambas as candidaturas são válidas e com igual pontuação ->  o erro deve ser preenchido com "empate" e a candidatura vencedora será nula

Em qualquer outro caso, a candidatura com maior pontuação deverá ser a vencedora e não temos erro.
```

Faça uma função chamada `lerCandidatura()`, que faz a leitura de uma candidatura, uma funçao `avaliar(candidatura)` que avalia a candidatura e gera o resultado da candidatura e faça uma função `gerarResultado(resultadoDaCandidatura1, ResultadoDaCandidatura2)`, que gera o resultado final. Para finalizar, faça uma função chamada `exibirResultadoDaSelecao(resultadoDaSelecao)`, que deve informar o resutlado do processo como um todo.

Seu código principal terá algumas linhas de código, então deixe algumas linhas em branco para deixar claro quais são as seções do código (letura, processamento e saída).
</details>

#### 3) Urna eletrônica

O condomínio de um prédio quer utilizar um sistema eletrônico de votação. Faça um sistema de votação que lê os candidatos, a quantidade de votantes e então processa a votação, em dois turnos.

<details>
    <summary>Aprofundamento</summary>

Caso um dos candidatos atinja 50% dos votos, arredondos para cima, não haverá segundo turno.
Caso contrário, os dois candidatos mais votados devem ir para o segundo turno.

Casos extremos:
- Caso haja somente um candidato, a votação não deve ser processada.
- Caso só hajam dois candidatos, não deverá haver segundo turno.
- Caso o segundo e o terceiro candidatos tenham a mesma votação no primeiro turno, a etapa do primeiro turno deve ser repetida.

#### Ponderações sobre a solução
Este sistema tem os conceitos de `candidato`, `primeiro turno`, `segundo turno`, `voto` e `resultado`.

Pense um pouco: qual ou quais destes conceitos precisam ser modelados como entidades? Como as entidades do sistema vão se relacionar?

Um `candidato` possui uma quantidade de votos. Para cada `voto`, a quantidade de votos de algum dos candidatos é incrementada.

#### Dividir pra conquistar
A quantidade de `candidatos` determina alguns aspectos do comportamento do sistema, então nós temos que implementar uma solução para cada um destes casos, mas isso aumenta a complexidade geral do sistema. 

Após a leitura inicial dos dados, ou seja, a leitura dos candidatos, temos que determinar se haverá ou não segundo turno. Inicialmente, podemos fazer uma simplificação:

1 candidato -> o sistema deve informar que não é possível fazer a eleição

2 candidatos -> processamos esse tipo de votação

mais candidatos -> o sistema deve informar que elições com múltiplos candidatos ainda não é suportada.

Ou seja, simplificamos o sistema pra um sistema de votação de dois candidatos. Estando isso pronto, podemos partir pra situação mais difícil de se processar uma eleição completa.

No desenvolvimento de software, temos que organizar nosso trabalho de modo a dividirmos os problemas em problemas menores, para que eles possam ser resolvidos individualmente, o que nos permite trabalharmos de forma mais simples e eficiente.

</details>