#include <stdio.h>
#include <string.h>

int main() {
    char placa[15];
    int tipoVeiculo;
    float tempo, valorHora = 0, valorBase, desconto = 0, multa = 0, valorFinal;
    char tipoTexto[15];

    printf("--- SISTEMA DE ESTACIONAMENTO ROTATIVO ---\n");

    // Entrada de Dados
    printf("Informe a placa do veiculo: ");
    scanf("%s", placa);

    printf("Escolha o tipo de veiculo:\n");
    printf("1 - Carro (R$ 5.00/h)\n");
    printf("2 - Moto (R$ 3.00/h)\n");
    printf("3 - Caminhonete (R$ 8.00/h)\n");
    printf("Opcao: ");
    scanf("%d", &tipoVeiculo);

    printf("Tempo de permanencia (em horas): ");
    scanf("%f", &tempo);

    // Processamento - Seleção do Tipo (Switch-Case)
    switch (tipoVeiculo) {
        case 1:
            valorHora = 5.00;
            strcpy(tipoTexto, "Carro");
            break;
        case 2:
            valorHora = 3.00;
            strcpy(tipoTexto, "Moto");
            break;
        case 3:
            valorHora = 8.00;
            strcpy(tipoTexto, "Caminhonete");
            break;
        default:
            printf("Erro: Tipo de veiculo invalido!\n");
            return 1;
    }

    // Regra da 1a hora (Valor Minimo)
    float tempoCalculo = tempo;
    if (tempo < 1.0) {
        tempoCalculo = 1.0;
    }

    // Calculo do Valor Base
    valorBase = tempoCalculo * valorHora;

    // Aplicacao de Desconto (> 5 horas)
    if (tempo > 5.0) {
        desconto = valorBase * 0.10;
    }

    // Aplicacao de Multa (> 10 horas)
    if (tempo > 10.0) {
        multa = 20.00;
    }

    // Valor Final
    valorFinal = valorBase - desconto + multa;

    // Saida dos Resultados
    printf("\n======================================\n");
    printf("           COMPROVANTE               \n");
    printf("======================================\n");
    printf("Placa: %s\n", placa);
    printf("Tipo: %s\n", tipoTexto);
    printf("Permanencia: %.2f horas\n", tempo);
    printf("--------------------------------------\n");
    printf("Valor Base: R$ %.2f\n", valorBase);
    printf("Desconto: R$ %.2f\n", desconto);
    printf("Multas: R$ %.2f\n", multa);
    printf("VALOR TOTAL: R$ %.2f\n", valorFinal);
    printf("======================================\n");

    return 0;
}
