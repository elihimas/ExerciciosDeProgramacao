# Pequenos projetos

#### 1) Jogo de perguntas e respostas

Faça um programa que faz três perguntas e informa quantas perguntas o usuário acertou

<details>
  <summary>Exemplo</summary>

```
JOGO DE PERGUNTAS

Qual estado brasileiro tem a bandeira mais bonita?
Pernambuco

ACERTOU!

Qual a capital de Pernambuco?
Recife

ACERTOU!

Qual o nome do melhor time de Pernambuco?
Sport

ACERTOU!

Você acertou 3 perguntas!
```
</details>

#### 2) Gerenciador de filas

Faça um gerenciador de filas. Este programa deve ter 3 opções:

1. gerar ficha
2. atender
3. encerrar

- Caso a opção `atender` seja selecionada e a fila estiver vazia, devemos informar um erro
- Caso a opção `encerrar` seja selecionada e existir paciente esperando, devemos informar um erro

<details>
  <summary>Exemplo</summary>

```
Gerenciador de filas

Escolha uma opção:
1 - Gerar ficha
2 - atender
3 - encerra

Opção: 1

Ficha gerada: 1

Escolha uma opção:
1 - Gerar ficha
2 - atender
3 - encerrar

Opção: 2

Atendendo ficha 1

Escolha uma opção:
1 - Gerar ficha
2 - atender
3 - encerrar

Opção: 2

Erro! Fila vazia!

Escolha uma opção:
1 - Gerar ficha
2 - atender
3 - encerrar

Opção: 1

Ficha gerada: 2

Escolha uma opção:
1 - Gerar ficha
2 - atender
3 - encerrar

Opção: 3

Erro! Atenda os pacientes antes de encerrar!
```
</details>

##### [Explicação de solução](https://github.com/elihimas/ExerciciosDeProgramacao/blob/main/pequenos%20projetos/gerenciador%20de%20filas/solu%C3%A7%C3%A3o%20explicada.md)