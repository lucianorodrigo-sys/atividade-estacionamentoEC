# Atividade: Sistema de Gerenciamento de Estacionamento Rotativo

* **Nome:** Luciano Rodrigo Silva Pereira
* **Matrícula:** [20240045283]
* **Curso:** Ciência e Tecnologia - UFMA
* **Disciplina:** Laboratório de Programação
* **Professor:** Rondineli Seba Salomão

---

## 1. Análise do Problema
O sistema simula o controle de um estacionamento rotativo real. Ao entrar, o veículo é identificado pela placa e categoria. O sistema registra o tempo de permanência e, ao sair, aplica regras de cobrança baseadas na tarifa horária de cada categoria, aplicando descontos por tempo prolongado ou multas por excesso de permanência.

## 2. Definição das Variáveis
| Nome | Tipo | Finalidade |
| :--- | :--- | :--- |
| `placa` | `char[]` | Identificação alfanumérica do veículo. |
| `tipoVeiculo` | `int` | Código numérico para a escolha no switch-case. |
| `tempo` | `float` | Horas de permanência informadas. |
| `valorHora` | `float` | Preço por hora definido pela categoria. |
| `valorBase` | `float` | Cálculo inicial (Tempo x ValorHora). |
| `desconto` | `float` | Valor deduzido (10%) se tempo > 5h. |
| `multa` | `float` | Adicional de R$ 20,00 se tempo > 10h. |
| `valorFinal` | `float` | Resultado final após ajustes. |

## 3. Regras de Negócio
* **Tabela de Preços:** Carro (R$ 5/h), Moto (R$ 3/h), Caminhonete (R$ 8/h).
* **Tempo Mínimo:** Se a permanência for menor que 1h, cobra-se o valor de 1h.
* **Desconto:** 10% de desconto para permanências acima de 5 horas.
* **Multa:** Taxa fixa de R$ 20,00 para permanências acima de 10 horas.

## 4. Explicação da Lógica
O programa utiliza uma estrutura de seleção `switch-case` para definir a tarifa base de acordo com a categoria escolhida. Em seguida, utiliza condicionais `if` simples para verificar se o tempo informado aciona as cláusulas de desconto ou multa, garantindo que o cálculo seja preciso conforme as regras de negócio sem o uso de laços de repetição.

## 5. Como Compilar e Executar
1. Compile o código com: `gcc main.c -o estacionamento`
2. Execute com: `./estacionamento`

## 6. Exemplo de Entrada e Saída
* **Entrada:** Placa: `UFMA-2026`, Tipo: `1` (Carro), Tempo: `6` horas.
* **Saída:** Valor Base: `R$ 30.00`, Desconto: `R$ 3.00`, Valor Final: `R$ 27.00`.
