#include <stdio.h>
#define CORPORACAO "CORPORACÃO TARIMBA SCORP"
#define VERSION "1.5.3"
#define MIN_ALTURA 0.50
#define MAX_ALTURA 3.0
const float UNDERWEIGHT = 18.5;
const float HEALTHY_WEIGHT = 24.9;
const float OVERWEIGHT = 29.9;
const float OBESE = 34.9;
const float SEVERELY_OBESE = 39.9;
const float MORBIDLY_OBESE = 40;
int main() {
    printf("---%s---     (V%s)\n", CORPORACAO, VERSION);
    float imc, peso, altura;
    char opcao;
    int idade, ano_nasci;
    char nome[50];
    printf("Digite seu nome: \n");
    scanf("%[^\n]", nome);
    printf("Digite sua idade e ano de nascimento: \n");
    scanf("%d %d", &idade, &ano_nasci);
    printf("Digite sua altura (H) e seu peso (KG): \n");
    scanf("%f %f", &altura, &peso);
    imc = peso / (altura * altura);
    if (altura <= MIN_ALTURA || altura >= 3.0) {
        printf("[ERROR!] (Digite uma altura válida)");
        return 1;
    }
    printf("DADOS:\nNOME: %s\nIDADE E ANO DE NASCIMENTO: %d %d\nPESO (kg) E ALTURA (h): %.2f %.2f\nIMC: %.2f\n", nome, idade, ano_nasci, peso, altura, imc);
    printf("Deseja saber sua classificação: (s/n) ");
    scanf(" %c", &opcao);
    if (opcao == 's' || opcao == 'S') {
    if (imc <= UNDERWEIGHT) {
    printf("Você está abaixo do peso (IMC: %.2f)", imc); }
    else if (imc <= HEALTHY_WEIGHT) {
    printf("Seu peso está normal (IMC: %.2f)", imc); }
    else if (imc <= OVERWEIGHT) {
    printf("Você está acima do peso (IMC: %.2f)", imc); }
    else if (imc <= OBESE) {
    printf("Você está obeso (IMC: %.2f)", imc); }
    else if (imc <= SEVERELY_OBESE) {
    printf("Você está severamente obeso (IMC: %.2f)", imc); }
    else if (imc <= MORBIDLY_OBESE) {
    printf("Você está com obesidade morbida! (IMC: %.2f)", imc); }
    } else { 
    printf("Você digitou outra coisa...\n"); }
        

    
    
    return 0;
}