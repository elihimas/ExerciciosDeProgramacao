# Modelagem e arquitetura

#### 1) Cálculo de idade II

Crie um programa que calcula a idade do usuário. Este programa deve ler o nome, ano de nascimento, ano atual e se o o usuário já fez aniversário este ano.

Além de calcular a idade, o programa deve informar se o usuário é criança (0-12 anos), adolescente (13-17 anos) ou adulto(a) (18 anos ou mais).

Para esta implementação, crie uma estrutura chamada `Entrada`, que guarde os dados de entrada e outra estrutura, chamada `Resultados`, que guarde o resultado, ou seja, a idade e classificaçao (criança, adolescente ou adulto(a))

Crie três funções para implementar sua solução:
- `lerDados()` -> faz a leitura da `Entrada`
- `analizar(entrada)` -> dada uma `Entrada`, retorna o `Resultados` esperado
- `exibirResultados(resultados)` -> que exibe os resultados do programa.

A partir destes funções, seu código principal deve ter apenas 3 linhas.

#### 2) Classificação de candidatos

Faça um programa que lê os dados de duass candidaturas e informa qual candidato tem a maior pontuação.

Cada candidatura tem as seguintes informações:

```
- Nome
- Nível de habilidade -> iniciante, intermediário ou avançado
- Habilidades -> algoritmos, modelagem, orientação a objetos, Kotlin, C, Java, Python ou 
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
```

É possível que uma candidatura seja preenchida de forma inválida. Caso o nome não seja preenchido ou o nível de habilidade não seja identico aos níveis listados, a candidatura deve ser invalidada.

Para resolver este problema, crie uma estrutura chamada `Candidatura`, com os dados citados acima e uma estrutura chamada `ResultadoDaCandidatura`, que tem dentro de si uma candidatura e a pontuação daquela candidatura. Caso a pontuação seja 0, isto indica que a candidatura é inválida. 

Crie também uma estrutura `ResultadoDaSelecao`. Esta estrutura tem duas informações: uma mensagem de erro e a candidatura vencedora. Existem alguns casos possíveis de resultado da seleção:

```
Duas candidaturas  inválidas -> o erro deve ser preenchido e a candidatura vencedora será nula

Ambas as candidaturas são válidas e com igual pontuação ->  o erro deve ser preenchido com "empate" e a candidatura vencedora será nula

Em qualquer outro caso, a candidatura com maior pontuação deverá ser a vencedora e não temos erro.
```

Faça uma função chamada `lerCandidatura()`, que faz a leitura de uma candidatura, uma funçao `avaliar(candidatura)` que avalia a candidatura e gera o resultado da candidatura e faça uma função `gerarResultado(resultadoDaCandidatura1, ResultadoDaCandidatura2)`, que gera o resultado final. Para finalizar, faça uma função chamada `exibirResultadoDaSelecao(resultadoDaSelecao)`, que deve informar o resutlado do processo como um todo.

Seu código principal terá algumas linhas de código, então deixe algumas linhas em branco para deixar claro quais são as seções do código (letura, processamento e saída).