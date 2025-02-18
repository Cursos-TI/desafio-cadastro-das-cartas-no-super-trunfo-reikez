#include <stdio.h>

int main() {
  
  char codigo[4];
  char cidade[50];
  int populacao;
  float area;
  float pib;
  int pontos turisticos;
  
};


   void cadastrarcartas(struct carta cartas[], int *quantidade) {
       printf("\n quantas cartas deseja cadastrar? ");
       scanf("%d", quantidade);

       for (int i = 0; i < *quantidade; i++) {
           printf("\n cadastro da carta %d%d\n", i + 1, *quantidade);

           printf("digite o codigo da carta (Ex: A01): ");
           scanf("%s", cartas[i]. codigo);

           printf("digite o nome da cidade: ");
           scanf("%[^\n]", cartas[i]cidade);

           printf("Digite a população da cidade: ");
           scanf("%d", &cartas[i].populacao);
   
           printf("Digite a área da cidade (em km²): ");
           scanf("%f", &cartas[i].area);
   
           printf("Digite o PIB da cidade (em milhões): ");
           scanf("%f", &cartas[i].pib);
   
           printf("Digite o número de pontos turísticos: ");
           scanf("%d", &cartas[i].pontosTuristicos);
       }
   
       printf("\nCartas cadastradas com sucesso!\n");
   }
   
   // Função para exibir cartas cadastradas
   void exibirCartas(struct Carta cartas[], int quantidade) {
       if (quantidade == 0) {
           printf("\nNenhuma carta cadastrada ainda!\n");
           return;
       }
   
       printf("\n==== Cartas Cadastradas ====\n");
       for (int i = 0; i < quantidade; i++) {
           printf("\n--- Carta %d ---\n", i + 1);
           printf("Código: %s\n", cartas[i].codigo);
           printf("Cidade: %s\n", cartas[i].cidade);
           printf("População: %d habitantes\n", cartas[i].populacao);
           printf("Área: %.2f km²\n", cartas[i].area);
           printf("PIB: %.2f milhões\n", cartas[i].pib);
           printf("Pontos Turísticos: %d\n", cartas[i].pontosTuristicos);
       }
   }
   
   // Função principal
   int main() {
       struct Carta cartas[100]; // Vetor para armazenar até 100 cartas
       int quantidade = 0; // Quantidade de cartas cadastradas
       int opcao; // Variável para armazenar a escolha do usuário
   
       do {
           // Menu do programa
           printf("\n===== MENU SUPER TRUNFO - PAISES =====\n");
           printf("1. Cadastrar cartas\n");
           printf("2. Exibir cartas\n");
           printf("3. Sair\n");
           printf("Escolha uma opção: ");
           scanf("%d", &opcao);
   
           // Executa a ação de acordo com a opção escolhida
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













       }









}
