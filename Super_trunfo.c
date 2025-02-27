#include <stdio.h>

//Desafio super trunfo - Países 
// Tema 1 - Cadastro das Cartas

int main (){
char carta[50];
char cidade1[50];
char cidade2[50];
char estado1[50];
char estado2[50];
char codigo1[50];
char codigo2[50];
int populacao1;
int populacao2;
float area1;
float area2;
float pib1;
float pib2;
int pontosTuristicos1;
int pontosTuristicos2;

//Siga os comentários para implementar cada parte do desafio.
//Informações da carta 1

//Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.

printf("Super Trunfo - Países \n");
printf("Carta 1: \n");

printf("Digite o estado (ex: Ceará): "); //Digite conforme o exemplo dentro do parênteses
scanf("%s", &estado1); //Utilize a função scanf para capturar as entradas do usuário para cada atributo.

printf("Digite o código (ex: A01): "); //Digite conforme o exemplo dentro do parênteses
scanf("%s", &codigo1); //Utilize a função scanf para capturar as entradas do usuário para cada atributo.

printf("Digite o nome da cidade (ex: Fortaleza): "); //Digite conforme o exemplo dentro do parênteses
scanf("%s", &cidade1); //Utilize a função scanf para capturar as entradas do usuário para cada atributo.

printf("Digite a população (ex:50000 (cinquenta mil): "); //Digite conforme o exemplo dentro do parênteses
scanf("%d", &populacao1); //Utilize a função scanf para capturar as entradas do usuário para cada atributo.

printf("Digite a área (ex: 1521.11) km²: "); //Digite conforme o exemplo dentro do parênteses
scanf("%f", &area1); //Utilize a função scanf para capturar as entradas do usuário para cada atributo.

printf("Digite o Pib (ex: 700.28) milhões: "); //Digite conforme o exemplo dentro do parênteses
scanf("%f", &pib1); //Utilize a função scanf para capturar as entradas do usuário para cada atributo.

printf("Digite os números de pontos turísticos (ex: 20): "); //Digite conforme o exemplo dentro do parênteses
scanf("%d", &pontosTuristicos1); //Utilize a função scanf para capturar as entradas do usuário para cada atributo.


//Informações da carta 2

printf("\nCarta 2: \n");

printf("Digite o estado (ex: Pernambuco): "); //Digite conforme o exemplo dentro do parênteses
scanf("%s", &estado2); //Utilize a função scanf para capturar as entradas do usuário para cada atributo.

printf("Digite o código (ex: B01): "); //Digite conforme o exemplo dentro do parênteses
scanf("%s", &codigo2); //Utilize a função scanf para capturar as entradas do usuário para cada atributo.

printf("Digite o nome da cidade (ex: Recife): "); //Digite conforme o exemplo dentro do parênteses
scanf("%s", &cidade2); //Utilize a função scanf para capturar as entradas do usuário para cada atributo.

printf("Digite a população (ex: (200000) duzentos mil: "); //Digite conforme o exemplo dentro do parênteses
scanf("%d", &populacao2); //Utilize a função scanf para capturar as entradas do usuário para cada atributo.

printf("Digite a área (ex: 5500.00 km²): "); //Digite conforme o exemplo dentro do parênteses
scanf("%f", &area2); //Utilize a função scanf para capturar as entradas do usuário para cada atributo.

printf("Digite o Pib (ex: 800.00) milhões: "); //Digite conforme o exemplo dentro do parênteses
scanf("%f", &pib2); //Utilize a função scanf para capturar as entradas do usuário para cada atributo.

printf("Digite os números de pontos turísticos (ex: 15): "); //Digite conforme o exemplo dentro do parênteses
scanf("%d", &pontosTuristicos2); //Utilize a função scanf para capturar as entradas do usuário para cada atributo.

//Imprimindo as cartas 1 e 2
// Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.

printf("\nSuper trunfo - Carta 1: \n");
printf("Estado: %s\n", estado1);
printf("Código: %s\n", codigo1);
printf("Cidade: %s\n", cidade1);
printf("População: %d\n", populacao1);
printf("Área: %.2f km²\n", area1);
printf("Pib: %.2f milhões de reais\n", pib1);
printf("Pontos turísticos: %d\n", pontosTuristicos1);

printf("\nSuper trunfo - Carta 2: \n");
printf("Estado: %s\n", estado2);
printf("Código: %s\n", codigo2);
printf("Cidade: %s\n", cidade2);
printf("População: %d\n", populacao2);
printf("Área: %.2f km²\n", area2);
printf("Pib: %.2f milhões de reais\n", pib2);
printf("Pontos turísticos: %d\n", pontosTuristicos2);

return 0;
}