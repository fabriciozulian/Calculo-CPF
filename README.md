# Calculadora de CPF em C

Este repositório contém um código em linguagem C que calcula o CPF (Cadastro de Pessoas Físicas) de acordo com os critérios oficiais de validação do Brasil. O código verifica se um CPF é válido com base nos dois dígitos verificadores e pode ser útil para validar números de CPF em sistemas de cadastro e controle.

## Descrição

O programa implementa a lógica de verificação de CPF utilizando a fórmula de cálculo dos dois últimos dígitos verificadores, que são usados para validar a autenticidade do CPF.

### O código faz o seguinte:
1. **Entrada**: Recebe um número de CPF (apenas os 9 primeiros dígitos).
2. **Cálculo dos Dígitos Verificadores**: Calcula os dois últimos dígitos finais do CPF.
3. **Validação**: Verifica se o CPF gerado é válido com base nos 9 primeiros dígitos fornecidos.
4. **Saída**: Informa se o CPF fornecido é válido ou inválido.

## Contexto do Projeto

Este código foi desenvolvido como parte de uma atividade da **faculdade**, na **disciplina de Linguagem de Programação**. O objetivo era aplicar conceitos fundamentais de programação, como algoritmos, controle de fluxo, e manipulação de dados, em um exercício prático para validar um CPF utilizando a linguagem C.

A atividade foi uma ótima oportunidade para revisar a lógica de programação básica e entender melhor como manipular números e strings em C.

## Como usar

### Pré-requisitos
- Compilador C (por exemplo, GCC)
- Ambiente de desenvolvimento C (pode ser um IDE como Code::Blocks ou um editor como Visual Studio Code com extensão para C)
