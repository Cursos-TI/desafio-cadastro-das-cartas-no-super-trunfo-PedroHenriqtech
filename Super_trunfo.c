#include <stdio.h>

//Desafio super trunfo - Países 
// Tema 1 - Cadastro das Cartas

int main (){

char cidade1[50];
char cidade2[50];
char estado1[2];
char estado2[2];
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

printf("--* Super Trunfo - Países *-- \n\n");

printf("Carta 1: \n");

printf("Digite a letra inicial do estado (ex: A): "); //Digite conforme o exemplo dentro do parênteses
scanf("%s", &estado1); //Utilize a função scanf para capturar as entradas do usuário para cada atributo.

printf("Digite o código ( A letra do estado seguida de um número - ex: A01): "); //Digite conforme o exemplo dentro do parênteses
scanf("%s", &codigo1); //Utilize a função scanf para capturar as entradas do usuário para cada atributo.

printf("Digite o nome da cidade (ex: Manaus): "); //Digite conforme o exemplo dentro do parênteses
scanf("%s", &cidade1); //Utilize a função scanf para capturar as entradas do usuário para cada atributo.

printf("Digite a população (ex:50000) cinquenta mil: "); //Digite conforme o exemplo dentro do parênteses
scanf("%d", &populacao1); //Utilize a função scanf para capturar as entradas do usuário para cada atributo.

printf("Digite a área (ex: 1521.11) km²: "); //Digite conforme o exemplo dentro do parênteses
scanf("%f", &area1); //Utilize a função scanf para capturar as entradas do usuário para cada atributo.

printf("Digite o Pib (ex: 2000000000.00) duzentos bilhões: "); //Digite conforme o exemplo dentro do parênteses
scanf("%f", &pib1); //Utilize a função scanf para capturar as entradas do usuário para cada atributo.

printf("Digite os números de pontos turísticos (ex: 20): "); //Digite conforme o exemplo dentro do parênteses
scanf("%d", &pontosTuristicos1); //Utilize a função scanf para capturar as entradas do usuário para cada atributo.


//Informações da carta 2

printf("\nCarta 2: \n");

printf("Digite a letra inicial do estado (ex: C): "); //Digite conforme o exemplo dentro do parênteses
scanf("%s", &estado2); //Utilize a função scanf para capturar as entradas do usuário para cada atributo.

printf("Digite o código ( A letra do estado seguida de um número - ex: C01): "); //Digite conforme o exemplo dentro do parênteses
scanf("%s", &codigo2); //Utilize a função scanf para capturar as entradas do usuário para cada atributo.

printf("Digite o nome da cidade (ex: Fortaleza): "); //Digite conforme o exemplo dentro do parênteses
scanf("%s", &cidade2); //Utilize a função scanf para capturar as entradas do usuário para cada atributo.

printf("Digite a população (ex: 400000) quatrocentos mil: "); //Digite conforme o exemplo dentro do parênteses, ou seja, somente números
scanf("%d", &populacao2); //Utilize a função scanf para capturar as entradas do usuário para cada atributo.

printf("Digite a área (ex: 5500.00) km²: "); //Digite conforme o exemplo dentro do parênteses
scanf("%f", &area2); //Utilize a função scanf para capturar as entradas do usuário para cada atributo.

printf("Digite o Pib (ex: 2000000000.00) duzentos bilhões: "); //Digite conforme o exemplo dentro do parênteses
scanf("%f", &pib2); //Utilize a função scanf para capturar as entradas do usuário para cada atributo.

printf("Digite os números de pontos turísticos (ex: 15): "); //Digite conforme o exemplo dentro do parênteses
scanf("%d", &pontosTuristicos2); //Utilize a função scanf para capturar as entradas do usuário para cada atributo.

double pibPercapita1 = pib1 / populacao1;
double pibPercapita2 = pib2 / populacao2;  
float densidadePopulacional1 = populacao1 / area1;
float densidadePopulacional2 = populacao2 / area2;


//Imprimindo carta 1 
// Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.

printf("\nSuper trunfo - Carta 1: \n");
printf("Estado: %s\n", estado1);
printf("Código: %s\n", codigo1);
printf("Cidade: %s\n", cidade1);
printf("População: %d habitantes\n", populacao1);
printf("Área: %.2f km²\n", area1);
printf("Pib: %.2f bilhões de reais\n", pib1);
printf("Pontos turísticos: %d\n", pontosTuristicos1);
printf("PIB per Capita: %.2f reais\n", pibPercapita1);
printf("Densidade populacional: %.2f hab/km²\n" , densidadePopulacional1);

//imprimindo carta 2
// Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.

printf("\nSuper trunfo - Carta 2: \n");
printf("Estado: %s\n", estado2);
printf("Código: %s\n", codigo2);
printf("Cidade: %s\n", cidade2);
printf("População: %d habitantes\n", populacao2);
printf("Área: %.2f km²\n", area2);
printf("Pib: %.2f bilhões de reais\n", pib2);
printf("Pontos turísticos: %d\n", pontosTuristicos2);
printf("PIB per Capita: %.2f reais\n", pibPercapita2);
printf("Densidade populacional: %.2f hab/km²\n" , densidadePopulacional2);

return 0;
}