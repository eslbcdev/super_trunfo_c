# super_trunfo_c

# 📊 Comparador de Cartas de Estados e Países

Este é um programa em linguagem C que simula o jogo Super Trunfo, cuja premissa é ser um jogo de comparação entre duas "cartas"; as cartas contém atributos que  representam regiões (estados ou países). Cada carta possui atributos numéricos como população, área, PIB, etc., e o objetivo é comparar esses dados para determinar qual carta vence em cada categoria.

Para este projeto, foram utilizados os atributos: População, Área, PIB, PIB per Capita e Densidade Populacional;

## 🚀 Funcionalidades

- Entrada de dados para duas cartas (estado, país, código, população, área, PIB).
- Cálculo automático de:
  - PIB per capita
  - Densidade populacional
  - Super Poder (pontuação baseada em múltiplos atributos)
- Comparação entre as cartas com exibição do vencedor em cada categoria.
- Uso de operadores ternários no lugar de estruturas condicionais.

## 🧠 Como o Super Poder é calculado?

O Super Poder de cada carta é obtido somando:
- População
- Área
- PIB
- PIB per capita
- O **inverso** da densidade populacional (quanto menor a densidade, maior o poder)

## 🛠️ Compilação e Execução

Compile com:

```bash
gcc -o comparador comparador.c
