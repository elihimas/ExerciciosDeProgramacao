# Pequenos desafios

#### 1) Melhores de três
Um professor usa o seguinte esquema para gerar suas notas: cada aluno faz três provas, a menor delas e descartada e sobre as outras duas é feita uma média.

Faça uma função que recebe 3 notas e retorna a nota gerada pelo esquema proposto.

Para testar sua solução, crie um programa que chama esta função 3 vezes e exibe seu resultado.

#### 2) Melhor da turma
Queremos determinar qual foi a melhor nota de uma turma. Para isso, precisamos ler quantos alunos temos na sala e então a nota de cada um destes alunos.

Faça um programa que lê a quantidade de alunos e depois cada nota, então informa qual foi a maior nota da turma.

#### 3) Cálculo de idade
Podemos saber a idade de uma pessoa a partir de três informações: seu ano de nascimento, o ano atual e se a pessoa já celebrou seu aniversário no ano corrente.

Faça um programa que pergunta o ano de nascimento, o ano atual e se a pessoa já fez aniversário este ano e então calcula e exibe a idade da pessoa.

#### 4) Lista de amigos II
Faça um programa de leitura de amigos. Este programa deve conseguir ler vários amigos de uma só vez, separados por vígula. Para fazer isso, precisamos ser capazes de transformar uma única string numa lista de strings, ou num array de strings, dependendo da linguagem utilizada. Após a leitura dos amigos, o programa deve mostrar os amigos lidos.

<details>
  <summary>Exemplo de execução</summary>

```
Gerenciador de amigos

Digite alguns amigos, separados por vígula: Huguinho, Zezinho, Luisinho

Amigos lidos:
Huguinho
Zezinho
Luisinho
```
</details>

#### 5) Compra mais vantajosa
Frequentemente temos que escolher entre produtos semelhantes, mas com quantidade ou volume ou peso diferentes, além do preço. Faça um programa que calcula entre dois produtos qual é a compra mais vantajosa.

O programa deve ler o nome, preço e quantidade de dois produtos e informar qual deles tem melhor valor. O programa não deve fazer a leitura de unidades de medida (kg, ml, etc)

<details>
  <summary>Exemplo de execução</summary>

```
Compra mais vantajosa

Digite o nome do primeiro produto:
Toddy 400

Quanto custa Toddy 400?
4,50

Quanto vem do protudo?
400

Digite o nome do segundo produto:
Toddy 700

Quanto custa Toddy 700?
7,80

Quanto vem do protudo?
700

A compra mais vantajosa é: Toddy 700
```
</details>

#### 6) Unidades de medida
O que é mais longo, 4 dias ou 100 horas?

O que pesa mais, 8kg ou 8000g?

Muitas vezes temos que decompor, identificar e transformar entradas do usuário. Faça um programa que lê dois valores de peso e, caso eles estejam em unidades distintas, informa os valores equivalente na outra medida. Ao fim, o programa deve informar qual valor é maior. O programa deve ser capaz de aceitar valores em gramas, kilos e toneladas. 

- Caso os valores sejam equivalentes, isso deve ser informado.
- Caso o usuário digite uma entrada inválida, o programa deve indicar erro.

Faça um segundo programa que aplica a mesma lógica para tempo.

<details>
  <summary>Exemplos de execução</summary>

```
Unidades de medida

Digite um valor de peso: 800g
Digite outro valor de peso: 4kg

Resultados:
- 800g corresponde a 0,8kg
- 4kg corresponde a 4000g

Logo, 4kg pesa mais que 800g
```
  
```
Unidades de medida

Digite um valor de peso: 7kg
Digite outro valor de peso: 4kg

7kg pesa mais que 4kg
```
```
Unidades de medida

Digite um valor de peso: 8t
Digite outro valor de peso: 8000kg

Resultados:
- 8t corresponde a 8000kg
- 8000kg corresponde a 8t

Logo, 8t pesa o mesmo que 8000kg
```
```
Unidades de medida

Digite um valor de peso: 8t
Digite outro valor de peso: 8000k

Dados inválidos!!!
```
</details>