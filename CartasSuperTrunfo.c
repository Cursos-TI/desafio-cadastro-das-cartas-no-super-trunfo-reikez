#include <stdio.h>

int main() {
    struct Carta cartas[100]; // Array para armazenar até 100 cartas
    int quantidade = 0; // Número de cartas cadastradas
    int opcao;

    do {
        printf("\n===== MENU SUPER TRUNFO - PAISES =====\n");
        printf("1. Cadastrar cartas\n");
        printf("2. Exibir cartas\n");
        printf("3. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                cadastrarCartas(cartas, &quantidade);
                break;
            case 2:
                exibirCartas(cartas, quantidade);
                break;
            case 3:
                printf("\nSaindo do programa. Até mais!\n");
                break;
            default:
                printf("\nOpção inválida! Tente novamente.\n");
        }
    } while (opcao != 3);

    return 0;
